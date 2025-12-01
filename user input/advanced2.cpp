#include <iostream>

int main(){
   int age;
   std::string name;
   std::cout << "how old are u: ";
   std::cin >> age;
   std::cout << "whats ur name: "; 
   std::getline(std::cin >> std::ws, name); // if an std::cin comes before a getline, you have to do
//                                             (std::cin >> std::ws, name); to remove any newlines
//                                             or spaces, because in our input buffer (a buffer is a
//                                             temporary storage area in memory) there is a hidden
//                                             new line character we don't pick up on, and when we
//                                             reach the getline function, it exepts the \n character
//                                             that is still in the buffer. To prevent that, we can
//                                             use std::ws which extracts any whitespaces(newlines)
//                                             from memory before any user input happens. Very clever!
   std::cout << "hi, " << name << '\n';
   std::cout << "you are " << age << " years old!";
   return 0;
}