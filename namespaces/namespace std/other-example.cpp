#include <iostream>

int main(){
   //to not come in conflict with other entities in std, you can use just std::<the ones you want to use>
   using std::cout;
   using std::string;
   
   string greetings = "hi from string, and cout!";
   cout << greetings;
   return 0;
}