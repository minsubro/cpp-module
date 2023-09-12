#include "Converter.hpp"

Converter::Converter() {
}

Converter::Converter(const Converter& origin) {
    this->c = origin.c;
    this->n = origin.n;
    this->f = origin.f;
    this->d = origin.d;
    this->error = false;
}

Converter &Converter::operator=(const Converter& origin) {
    if (this != &origin) {
        this->c = origin.c;
        this->n = origin.n;
        this->f = origin.f;
        this->d = origin.d;
        this->error = origin.error;
    }
    return *this;
}

Converter::~Converter() {}

/*
    char   : 0
    int    : 1
    float  : 2
    double : 3
    error  : 4
*/



void Converter::conversion(std::string str) {

   int type = getType(str);
   if (type == 4) {
       std::cout << "undefined type" << std::endl;
       
   }
   if (type == 0) {
       Converter::charType(str);
   }
   else if (type == 1) {
       Converter::intType(str);
   }
   else if (type == 2) {
       Converter::floatType(str);
   }
   else if (type == 3) {
       Converter::doubleType(str);
   }
   if (error) {
       return;
   }
   std::cout << "char: " << this->c\
             << "\nint: "  << this->n\
             << "\nfloat: " << this->f\
             << "\ndouble: " << this->d << std::endl;
}

void    Converter::intType(std::string str) {
    int tmp = std::atoi(str.c_str());
    if (std::to_string(tmp) != str) {
        std::cout << "int overflow" << std::endl;
        this->error = true;
        return ;
    }
    if (isascii(tmp)) {
        if (std::isprint(tmp)) {
            this->c = static_cast<char>(tmp);
        }
        else {
            this->c = "Non displayable";
        }
    }
    else {
        this->c = "impossible";
    }
    this->n = std::to_string(tmp);
    this->f = std::to_string(static_cast<float>(tmp)) + "f";
    this->d = std::to_string(static_cast<double>(tmp));
}

void    Converter::charType(std::string str) {
    if (std::isprint(str[0])) {
        this->c = static_cast<char>(str[0]);
    }
    else {
        this->c = "Non displayable";
    }
    this->n = std::to_string(static_cast<int>(str[0]));
    this->f = std::to_string(static_cast<float>(str[0])) + "f";
    this->d = std::to_string(static_cast<double>(str[0]));
}

void    Converter::floatType(std::string str) {
    float tmp;
    if (str == "-inff" || str == "+inff" || str == "nanf") {
        this->c = "impossible";
        this->n = "impossible";
        if (str == "-inff") {
            tmp = __DBL_MAX__ * -1000;
        }
        else if (str == "+inff") {
            tmp = __DBL_MAX__ * 1000;
        }
        else {
            tmp = sqrt(-1.0);
        }
        this->f = std::to_string(tmp) + "f";
        this->d = std::to_string(static_cast<double>(tmp));
    }
    else {
        tmp = std::strtof(str.c_str(), NULL);
        if (isascii(static_cast<int>(tmp))) {
            if (std::isprint(static_cast<int>(tmp))) {
                this->c = static_cast<char>(tmp);
            }
            else
                this->c = "Non displayable";
        }
        else {
            this->c = "impossible";
        }
        this->n = std::to_string(static_cast<int>(tmp));
        this->f = std::to_string(tmp) + "f";
        this->d = std::to_string(static_cast<double>(tmp));
    }
}

void    Converter::doubleType(std::string str) {
    double tmp;
    std::string a = "123.0";
    double a = static_cast<double>(a)
    if (str == "-inf" || str == "+inf" || str == "nan") {
        this->c = "impossible";
        this->n = "impossible";
        if (str == "-inf") {
            tmp = __DBL_MAX__ * -1000;
        }
        else if (str == "+inf") {
            tmp = __DBL_MAX__ * 1000;
        }
        else {
            tmp = sqrt(-1.0);
        }
        this->f = std::to_string(static_cast<float>(tmp)) + "f";
        this->d = std::to_string(tmp);
    }
    else {
        tmp = std::strtof(str.c_str(), NULL);
        if (isascii(static_cast<int>(tmp))) {
            if (std::isprint(static_cast<int>(tmp))) {
                this->c = static_cast<char>(tmp);
            }
            else
                this->c = "Non displayable";
        }
        else {
            this->c = "impossible";
        }
        this->n = std::to_string(static_cast<int>(tmp));
        this->f = std::to_string(static_cast<float>(tmp)) + "f";
        this->d = std::to_string(tmp);
    }
}





// void Converter::setInt(const char *str) {
//     if ()
// }




// utils

int getType(std::string str) {
    if (str.length() == 1) {
        if (std::isdigit(static_cast<int>(str[0])) == 0)
            return 0;
        else
            return 1;
    }
    else if (str == "nan" || str == "+inf" || str == "-inf" || str == "nanf" || str == "+inff" || str == "-inff") {
        if (str == "nan" || str == "+inf" || str == "-inf") {
            return 3;
        }
        else
            return 2;
    }
    else if (isString(str)) {
        return 4;
    }
    else if (allIsDigit(str.c_str())) {
        return 1;        
    }
    else if (str[str.length() - 1] == 'f') {
        return 2;
    }
    else {
        return 3;
    }
}

bool allIsDigit(const char *str) {
    for (size_t i = 0; i < std::strlen(str); i++) {
        if (isdigit(str[i]) == 0) {
            if (i == 0 && (str[i] == '-' || str[i] == '+'))
                continue;
            return false;
        }
    }
    return true;
}

bool isString(std::string str) {
    int dotflag = 0;
    
    for (unsigned long i = 0; i < str.length(); i++) {
        if (std::isdigit(static_cast<int>(str[i])) == 0) {
            if (str[i] == '.') {
                if (dotflag == 1 || i == str.length() - 1) {
                    return true;
                }
                dotflag = 1;
            }
            else if (str[i] == 'f' && i == str.length() - 1) {
                continue ;
            }
            else if (i == 0 && (str[i] == '-' || str[i] == '+'))
                continue;
            else {
                return true;
            }
        }
    }
    return false;
}

int Converter::my_atoi(const char * str) {
    long long n = 0;
    int sign = 1;
    int i = 0;
    
    if (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    if (str[i] )
    while (str[i])
    {
        if (n * 10 + str[i] - 48 > INT_MAX || (n * 10 + str[i] - 48) * sign < INT_MIN ) {
            throw overflowException();
        }
        n = n * 10 + str[i] - 48;
    }
    return n * sign;
}

// exception
const char *Converter::overflowException::what() const throw() {
    return "overflow";
}