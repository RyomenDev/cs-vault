#include <iostream>
#include <vector>
#include <algorithm> // For std::erase

int main() {
    std::vector<int> v = {1, 2, 2, 3, 4, 2};
    std::erase(v, 2); // Requires C++20
    for (int i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
