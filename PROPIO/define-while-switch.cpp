#include <iostream>
#include <string>

using namespace std;

#define OPCION_AUTENTICACION 1
#define OPCION_SALIR 2

string gmail;
string contrasena;

int main() {
    int opcion = 0;

    while (opcion != OPCION_SALIR) {
        cout << "Ingrese una opcion (" << OPCION_AUTENTICACION << " para autenticacion, " << OPCION_SALIR << " para salir): ";
        cin >> opcion;

        switch (opcion) {
            case OPCION_AUTENTICACION:
                cout << "Ingresaste la opcion " << OPCION_AUTENTICACION << endl;
                cout << "Ingrese tu gmail: ";
                cin >> gmail;
                cout << "Ingrese tu contraseña: ";
                cin >> contrasena;


                break;

            case OPCION_SALIR:
                cout << "Saliendo del programa." << endl;
                break;

            default:
                cout << "Opcion no valida. Intentalo de nuevo." << endl;
                break;
        }
    }

    return 0;
}
