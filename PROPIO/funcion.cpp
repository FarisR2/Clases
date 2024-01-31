#include <iostream>
#include <string>

using namespace std;

string make_a_bed() {
    return "La cama está hecha.";
}

string turn_off_light() {
    return "La luz está apagada.";
}

int main() {
    int opcion;
    char continuar;

    do {
        cout << "Simulador de Dormitorio\n";
        cout << "1. Hacer la cama\n";
        cout << "2. Apagar la luz\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << make_a_bed() << endl;
                break;
            case 2:
                cout << turn_off_light() << endl;
                break;
            case 3:
                cout << "Saliendo del simulador. Hasta luego.\n";
                break;
            default:
                cout << "Opción no válida. Inténtalo de nuevo.\n";
        }

        cout << "¿Desea continuar? (s/S para sí, cualquier otra tecla para no): ";
        cin >> continuar;
        continuar = tolower(continuar);

    } while (continuar == 's');

    return 0;
}
