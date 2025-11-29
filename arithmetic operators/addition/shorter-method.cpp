#include <iostream>

int main(){

    int year = 2025;
    std::cout << "Right now it is " << year << "." << '\n';
    // an alternitive way to do it is var+=1
    // this is because  you are saying you want to add and then the amount you want to add = 1
    std::cout << "* one year passes";
    year+=1;
    std::cout << '\n' << "Oh my goodness! Now it is " << year << "!";
    // another way is to use an increment with ++ ex. var++; (this adds 1)
    std::cout << '\n' << "* another year passes";
    year++;
    std::cout << '\n' << "Oh my goodness! Now it is " << year << "!";
    return 0;
}