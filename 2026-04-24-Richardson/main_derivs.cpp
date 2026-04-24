#include <cmath>
#include <print>
#include "numericalCalculus.h"

double fun(double x); // 1d function
double g(double x); // 1d function

int main (int argc, char *argv[])
{
  double x = 10.234;
  double h = 1.0e-6;
  std::println("FORWARD  :     {}", dforward(x, h, fun) );
  std::println("R_FORWARD:     {}", richardson_forward(x, h, 1, fun) );
  std::println("R_FORWARD_NEW: {}", richardson(x, h, 1, fun, dforward) );
  std::println("CENTRAL:       {}", dcentral(x, h, fun));
  std::println("R_CENTRAL:     {}", richardson_central(x, h, 2, fun));
  std::println("R_CENTRAL_NEW: {}", richardson(x, h, 2, fun, dcentral));
  std::println("{}", dcentral(x, h, g));
  
  return 0;
}

double fun(double x)
{
  return 2*std::sin(x*x) + 4/(x*x);
}

double g(double x)
{
  return 2*std::sin(x*x*x);
}