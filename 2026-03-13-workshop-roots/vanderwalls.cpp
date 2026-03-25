// Goal: Encontrar el volumen en la ecuacion de Van der Walls
// (P + a/V^2)(V-b) = NkT = RT

#include <cmath>
#include <print>

double fun(double x);
double df_central(double x, double h);
double newton_raphson(double x0, double eps, int Nmax);

int main(int argc, char **argv)
{
    double V = newton_raphson(0.1, 1.0e-6, 100);
    std::println("The volume is: {:25.16e}\t{:25.16e}", V, fun(V));

    return 0;
}

double fun(double x) // x = Volumen
{
    const double A = 3.592; //
    const double B = 0.04267; //
    const double R = 0.08206; //
    const double P = 10.0; //
    const double T = 300.0; //

    return (P + A/(x*x))*(x-B) - R*T;
}

double df_central(double x, double h = 0.01)
{
    return (fun(x+h) - fun(x-h))/(2*h);
}

double newton_raphson(double x0, double eps, int Nmax)
{
    if (std::fabs(fun(x0)) <= eps) return x0;

    double x = x0;
    for (int iter = 0; iter < Nmax; iter++) {
        // estimar la raiz
        double r = x - fun(x)/df_central(x);
        // WARNING: Check that df_central(r) is not so small
        // comprobar si se encontro al raiz
        if (std::fabs(fun(r)) <= eps) return r;
        // actualizar
        x = r;
    }
    std::println("Max iterations reached");
    return x;
}
