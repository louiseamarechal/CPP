#include "surchargeOperator.hpp"

Integer::Integer( int n ) : _n( n ) {
	std::cout << "Constructor called with value " << n << std::endl;
}

Integer::~Integer( void ) {
	std::cout << "Destructor called with value " << this->getValue() << std::endl;
}

Integer & Integer::operator=( Integer const & rhs ) {
	std::cout << "Assignation operator called from" << this->_n;
	std::cout << " to " << rhs.getValue() << std::endl;

	this->_n = rhs.getValue();

	return *this;
}

Integer & Integer::operator+( Integer const & rhs ) {
	std::cout << "Assignation operator called from" << this->_n;
	std::cout << " and " << rhs.getValue() << std::endl;

	return Integer( this->_n + rhs.getValue() );
}

std::ostream & operator<<( std::ostream & o, Integer const & rhs ) {

	o << rhs.getValue();
	return o;
}

int	main() {

	Integer x( 30 );
	Integer y( 10 );
	Integer z( 0 );

	std::cout << "Value of x: " << x << std::endl;
	std::cout << "Value of y: " << y << std::endl;
	y = Integer( 12 );
	std::cout << "Value of y: " << y << std::endl;

	std::cout << "Value of z: " << z << std::endl;
	z = x + y;
	std::cout << "Value of z : " << z << std::endl;

	return 0;

}
