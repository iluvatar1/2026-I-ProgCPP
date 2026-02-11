// se compara la edad de alguien con una edad de referencia y se imprime un mensaje acorde 
#include <print>

// declaracion
void verificar(int age); 

int main()
{
    int edad = 15;
    verificar(edad);

    edad = 20;
    verificar(edad);

    return 0;
}


// implementar
void verificar(int age)
{
    if (age >= 18) {
        std::println("SI puede entrar");
        int b = 86;
    } else {
        std::println("No puede entrar, es menor de edad");
    }
} 
