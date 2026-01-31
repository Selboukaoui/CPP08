#include <iostream>
#include <algorithm>
#include <iterator>


template <typename T>

int easyfind(const T &a, int n)
{
    vector<int> idx =  0;
    idx = std::find(a.begin(), a.end(), n);
    if (idx)
        return idx;

    return -1;
}








