#include <iostream>

int main(){
    // string: object that represents a sequence of text
    // string is not a standard variable, so you have to get it from the c++ standard libaray
    std::string name = "Parker Bock";
    std::string weekday = "Friday";

    std::cout << "Hi, my name is " << name << "." << '\n' << '\n';
    std::cout << "Today, it is " << weekday << ".";

    return 0;
}