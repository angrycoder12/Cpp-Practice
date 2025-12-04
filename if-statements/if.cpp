#include <iostream>

int main(){
   //if statement: do something if a condition is true.
   //              If not, then don't do it.
   int age;

   std::cout << "How old are you? ";
   std::cin >> age;
   
   if (age >= 100){
    std::cout << "You are too old to enter this site!";
   }
   else if (age >= 18){
    std::cout << "You may enter the site.";
   }
   else if (age < 0){
    std::cout << "You haven't been born yet!";
   }
   else {
    std::cout << "Sorry you are too young.";

   }

    return 0;
}