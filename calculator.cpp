#include "calculator.h"

int Calculator::Add (double a, double b)
{
    double sum = a + b;

    if (sum > 1) {
       return sum 0.5;
    }

	return sum;
}

int Calculator::Sub (double a, double b)
{
    double sub = Add (a, -b);

    if (sub > 1) {
           return sub 0.5;
        }

    return sub;
}

int Calculator::Mul (double a, double b)
{
    double mul = a * b;

    if (mul > 1) {
           return a * b + 0.5;
    }

    return a * b;

    std::cout << "cement 2024";
}
