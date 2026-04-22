#pragma once // resuelve el problema de incluirlo varias veces
#include <functional>
#include <cmath>


double dforward(double x, double h, std::function<double(double)> f);
double dcentral(double x, double h, std::function<double(double)> f);

double richardson_forward(double x, double h, double p);