// calcula la raiz cuadrada de un numero usando el metodo de los babilonios
#include <print>
#include <cstdio>

double babilonian_sqrt(double s, int niter, std::string fname);

int main(int argc , char **argv)
{
    const int NITER = std::stoi(argv[1]);
    double S = 2026.18;

    double root = babilonian_sqrt(S, NITER, "datos.txt");
    //std::println("{}", root);

    return 0;
}

double babilonian_sqrt(double s, int niter, std::string fname)
{
    FILE * file = std::fopen(fname.c_str(), "w"); // crear el objeto archivo
    double x = 1.0;
    double xnew{0.0};
    for(int ii = 1; ii <= niter; ii++) {
        xnew = (x + s/x)/2.0;
        // calculamos la diferencia relativa e imprimimos
        double diff = std::fabs(1.0 - x/xnew); // |1 - x/xnew| 
        std::println(file, "{:5} {:25.16e}\t{:25.16e}", ii, xnew, diff); // imprimir al archivo
        x = xnew;
    }
    std::fclose(file); // cerrar el archivo
    return x; 
}
