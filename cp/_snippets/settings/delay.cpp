#include <iostream>
#include <chrono>
#include <thread>

// g++ -mconsole -o myprogram cpp.cpp

int main() {
    std::cout << "Starting the delay...\n";

    // Add a delay of 3 seconds
    std::this_thread::sleep_for(std::chrono::seconds(3));

    std::cout << "3 seconds have passed.\n";

    std::this_thread::sleep_for(std::chrono::seconds(3));

    return 0;
}
