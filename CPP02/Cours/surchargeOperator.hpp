# ifndef SURCHARGEOPERATOR_H
# define SURCHARGEOPERATOR_H

Class Integer {

	public :
		Integer( int n);
		~Interger ( void );

		int getValue( void ) const;

		Integer & operator=( Integer const & rhs ); // le mot cle operator permet de faire d'une simple delcaration de fonction membre de ma classe une surcharge operator (en precisant l'operateur )
		Integer & operator+( Integer const & rhs ) const;

		private :
			int _n;
};

std::ostream & operator<<( std::ostream & o, Integer const & rhs ); // cas d'une surcharge de fonction ( et non de fonction membre )

#endif

/*
Le nombre de parametres de la fonction depend de l'operateur, pour un operateur
binaire on aura 2 parametres, unaire 1 etc.
Rappel : dans ma fonction de classe j'ai toujours implicitement en parametre de
gauche une Instance de ma classe ( this ).
Ici j'ai donc bien 2 param pour les fonctions d'operateurs binaires ! */
