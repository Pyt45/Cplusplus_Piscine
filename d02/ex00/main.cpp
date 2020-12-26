// #include <iostream> 
// using namespace std; 
  
// class base 
// { 
// public: 
//     virtual void print () 
//     { cout<< "print base class" <<endl; } 
   
//     void show () 
//     { cout<< "show base class" <<endl; } 
// }; 
   
// class derived:public base 
// { 
// public: 
//     void print () //print () is already virtual function in derived class, we could also declared as virtual void print () explicitly 
//     { cout<< "print derived class" <<endl; } 
   
//     void show () 
//     { cout<< "show derived class" <<endl; } 
// }; 

// class Myclass
// {
//     private:
//         int     _p;
//     public:
//         Myclass(int p = 0): _p(p){}
//         void    print(void) const { cout << _p << endl; }
//         void    print(int i) const { cout << "i has " << i << endl; }
//         void    print(float i) const { cout << "float i has " << i << endl; }
// };

// class Complex
// {
//     private:
//         int     _real;
//         int     _img;
//     public:
//         Complex(int r = 0, int i = 0): _real(r), _img(i){}
//         Complex operator+(Complex const & obj) const
//         {
//             Complex rsl;
//             rsl._real = _real + obj._real;
//             rsl._img = _img + obj._img;
//             return rsl;
//         }
//         void print() const { cout << _real << " + i" << _img << endl; }
// };

// class Integer
// {
//     private:
//         int     _n;
//     public:
// 		Integer(int const n): _n(n){
// 			cout << "Constructor called with value "
// 			<< n << endl;
// 		}
// 		~Integer(void){
// 			cout << "Destructor called with value "
// 			<< _n << endl;
// 		}
// 		int		getValue(void) const
// 		{
// 			return _n;
// 		}
// 		Integer&	operator=(Integer const & rhs);
//         Integer     operator+(Integer const & rhs) const;
// };

// Integer& Integer::operator=(Integer const & rhs)
// {
// 	cout << "Assignation operator called with "
// 	<< this->_n;
// 	cout << " to " << rhs.getValue() << endl;

// 	this->_n = rhs.getValue();
// 	return *this;
// }

// Integer Integer::operator+(Integer const & rhs) const
// {
// 	cout << "Addition operator called with "
// 	<< this->_n;
// 	cout << " and " << rhs.getValue() << endl;

// 	return Integer(this->_n + rhs.getValue());
// }

// ostream&	operator<<(ostream& o, Integer const & rhs)
// {
// 	o << rhs.getValue();
// 	return o;
// }
// //main function 
// int main()  
// {
// 	Integer x(30);
// 	Integer y(10);
// 	Integer z(0);

// 	cout << "value of x is " << x << endl;
// 	cout << "value of y is " << y << endl;
// 	y = Integer(12);
// 	cout << "value of y is now " << y << endl;
// 	cout << "value of z is " << z << endl;
// 	z= x + y;
// 	cout << "value of z is now " << z << endl;

//     // Complex c1(10, 2), c2(3, 6);
//     // Complex c3 = c1 + c2;
//     // c3.print();
//     // base *bptr; 
//     // derived d; 
//     // Myclass m;
//     // bptr = &d; 
       
//     // bptr->print();  
//     // m.print();
//     // m.print(5);
//     // m.print((float)(3.6));
//     // bptr->show();  
  
//     return 0; 
// }

#include "Fixed.class.hpp"

int 	main( void ) {
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}