/*

acceccors:
front(), back(), at(), operator[], data()

capacity:
size(), capacity(), max_size(), resize(), empty(),

mutators:
push_back(), push_front(), pop_back(), pop_front(), insert(), clear(), swap(), assign(), erase()

iterators and comparisons are applicable

*/

#include <iostream>
#include <deque>
#include <string>

int main(){

    std::deque<std::string> deq(8, "sangi");
    deq.front() = "roopa";
    deq.at(1) = "wife";
    deq[2] = "pellam";
    deq.back() = "roopa_makam";

    std::deque<std::string>::reverse_iterator it;
    for(it=deq.rbegin(); it!=deq.rend(); it++){
        std::cout << *it << std::endl;
    }

    deq.push_back("nakem_radhu");
    deq.pop_front();

    deq.erase(deq.begin() + 1);

    for(it=deq.rbegin(); it!=deq.rend(); it++){
        std::cout << *it << std::endl;
    }

    return 0;
}