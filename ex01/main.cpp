#include "Span.hpp"


int main()
{
    Span sp(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl; // 11 - 9 = 2 
    std::cout << sp.longestSpan() << std::endl; // Biggest one 17 - smallest on 3 = 14


    Span big(10000);
    std::vector<int> many;

    for (int i = 0; i < 10000; i++)
        many.push_back(i);

    big.addRange(many.begin(), many.end());

    std::cout << "Big shortest: " << big.shortestSpan() << std::endl;
    std::cout << "Big longest: " << big.longestSpan() << std::endl;

    try
    {
        big.addNumber(677202002);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }


    Span data(1);
    data.addNumber(0);

    try
    {
       data.shortestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
       data.longestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

}

