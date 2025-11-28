 #include <iostream>

 int main(){
      // a const variable is a state of a variable that is effectively read-only
      // you cannot modify a const variable
      const double PI = 3.14159;
      double radius = 10;
      double circumference = 2 * PI * radius;

      std::cout << "The circumference of this circle is " << circumference << " inches.";


 }