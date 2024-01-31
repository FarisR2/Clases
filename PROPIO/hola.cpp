#include <iostream>

int main() {
    int arregloEnteros[] = {1, 2, 3, 4, 5};
    char arregloCaracteres[] = {'a', 'b', 'c', 'd', 'e'};

    std::cout << "Tamaño del arreglo de enteros: " << sizeof(arregloEnteros) << " bytes" << std::endl;
    std::cout << "Tamaño del arreglo de caracteres: " << sizeof(arregloCaracteres) << " bytes" << std::endl;

    return 0;
}