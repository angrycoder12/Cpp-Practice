#include <iostream>

int main(){
   // arithetic operator = return the result of a specific
   //                      arithmetic operation (+ * - /)
   int students = 30;
   // lets say we get a new student
   students = students + 1;
   // lets print the total amount of students now
   std::cout << "In our class we have " << students << " students." << '\n';
   // we lost a student
   std::cout << "* two students leave" << '\n';
   students = students - 2;
   std::cout << "Now we have " << students << " students." << '\n';
   
   return 0;
}