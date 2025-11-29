#include <iostream>
#include <vector>

typedef std::string string_t;
typedef int i;

int main(){
    // typedef = a reserved keyword used to create an additional name 
    //           (alias) for another data type.
    //           New identifier for existing type.
    //           Helps readability and reduces typos.
    i age = 67;
    string_t name = "Noah Slater";
    std::cout << "My friend's name is " <<  name << '\n';
    std::cout << "He is " << age << " years old";

    return 0;
}