# ifndef CANONICALFORM_H
# define CANONICALFORM_H

#include <iostream>

class Sample {

	public :
		Sample( void );								//canonical --> constructeur par defaut (le mettre dans la section private si non necessaire)
		Sample( int const n );
		Sample( Sample const & src );				//canonical  --> constructeur par copie
		~Sample( void );							//canonical --> destructeur par defaut

		Sample &	operator=( Sample const & rhs );//canonical --> operateur egal

		int 	getFoo( void ) const;

	private:
		int		_foo;
	// optionnel = ajouter une fonction pour serialiser notre classe vers une string
};

std::ostream & operator<<( std::ostream & o, Sample const & i );

#endif
