#include <iostream> // header

int main() // main function
{
    std::cout << "enter two numbers:" << std::endl;
    // stdandard output object       //manipulator
    // output operator -----> <<

    int n1 = 0, n2 = 0; // variable declartion

    std::cin >> n1 >> n2;
    // std input
    //>> =>input opertor

    std::cout << "the sum of" << n1 << "and" << n2 << "is" << n1 + n2 << std::endl;

    return 0; // return ststement
}