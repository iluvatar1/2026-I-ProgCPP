// Goal: Encontrar funcion de Lambert (asociada al problema de la ley de Wien)
// Wk exp(Wk) = z, con z \in [-1/e, \infty], k = 0

#include <cmath>
#include <print>

// double fun(double x);
// double df_central(double x, double h);
// double newton_raphson(double x0, double eps, int Nmax);

double fun(double x, double z);
double df_central(double x, double z, double h);
double newton_raphson(double x0, double z, double eps, int Nmax);

int main(int argc, char **argv)
{
    // double z = -1.0/M_E;
    // double w0 = newton_raphson(0.1, z, 1.0e-6, 100);
    // std::println("{:25.16e}\t{:25.16e}", z, w0);

    // z = 0;
    // w0 = newton_raphson(0.1, z, 1.0e-6, 100);
    // std::println("{:25.16e}\t{:25.16e}", z, w0);

    for (double z = -1.0/M_E; z <= 1; z += 0.001) {
       double w0 = newton_raphson(0.1, z, 1.0e-6, 100);
       std::println("{:25.16e}\t{:25.16e}\t{:25.16e}", z, w0, fun(w0, z));
    }

    return 0;
}

double fun(double x, double z) // x = w0 = función de lambert
{
    return x*std::exp(x) - z;
}

// double df_central(double x, double h = 0.01)
// {
//     return (fun(x+h) - fun(x-h))/(2*h);
// }

double df_central(double x, double z, double h = 0.01)
{
    return (fun(x+h, z) - fun(x-h, z))/(2*h);
}

//double newton_raphson(double x0, double eps, int Nmax)
double newton_raphson(double x0, double z, double eps, int Nmax)
{
    if (std::fabs(fun(x0, z)) <= eps) return x0;

    double x = x0;
    for (int iter = 0; iter < Nmax; iter++) {
        // estimar la raiz
        double r = x - fun(x, z)/df_central(x, z);
        // WARNING: Check that df_central(r) is not so small
        // comprobar si se encontro al raiz
        if (std::fabs(fun(r, z)) <= eps) return r;
        // actualizar
        x = r;
    }
    std::println("Max iterations reached");
    return x;
}
