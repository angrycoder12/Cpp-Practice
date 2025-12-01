#include <iostream>

int main(){
   double x = 3;
   double y = 4;
   double z;
   
   // std::max finds the largest number.
   z = std::max (x, y);

   std::cout << z;

   return 0;
}