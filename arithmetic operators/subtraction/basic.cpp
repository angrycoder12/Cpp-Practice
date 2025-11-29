#include <iostream>

int main(){
   // same as addition ig
   int apples = 32;
   std::cout << "You have " << apples << " apples." << '\n';
   std::cout << "Four people come in and buy one apple each." << '\n';
   apples-= 4;
   std::cout << "Now you have " << apples << " apples." << '\n';
   std::cout << "One person comes in and buys one apple." << '\n';
   apples--;
   std::cout << "Now you have " << apples << " apples." << '\n';
   std::cout << "Five people come in and buy one apple each." << '\n';
   apples = apples - 5;
   return 0;
}