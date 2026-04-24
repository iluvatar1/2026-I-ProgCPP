#include "numericalCalculus.h"

double dforward(double x, double h, fptr f)
{
  return (f(x+h) - f(x))/(h);
}

double dcentral(double x, double h, fptr f)
{
  return (f(x+h) - f(x-h))/(2*h);
}

double richardson_forward(double x, double h, int p, fptr f) 
{
    double aux1 = dforward(x, h, f);
    double aux2 = dforward(x, h/2, f);
    double aux3 = std::pow(2.0, p);
    return (aux3*aux2 - aux1)/(aux3 - 1);
}

double richardson_central(double x, double h, int p, fptr f) 
{
    double aux1 = dcentral(x, h, f);
    double aux2 = dcentral(x, h/2, f);
    double aux3 = std::pow(2.0, p);
    return (aux3*aux2 - aux1)/(aux3 - 1);
}
