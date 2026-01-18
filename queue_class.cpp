/*

Accessors:
front(), back()

container access:
container()

capacity:
size(), empty(), 

mutators:
push(), pop(), swap()

only comparisons is applicable

*/

#include <iostream>
#include <queue>
#include <string>

int main(){

    std::queue<std::string> Que;
    std::string str = "sangi";
    std::string str1 = "roopa";
    Que.emplace(str);
    Que.push(str1);
    std::cout << Que.front() << std::endl;
    std::cout << Que.back() << std::endl;
    std::cout << str << std::endl;

    return 0;
}