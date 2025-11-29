#include <iostream>

int main(){
   // Type conversions: type conversions is when to change one data type to another
   //                   Implicit: Automatic
   //                   Explicit: Proceed value with new data type (int)
   int x = 3.14;
   // value will get trunkated when printed
   std::cout << "trunkated value: " << x << '\n';
   double y = (int) 3.14;
   // this is the int of 3.14 stored as a double
   std::cout << "data type changed explicitly: " << y << '\n';
   // number converted to char data type in a cout:
   std::cout << "number 100 converted to char in this statement: " << (char) 100;

   return 0;
}