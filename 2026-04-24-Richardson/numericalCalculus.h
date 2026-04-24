#pragma once // resuelve el problema de incluirlo varias veces
#include <functional>
#include <cmath>

using fptr = std::function<double(double)>;

double dforward(double x, double h, fptr f);
double dcentral(double x, double h, fptr f);

double richardson_forward(double x, double h, int p, fptr f);
double richardson_central(double x, double h, int p, fptr f);
