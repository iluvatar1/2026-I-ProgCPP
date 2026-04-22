#include <cmath>
#include <print>
#include "numericalCalculus.h"

double fun(double x); // 1d function
double g(double x); // 1d function

int main (int argc, char *argv[])
{
  double x = 10.234;
  double h = 1.0e-6;
  std::println("{}", dforward(x, h, fun) );
  std::println("{}", dcentral(x, h, fun));
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