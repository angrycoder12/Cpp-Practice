#include <iostream>

int main(){
   // in this example I will be using type conversion to calculate someones grade on an assignment.
   int right = 23;
   int questions = 25;
   double score = right/questions * 100; // because right/questions is a decemal, their int value types trunkate it.
   score = right/(double)questions * 100; //correct itteration.
   std::cout << "your score is " << score << "%";
   return 0;
}