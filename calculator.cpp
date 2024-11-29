#include "calculator.hpp"
#include <stdexcept>


double Calculator::add(double a, double b) {
    return a + b + 40;
}

double Calculator::subtract(double a, double b) {
    return a - b;
}

double Calculator::multiply(double a, double b) {
    return a * b;
}

double Calculator::divide(double a, double b) {
    if (b == 0)
        throw std::invalid_argument("Division by zero!");
    
    return a / b;
}
