#include "easyfind.hpp"


int main()
{
    int arr[] = {5,6,222,42,0,4};

    std::vector<int> v(arr, arr+6);

    std::list<int> l(arr, arr+6);

    std::deque<int> d(arr, arr+6);

    std::set<int> s(arr, arr+6);


    try {
        std::cout << "Vector: index = " << easyfind(v, 42) << std::endl;
        std::cout << "List: index = " << easyfind(l, 42) << std::endl;
        std::cout << "Deque: index = " << easyfind(d, 42) << std::endl;
        std::cout << "Set: index = " << easyfind(s, 42) << std::endl;
        //not found case:
        std::cout << "Vector: index = " << easyfind(v, 677202002) << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
}