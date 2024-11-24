#include <iostream>
#include <thread>
#include <chrono>

void executionThread(int timeout) {
    std::this_thread::sleep_for(std::chrono::seconds(timeout));
    std::cerr << "Execution timed out after " << timeout << " seconds." << std::endl;
    exit(1); // Exit with error code to indicate timeout
}

int main() {
    // Start execution thread with a timeout of 3 seconds
    int timeoutSeconds = 3;
    std::thread execThread(executionThread, timeoutSeconds);

    // Your C++ code here
    // Compile and execute your program

    // Join the execution thread
    execThread.join();

    return 0;
}
