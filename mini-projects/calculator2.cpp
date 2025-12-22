#include <iostream>

int main() {
   char op;
   double num1;
   double num2;
   double answer;

   std::cout << "*************** CALCULATOR ***************\n";

   std::cout << "Enter either (+ - * /): ";
   std::cin >> op;

   std::cout << "Enter #1: ";
   std::cin >> num1;

   std::cout << "Enter #2: ";
   std::cin >> num2;

   switch(op){
    case '+':
       answer = num1 + num2;
       std::cout << "The answer is " << answer << "." << '\n';
       break;
    case '-':
       answer = num1 - num2;
       std::cout << "The answer is " << answer << "." << '\n';
       break;
    case '*':
       answer = num1 * num2;
       std::cout << "The answer is " << answer << "." << '\n';
       break;
    case '/':
       answer = num1 / num2;
       std::cout << "The answer is " << answer << "." << '\n';
       break;
    default:
       std::cout << "That was not a valid response.\n";
       break;
   }

   std::cout << "******************************************\n";

    return 1;
}
// this project is not done yet