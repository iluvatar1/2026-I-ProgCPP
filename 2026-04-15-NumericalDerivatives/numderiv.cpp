// Basic numerical derivatives implementation
#include <string>
#include <cmath>
#include <print>

double fun(double x); // 1d function
double dforward(double x, double h);
double dcentral(double x, double h);

int main (int argc, char *argv[])
{
  std::println("{}", dforward(10.234, 0.9));
  std::println("{}", dcentral(10.234, 0.9));
  
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
  return (fun(x+h) - fun(x-h))/(h);
}
