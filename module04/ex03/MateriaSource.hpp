#ifndef MATERIASOURCE_CPP
# define MATERIASOURCE_CPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: public IMateriaSource {
	private :
			AMateria *save[4];

	public :
			MateriaSource();
			MateriaSource(const MateriaSource &);
			MateriaSource &operator=(const MateriaSource &);
			~MateriaSource();
			void	learnMateria(AMateria *);
			AMateria	*createMateria(std::string const & type);
			AMateria	*getMateria(int idx) const;
};

#endif