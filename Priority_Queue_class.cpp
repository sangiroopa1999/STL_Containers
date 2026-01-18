/*

Accessors:
top()

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

    std::priority_queue<std::string> Pr_Que;
    std::string str = "sangi";
    std::string str1 = "roopa";
    Pr_Que.emplace(str);
    Pr_Que.push(str1);
    Pr_Que.push("santhu");
    Pr_Que.push("laxmi");
    std::cout << Pr_Que.size() << std::endl;
    std::cout << Pr_Que.top() << std::endl;
    while(!Pr_Que.empty()){
        std::cout << Pr_Que.top() << std::endl;
        Pr_Que.pop();
    }

    return 0;
}