// Basic numerical derivatives implementation
// Usando puntero a function, ahora la funcion a derivar es un argumento
// y puedo derivar muchas funciones diferentes desde que reciban un double
// y retornen un double

#include <string>
#include <cmath>
#include <print>
#include <functional>

double fun(double x); // 1d function
double g(double x); // 1d function
double dforward(double x, double h, std::function<double(double)> f);
double dcentral(double x, double h, std::function<double(double)> f);

int main (int argc, char *argv[])
{
  double x = 10.234;
  double h = 1.0e-6;
  std::println("{}", dforward(x, h, fun));
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


// what happens if:
// - [X] The function is not called fun?
// - [X] h is too small?
// - [ ] we want to apply this to the root problem?

double dforward(double x, double h, std::function<double(double)> f)
{
  return (f(x+h) - f(x))/(h);
}

double dcentral(double x, double h, std::function<double(double)> f)
{
  return (f(x+h) - f(x-h))/(2*h);
}
