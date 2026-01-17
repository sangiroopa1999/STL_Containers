/*

accessors:
front(), back(), at(), operator[], data()

capacity:
size(), empty(), max_size()

mutators:
fill(), swap()

iterators and comparisons will applicable

*/

#include <iostream>
#include <array>
#include <string>

// using namespace std;

int main(){

    std::array<std::string, 5> arr;
    arr.front() = "sangi";
    arr.at(1) = "sangi";
    arr.back() = "roopa";

    std::cout << "size of initial array: " << arr.size() << std::endl;

    std::cout << "max_size of initial array: " << arr.max_size() << std::endl;

    std::cout << "empty or not: " << arr.empty() << std::endl;

    arr.fill("sangi");

    std::array<std::string, 5>::iterator it;
    for(it=arr.begin(); it!=arr.end(); it++){
        std::cout << *it << std::endl;
    }

    /* *******************for const container elements********************* */

    // Option 1: Initialize const array at declaration time
    const std::array<std::string, 5> arr1 = {"sangi", "santhu", "roopa", "laxmi", "priya"};
    // Now you can read values
    std::cout << "Front: " << arr1.front() << std::endl;
    std::cout << "Back: " << arr1.back() << std::endl;
    std::cout << "At index 1: " << arr1.at(1) << std::endl;
    
    std::cout << "size: " << arr1.size() << std::endl;
    std::cout << "max_size: " << arr1.max_size() << std::endl;
    std::cout << "empty or not: " << arr1.empty() << std::endl;

    // Use const_iterator for const arrays
    std::array<std::string, 5>::const_iterator it1;
    for(it1 = arr1.begin(); it1 != arr1.end(); ++it1) {
        std::cout << *it1 << std::endl;
    }

    if(arr > arr1){
        std::cout << "two arrays are equal" << std::endl;
    }else{std::cout << "not equal" << std::endl;}

    return 0;
}