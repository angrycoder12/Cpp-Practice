#include <iostream>

using string = std::string;
using i = int;

int main(){
   // typedef has been replaced with "using"
   string name = "Parker";
   i age = 999;
   std::cout << "My name is " << name << ", and I am " << age << " years old.";
   return 0;
}