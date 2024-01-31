#include <iostream>

using namespace std;

int main() {
    
    char caracter = 'J';
    int codigo_ascii = static_cast<int>(caracter);

    cout << "El código ASCII de '" << caracter << "' es: " << codigo_ascii << endl;

    int nuevo_codigo_ascii = 150; 
    char nuevo_caracter = static_cast<char>(nuevo_codigo_ascii);

    cout << "El carácter con código ASCII " << nuevo_codigo_ascii << " es: '" << nuevo_caracter << "'" << endl;

    return 0;
} 
