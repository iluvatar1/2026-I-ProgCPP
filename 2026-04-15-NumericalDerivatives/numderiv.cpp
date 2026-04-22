// Basic numerical derivatives implementation
#include <string>
#include <cmath>
#include <print>

double f(double x); // 1d function
double dforward(double x, double h);
double dcentral(double x, double h);

int main (int argc, char *argv[])
{
  double x = 10.234;
  double h = 1.0e-6;
  std::println("{}", dforward(x, h));
  std::println("{}", dcentral(x, h));
  
  return 0;
}

double fun(double x)
{
  return 2*std::sin(x*x) + 4/(x*x);
}

// what happens if:
// - The function is not called fun?
// - h is too small?
// - we want to apply this to the root problem?

double dforward(double x, double h)
{
  return (fun(x+h) - fun(x))/(h);
}

double dcentral(double x, double h)
{
  return (fun(x+h) - fun(x-h))/(2*h);
}
