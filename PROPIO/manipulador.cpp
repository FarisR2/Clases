#include <iostream>
#include <iomanip>

int main() {
    // Manipulador setw para establecer el ancho del campo
    std::cout << std::setw(10) << "Nombre" << std::setw(5) << "Edad" << std::endl;
    std::cout << std::setw(10) << "Juan" << std::setw(5) << 25 << std::endl;

    // Manipulador setprecision para establecer la precisión de los números de punto flotante
    double pi = 3.141592653589793;
    std::cout << std::setprecision(4) << "Pi: " << pi << std::endl;

    // Manipulador fixed para fijar la notación de punto flotante
    std::cout << std::fixed << "Pi (fijo): " << pi << std::endl;

    // Manipulador scientific para notación científica
    std::cout << std::scientific << "Pi (científico): " << pi << std::endl;

    // Manipulador setfill para establecer el carácter de relleno
    std::cout << std::setfill('*') << std::setw(15) << "Nombre" << std::setw(10) << "Edad" << std::endl;

    // Manipulador left y right para alinear la salida
    std::cout << std::setw(15) << std::left << "Juan" << std::setw(10) << std::right << 25 << std::endl;

    // Manipulador hex para imprimir números en formato hexadecimal
    int num = 255;
    std::cout << std::hex << "Número en hexadecimal: " << num << std::endl;

    // Manipulador oct para imprimir números en formato octal
    std::cout << std::oct << "Número en octal: " << num << std::endl;

    // Restaurar la configuración original
    std::cout << std::dec; // Restaurar la notación decimal

    return 0;
} 
