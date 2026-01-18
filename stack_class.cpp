/*

Accessors:
top(),

capacity:
size(), empty(), 

mutators:
push(), pop(), swap()

only comparisons is applicable

*/

#include <iostream>
#include <stack>
#include <string>

int main(){

    std::stack<std::string> stackk;
    std::string str = "sangi";
    std::string str1 = "roopa";
    stackk.emplace(str);
    stackk.push(str1);
    std::cout << stackk.top() << std::endl;
    std::cout << str << std::endl;

    return 0;
}