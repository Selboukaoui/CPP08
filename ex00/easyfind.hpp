#include <iostream>
#include <algorithm>
#include <iterator>
#include <stdexcept>
#include <vector>
#include <list>
#include <deque>
#include <set>

template <typename T>
int easyfind(const T &a, int n)
{

    typename T::const_iterator tofind = std::find(a.begin(), a.end(), n);
    if (tofind == a.end())
        throw std::runtime_error("Vlaue not found in the container");

    return std::distance(a.begin(), tofind);
}








