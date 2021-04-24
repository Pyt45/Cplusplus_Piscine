#include <cstdlib>
#include <iostream>
#include <unistd.h>
#include <ctime>
#include <stack>
#include <deque>

// class Test {
// 	private:
// 		int _num;
// 		friend std::ostream & operator<<(std::ostream & o, Test const & src);
// 	public:
// 		Test(int num) : _num(num) {}
// };

// std::ostream & operator<<(std::ostream & o, Test const & src)
// {
// 	o << "num = " << src._num;
// 	return o;
// }

// class Base {
// 	public:
// 		// int _b;
// 		Base() {
// 			_b = 10;
// 			std::cout << "Base b = " << this->_b << std::endl;
// 		}
// 		Base(int b) {
// 			_b = b;
// 			std::cout << "Base b = " << this->_b << std::endl;
// 		}
// 	protected:
// 		int _b;
// };

// class Drived : public Base {
// 	public:
// 		Drived(int b) : Base() {
// 			// Base::_b = b;
// 			std::cout << "b = " << Base::_b << std::endl;
// 		}
// 	private:
// 		int _b;
// };

// int main(){
// 	Base *b = new Drived(5);

// 	std::string s = "hello";
// 	Test t(5);
// 	clock_t time_req = clock();
// 	srand(clock());
// 	for (int i = 0; i < 10; i++) {
// 		std::cout << s[rand() % s.length()] << std::endl;
// 		usleep(100000);
// 	}
// 	std::cout << t << std::endl;
// 	time_req = clock() - time_req;
// 	std::cout << (float)time_req / CLOCKS_PER_SEC << " s" << std::endl;
// }

/*class Base {
	public:
		virtual ~Base() = 0;
};

Base::~Base(){
	std::cout << "Base destructor" << std::endl;
}

class Drived : public Base {
	public:
		~Drived() {
			std::cout << "Drived destructor" << std::endl;
		}
};*/

template < typename T, class Container = std::deque<T> >
class msstack : public std::stack<T, Container> {
	public:
		typedef typename std::stack<T, Container>::container_type::iterator iterator;
		msstack() {}
		~msstack() {}
		iterator begin() {
			return this->c.begin();
		}
		iterator end() {
			return this->c.end();
		}
};

int main(){
	msstack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);

	msstack<int>::iterator it = s.begin();
	msstack<int>::iterator et = s.end();
	std::cout << *it << std::endl;
	std::cout << *et << std::endl;
}
