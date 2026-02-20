// Juego de adivinar un numero
#include <iostream> // cin
#include <print> // println
#include <random>

/*
definir un numero por parte del programa 
repetir lo siguiente:
  imprimir un mensaje pidiendo el numero
  leer el numero
  si el numero leido es mayor al que defini entonces imprimir tu numero es mayor
  si es menor imprimir es menor
  si es igual: premio y trerminar iteracion
*/

void guess_game(void);

int main(void) 
{
    guess_game();
    return 0;
}

void guess_game(void)
{
    std::mt19937 gen(10);
    std::uniform_int_distribution dist(1, 100) ;
    //int N = 97; // numero que quoero adivinar
    int N = dist(gen);
    
    int g = -N;
    while (g != N) {
        std::println("Escribe un numero");
        std::cin >> g;
        if (g > N) {
            std::println("Tu numero es mayor al que buscas");
        } else if (g < N) {
            std::println("Tu numero es menor al que buscas");
        } else {
            std::println("Ganaste!!!!!!!");
        }
    }
}


/*
definir un numero por parte del programa 
repetir lo siguiente:
  imprimir un mensaje pidiendo el numero
  leer el numero
  si el numero leido es mayor al que defini entonces imprimir tu numero es mayor
  si es menor imprimir es menor
  si es igual: premio y trerminar iteracion
*/
