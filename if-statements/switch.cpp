#include <iostream>

int main(){
   /* a switch is an alternative to using many else
      if statements. it compares one value against
      many matching cases. */

      int month;
      std::cout << "What month is it (1-12): ";
      std::cin >> month;

      switch(month){
        // each case checks if the case value matches the switch's variable value
        case 1:
           std::cout << "It is January";
           break;
        case 2:
           std::cout << "It is February";
           break;
        case 3:
           std::cout << "It is March";
           break;
        case 4:
           std::cout << "It is April";
           break;
        case 5:
           std::cout << "It is May";
           break;
        case 6:
           std::cout << "It is June";
           break;
        case 7:
           std::cout << "It is July";
           break;
        case 8:
           std::cout << "It is August";
           break;
        case 9:
           std::cout << "It is September";
           break;
        case 10:
           std::cout << "It is October";
           break;
        case 11:
           std::cout << "It is November";
           break;
        case 12:
           std::cout << "It is December";
           break;
        // if no cases match, you can use the default statement
        default:
           std::cout << "Please only enter numbers (1-12)";
           break;

      }
    return 0;
}