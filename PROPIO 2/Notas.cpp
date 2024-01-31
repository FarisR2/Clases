#include <iostream>
#include <vector>

using namespace std;

int main(){

    const int nots = 10;
    int notas[nots];
    int suma;

    bool todasLasNotas = true;

    for (size_t i = 0; i < nots; i++)
    {
        cout << "Ingrese las notas del estudiante " << i + 1 << ": ";
        cin  >> notas[i];
        suma+= notas[i];
    }
        double promedio = suma / 9;

    for (size_t i = 0; i < nots; i++){ 
    if (promedio < 11)
        {
            todasLasNotas = false;
            cout << "Usted desaprobo el curso";
            break;
        }
    }
    if (todasLasNotas)
    {
        cout << "Usted aprobo el curso";
    }else{
        cout << "Ingreso un numero decimal";
    }
    

}