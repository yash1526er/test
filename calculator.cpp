#include <iostream>
#include <cmath>

int main(){
    double x;
    double y;
    char z;
    double k;

    std::cout << "Enter 1st number: ";
    std::cin >> x;
    std::cout << "Enter 2rd number: ";
    std::cin >> y;
    std::cout << "Enter the operation: ";
    std::cin >> z;

    switch(z){
        case '+':
            k = x+y;
            std::cout << k;
            break;
        case '-':
            k = x-y;
            std::cout << k;
            break;
        case '*':
            k = x*y;
            std::cout << k;
            break;
        case '/':
            k = x/y;
            std::cout << k;
            break;
        default:
            std::cout << "Please enter a valid operator.";
    }

    return 0;
}