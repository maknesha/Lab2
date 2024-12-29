#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;

    std::cout << calc.Add(1, 1) << std::endl;

    std::cout << calc.Sub(2, 1) << std::endl;

    return 0;
}