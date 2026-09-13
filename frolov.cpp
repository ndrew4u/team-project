#include "frolov.h"
#include <cmath>

double equilateralArea(double a) {
    return (sqrt(3.0) / 4.0) * a * a;
}

double equilateralPerimeter(double a) {
    return 3.0 * a;
}

double equilateralHeight(double a) {
    return (a * sqrt(3.0)) / 2.0;
}
