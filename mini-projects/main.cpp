#include <iostream>
#include <unistd.h>

int amount = 1;

int main(){
   
    while(amount<100){
    std::cout << "iteration: " << amount << '\n';
    std::cout.flush();
    sleep(1);
    amount++;
   }

   return 0;
}