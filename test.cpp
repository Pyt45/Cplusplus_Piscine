#include <cstdlib>
#include <iostream>
#include <unistd.h>
#include <ctime>

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

class Base {
	public:
		Base() {
			std::cout << "hello\n";
		}
		Base(int b) : _b(b) {
			std::cout << "Base" << std::endl;
		}
		void	print(void) {
			std::cout << "Attack with " << _m << " points and " << _c << std::endl;
		}
	protected:
		int _b;
		int _m;
		int _c;
};

class Drived : virtual public Base {
	public:
		Drived() {}
		Drived(int b) : Base(b) {
			Base::_m = 10;
			Base::_c = 12;
			std::cout << "Drived" << std::endl;
		}
};

class Drived1 : virtual public Base {
	public:
		Drived1() {}
		Drived1(int b) : Base(b) {
			Base::_m = 15;
			Base::_c = 14;
			std::cout << "Drived1" << std::endl;
		}
};

class Drived2 : public Drived, public Drived1 {
	public:
		Drived2() {}
		Drived2(int b) : Base(b), Drived(b), Drived1(b) {
			_m = this->Drived::_m;
			_c = Drived1::_c;
			std::cout << "Drived2" << std::endl;
		}
		void print(void)
		{
			Drived1::print();
		}
};

int main(){
	Drived2 b(5);

	b.print();
}
