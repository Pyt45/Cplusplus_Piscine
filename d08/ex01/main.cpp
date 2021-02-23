#include "span.hpp"
#include <typeinfo>
int     main(void)
{
    Span sp = Span(10000);
    for (int i = 0; i < 10000; i++)
    {
        srand(clock());
        sp.addNumber(rand() % 100);
    }
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << "============================" << std::endl;
    Span sp1 = Span(5);
    try {
        sp1.addNumber(5);
        sp1.addNumber(3);
        sp1.addNumber(17);
        sp1.addNumber(9);
        sp1.addNumber(11);
        std::cout << sp1.shortestSpan() << std::endl;
        std::cout << sp1.longestSpan() << std::endl;
        sp1.addNumber(4);
    }
    catch(std::out_of_range & e) {
        std::cout << e.what() << std::endl;
    }
    /*std::vector<int> v = {5, 3, 17, 9, 11};
    std::sort(v.begin(), v.end());
    std::for_each(v.begin(), v.end(), [](const int & e){
        std::cout << e << std::endl;
    });*/
    // std::cout << v.at(1) - v.at(0) << std::endl;
    // std::cout << v.at(static_cast<int>(v.size() - 1)) - v.at(0) << std::endl;
    /*std::for_each(sp._v.begin(), sp._v.end(), [](const int & e) {
        std::cout << e << std::endl;
    });*/
    /*std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;*/
}