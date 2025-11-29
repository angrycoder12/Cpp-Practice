#include <iostream>
#include <thread>
#include <chrono>
#include <atomic>


std::atomic<int> second = 0;

void sleepFunction() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    second++; 
}

int clockspeed = 0;


int main() {
    std::thread t(sleepFunction);

    do {
        clockspeed++;
    } while ( second < 1 ); 

    std::cout << "Your clockspeed is " << clockspeed << std::endl;

    t.join();
    return 0;
}