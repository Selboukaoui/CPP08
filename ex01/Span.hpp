#pragma once

#include <vector>
#include <iostream>
#include <exception>
#include <algorithm>
#include <limits>

class Span
{
    private:
        unsigned int N;
        std::vector<int> data;
    public:
        Span();
        Span(unsigned int);
        Span(const Span &other);
        Span& operator=(const Span &other);
        ~Span();

        void addNumber(int);
        int shortestSpan();
        int longestSpan();

        template<typename T>
        void addRange(T begin, T end)
        {
            for (T it = begin; it != end; ++it)
            {
                addNumber(*it);
            }
        }
};
