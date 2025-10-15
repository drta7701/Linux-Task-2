#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    double a = 10.5;
    double b = 5.2;
    
    std::cout << "Addition: " << calc.Add(a, b) << std::endl;
    std::cout << "Subtraction: " << calc.Sub(a, b) << std::endl;
    std::cout << "Multiplication: " << calc.Mul(a, b) << std::endl;
    std::cout << "Division: " << calc.Div(a, b) << std::endl;

    return 0;
}
