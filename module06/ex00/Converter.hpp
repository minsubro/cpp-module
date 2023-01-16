#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include "iostream"
#include <limits.h>
#include <cmath>

class Converter
{
    private:
        std::string c;
        std::string n;
        std::string f;
        std::string d;
        bool error;
        
    public:
        ~Converter();
        Converter();
        Converter(const Converter &);
        Converter &operator=(const Converter &);
        
        void conversion(std::string);

        void charType(std::string);
        void intType(std::string);
        void floatType(std::string);
        void doubleType(std::string);


		//utils
        int my_atoi(const char *str);

        class overflowException: std::exception {
            public :
                const char * what() const throw();
        };

};

int     getType(std::string str);
bool    allIsDigit(const char *str);
bool    isString(std::string str);



#endif
