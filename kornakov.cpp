#include "kornakov.h"
#include <cmath>

static const double EPSILON = 0.000001;

double sqrtHeron(double x) {
    if (x == 0) return 0;

    double guess = x / 2.0;

    while (true) {
        double next = (guess + x / guess) / 2.0;
        if (fabs(next - guess) < EPSILON) {
            return next;
        }
        guess =  next;
    }
}

double cubeRoot(double x) {
    if (x == 0) return 0;

    bool negative = (x < 0);
    double absX = fabs(x);

    double guess = absX / 3.0;

    while (true) {
        double next = (2.0 * guess + absX / (guess * guess)) / 3.0;
        if (fabs(next - guess) < EPSILON) {
            return negative ? -next : next;
        }
        guess = next;
    }
}
