#include <iostream>


int main(){
   std::string name;
   std::cout << "whats ur full name: ";
   std::getline(std::cin, name);  // This method is better for anything that could have spaces.
   std::cout << "Hello, " << name;

   return 0;
}