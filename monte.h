#ifndef MONTE_H
#define MONTE_H

#include <stdlib.h>

#include "circles.h"

#define MONTE_PI 3.14159265358979323846

point_t *genRandomPoint(double xmin, double xmax, double ymin, double ymax);
double monteApproxPi(long long iterations, double r);
double monteApproxPiVerbose(long long iterations, double r);

#endif