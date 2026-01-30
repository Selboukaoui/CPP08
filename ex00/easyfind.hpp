#include <iostream>
#include <algorithm>
#include <iterator>


template <typename T>

int easyfind(T a, int n)
{
    vector<int> idx =  0;
    isx = std::find(a.begin(), a.end(), n);
    if (idx)
        return idx;

    return -1;
}