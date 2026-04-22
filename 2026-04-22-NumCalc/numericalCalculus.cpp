#include "numericalCalculus.h"

double dforward(double x, double h, std::function<double(double)> f)
{
  return (f(x+h) - f(x))/(h);
}

double dcentral(double x, double h, std::function<double(double)> f)
{
  return (f(x+h) - f(x-h))/(2*h);
}

double richardson_forward(double x, double h, double p) // y la funcion?
{
    double aux1 = dforward(x, h);
    double aux2 = dforward(x, h/2);
    double aux3 = std::pow(2.0, p);
    return (aux3*aux2 - aux1)/(aux3 - 1);
}