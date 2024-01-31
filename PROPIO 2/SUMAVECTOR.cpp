#include <iostream>
#include <vector>
using namespace std;

void sumado(int vect[], int vect2[], int TAM);
void muestra(int vect[], int TAM);

int main() {

    int TAM;

    cout << "Ingrese la cantidad de datos enteros para la suma "; 
    cin >> TAM;

    int vect[TAM];
    int vect2[TAM];

    for (size_t i = 0; i < TAM; i++) {
        cout << "Ingrese el " << i + 1 << "° número que desea sumar: ";
        cin >> vect[i];
    }

    for (size_t i = 0; i < TAM; i++) {
        cout << "Ingrese el " << i + 1 << "° segundo número para realizar la suma: ";
        cin >> vect2[i];
    }

    sumado(vect, vect2, TAM);
    muestra(vect, TAM);

    return 0;
}

void sumado(int vect[], int vect2[], int TAM) {
    for (size_t i = 0; i < TAM; i++) {
        vect[i] = vect[i] + vect2[i];
    }
}

void muestra(int vect[], int TAM) {
    for (size_t i = 0; i < TAM; i++) {
        cout << vect[i] << " ";
    }
    cout << endl;
}
