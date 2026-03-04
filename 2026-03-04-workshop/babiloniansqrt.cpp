// calcula la raiz cuadrada de un numero usando el metodo de los babilonios
#include <print>

double babilonian_sqrt(double s, int niter);

int main(int argc , char **argv)
{
    const int NITER = std::stoi(argv[1]);
    double S = 2026.18;

    double root = babilonian_sqrt(S, NITER);
    //std::println("{}", root);

    return 0;
}

double babilonian_sqrt(double s, int niter)
{
    double x = 1.0;
    double xnew{0.0};
    for(int ii = 1; ii <= niter; ii++) {
        xnew = (x + s/x)/2.0;
        // calculamos la diferencia relativa e imprimimos
        double diff = std::fabs(1.0 - x/xnew); // |1 - x/xnew| 
        std::println("{:5} {:25.16e}\t{:25.16e}", ii, xnew, diff);
        x = xnew;
    }
    return x; 
}
