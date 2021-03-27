#include <cstdlib>
#include <iostream>
#include <unistd.h>
#include <ctime>

int main(){
	std::string s = "hello";
	clock_t time_req = clock();
	srand(clock());
	for (int i = 0; i < 10; i++) {
		std::cout << s[rand() % s.length()] << std::endl;
		usleep(100000);
	}
	time_req = clock() - time_req;
	std::cout << (float)time_req / CLOCKS_PER_SEC << " s" << std::endl;
}