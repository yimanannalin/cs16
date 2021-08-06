#include <cmath>

bool approxequal(double p1, double p2, double tolerance) {
    double distance = sqrt(pow(p1-p2, 2) + pow(p1-p2, 2));
    return (distance < tolerance);
}
