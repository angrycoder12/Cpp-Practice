#include <iostream>

int main(){
   char grade;
   std::cout << "What is your letter grade: ";
   std::cin >> grade;

   switch(grade){
    
    case 'A': // putting another case under a case is effectively
    case 'a': //         an or statement
       std::cout << "You have good grades!";
       break;
    case 'B':
    case 'b':
       std::cout << "Your grades are good.";
       break;
    case 'C':
    case 'c':
       std::cout << "You need to get better grades!";
       break;
    case 'D':
    case 'd':
       std::cout << "You have bad grades.";
       break;
    case 'F':
    case 'f':
       std::cout << "Your grade are terrible!";
       break;
    default:
       std::cout << "Please enter a valid grade letter.";

   }


    return 0;
}