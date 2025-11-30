#include <iostream>

int main(){
   char operation;
   double input1;
   double input2;
   double answer;

   std::cout << "First number: ";
   std::cin >> input1;
   std::cout << "Operation (+, -, x, /): ";
   std::cin >> operation;
   std::cout << "Final number: ";
   std::cin >> input2;
   
   if (operation == '+'){                                      // addition
    answer = input1 + input2;
    std::cout << input1 << " + " << input2 << " = " << answer;
   
} else if (operation == '-'){                                  // subtraction
    answer = input1 - input2;
    std::cout << input1 << " - " << input2 << " = " << answer;
   
} else if (operation == '*' || operation == 'x'){                           // multiplication
    answer = input1 * input2;
    std::cout << input1 << " * " << input2 << " = " << answer;
   
} else if (operation == '/'){                                  // division
    if (input2 == 0){
        std::cout << input1 << " / 0 is undefined.";
    } else { 
        answer = input1 / input2;
        std::cout << input1 << " / " << input2 << " = " << answer;
    }
   
} else {
    std::cout << "Sorry, your operator is not valid.";
   }
   return 0;
}