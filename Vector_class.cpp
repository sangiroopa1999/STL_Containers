/*

accessors:
front(), back(), at(), operator[], data()

capacity:
size(), capacity(), max_size(), empty(), reserve(), resize(), shrink_to_fit()

mutators:
push_back(), pop_back(), insert(), erase(), clear(), swap()

iterators and comparators are applicable

*/

#include <iostream>
#include <vector>
#include <string>

int main(){

    // std::vector<std::string> vect;
    // vect.front() = "sangi";
    // vect.at(1) = "santhu";
    // vect[2] = "roopa";
    // vect.back() = "laxmi";
    // the above all are just acceccors, we cannot access empty vector initially and modify value
    
    std::vector<std::string> vect;
    vect.push_back("Mom");
    vect.push_back("Mom");
    vect.push_back("Mom");
    vect.push_back("Mom");
    // now we can access allocated memory location and modify value
    vect.front() = "sangi";
    vect.at(1) = "santhu";
    vect[2] = "roopa";
    vect.back() = "laxmi";

    std::vector<std::string>::iterator it;
    for(it=vect.begin(); it!=vect.end(); it++){
        std::cout << *it << std::endl;
    }

    vect.push_back("dady");
    vect.pop_back();

    vect.insert((vect.begin()+2), "mom");
    vect.erase(vect.begin()+3);

    for(it=vect.begin(); it!=vect.end(); it++){
        std::cout << *it << std::endl;
    }
    
    const std::vector<std::string> vect1 = {"sangi", "sangi", "sangi", "sangi"};
    // vect1.front() = "sangi";
    std::vector<std::string>::const_reverse_iterator it1;
    for(it1=vect1.crbegin(); it1!=vect1.crend(); it1++){
        std::cout << *it1 << std::endl;
    }

    return 0;
}