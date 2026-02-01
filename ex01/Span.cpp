#include "Span.hpp"


Span::Span() : N(5){}

Span::Span(unsigned int n) : N(n) {}

Span::Span(const Span &other) : N(other.N), data(other.data)  {}

Span& Span::operator=(const Span &other){

    if (this != &other)
    {
        this->N = other.N;
        this->data = other.data;
    }
    return *this;
}

Span::~Span(){}



void Span::addNumber(int nbr)
{
    if (data.size() >= N)
        throw std::runtime_error("Span is full :(");
    data.push_back(nbr);
}

int Span::shortestSpan()
{
    if (data.size() <= 1)
        throw std::runtime_error("Not enough data");

    std::vector<int> tmp = data;
    std::sort(tmp.begin(), tmp.end());

    int small = std::numeric_limits<int>::max();

    for (size_t i = 1; i < tmp.size(); i++)
    {
        int sp = tmp[i] - tmp[i - 1];
        if (sp < small)
            small = sp;
    }
    return small;
}


int Span::longestSpan()
{
    if (data.size() <= 1)
        throw std::runtime_error("Not enough data");


    std::pair<std::vector<int>::iterator, std::vector<int>::iterator> it  = std::minmax_element(data.begin(), data.end());

    return *it.second - *it.first;
}
