
int main() {
    int a = 10, b = 20, c = 0; 
    a = b; // assigns b value to a value
    a = b + 60; // adds 60 to b value, then assigns that value to a
    a += 60; // same as previous
    a = 2*b; // multiplication. Here same as a *= b;
    a = b/3; // division, notice truncation for integers. a /= 3;
    a = b%7; // modulo operator, residue
    a = 10;
    b = 20; 
    a = b--; // post increment
    a = 10;
    b = 20; 
    a = --b; // pre increment

    return 0;
}