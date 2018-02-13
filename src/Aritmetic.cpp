//
// Created by frivas on 13/02/18.
//

#include <cmath>
#include "Aritmetic.h"

double Aritmetic::sum(double a, double b) {
    return a + b;
}

double Aritmetic::mult(double a, double b) {
    return a*b;
}

double Aritmetic::div(double a, double b) {
    return a/b;
}

double Aritmetic::eval(double a, double b) {
    return pow(a,b);
}

double Aritmetic::mod(double a, double b) {
    return (int)a % (int)b;
}
