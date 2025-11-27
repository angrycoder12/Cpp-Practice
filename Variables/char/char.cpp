#include <iostream>

int main(){
    //char can store 1 character of any kind.
    // to declare single characters as variables with char, use single quotes: 'insert single character'
    char grade1 = 'A';
    char grade2 = 'F';
    char grade3 = 'B';
    char grade4 = 'D';
    char grade5 = 'B';
    char grade6 = 'C';
    std::cout << "Your grade list:" << '\n';
    // display all grades in a list
    std::cout << grade1 << '\n' << grade2 << '\n' << grade3 << '\n' << grade4 << '\n' << grade5 << '\n' << grade6 << '\n';
    printf("You are a failure!");

    return 0;
}