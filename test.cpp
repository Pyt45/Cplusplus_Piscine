#include <cstdlib>
#include <iostream>
#include <unistd.h>
#include <ctime>

class Test {
	private:
		int _num;
		friend std::ostream & operator<<(std::ostream & o, Test const & src);
	public:
		Test(int num) : _num(num) {}
};

std::ostream & operator<<(std::ostream & o, Test const & src)
{
	o << "num = " << src._num;
	return o;
}

int main(){
	std::string s = "hello";
	Test t(5);
	clock_t time_req = clock();
	srand(clock());
	for (int i = 0; i < 10; i++) {
		std::cout << s[rand() % s.length()] << std::endl;
		usleep(100000);
	}
	std::cout << t << std::endl;
	time_req = clock() - time_req;
	std::cout << (float)time_req / CLOCKS_PER_SEC << " s" << std::endl;
}