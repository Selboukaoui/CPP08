#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#include <list>
#include <stack>


int main()
{

    std::stack<int> v;
    v.push(1);
    v.push(12);
    v.push(13);
    v.push(14);


    while (!v.empty())
    {
        std::cout << v.top() << std::endl;
        v.pop();
    }

    // std::list<int> v = {1, 2, 3, 4 , 6};

    // std::list<int>::iterator it  = v.begin();

    // it++;

    // std::cout << *it ;

//    std::deque<int> v = {1,2,3,4,5};

//     std::cout << v.max_size() << std::endl;


//     v[3] = 3;

//     std::cout << v[3];
      




    
    // std::vector<int> v = {1,2,3,4,5};




    // std::pair<std::vector<int>::iterator, std::vector<int>::iterator> it  = std::minmax_element(v.begin(), v.end());

    // std::cout << *it.first << *it.second << std::endl;



    // std::vector<int> v = {1,2,3,4,5};


    // // std::vector<int>::reverse_iterator it = v.rbegin();

    // // v.insert(v.begin() + 1, 2);
    // // v.erase(v.begin() + 1 , v.end());
    // v.resize(3);
    // v.shrink_to_fit();

    // for (int i = 0; i < 6 ; i++)
    // {
    //     std::cout << v[i] << std::endl;
    // }

    


    // std::vector<char> v;

    // std::cout << v.max_size() << std::endl;



    // std::vector<int> v(2, 1);



    // v.push_back(2);
    // v.push_back(2);
    // v.pop_back();

    // std::cout << v.capacity() << std::endl;
    // std::cout << v.size() << std::endl;

    // try
    // {
    //     std::cout << v.at(9) << std::endl;
    // }
    // catch (std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
}