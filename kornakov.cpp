#include "kornakov.h"
#include <cmath>

double sqrtHeron(double x) {
    if (x == 0) return 0;

    double guess = x / 2.0;
    double epsilon = 0.000001;

    while (true) {
        double next = (guess + x / guess) / 2.0;
        if (fabs(next - guess) < epsilon) {
            return next;
        }
        guess = next;
    }
}

double cubeRoot(double x) {
    if (x == 0) return 0;

    double guess = x / 3.0;
    double epsilon = 0.000001;

    while (true) {
        double next = (2.0 * guess + x / (guess * guess)) / 3.0;
        if (fabs(next - guess) < epsilon) {
            return next;
        }
        guess = next;
    }

}
