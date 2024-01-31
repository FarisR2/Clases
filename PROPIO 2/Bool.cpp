/*

    && = Y
    || = O
    ! = Negacion
    

*/


#include <iostream>
using namespace std;

int negacionPrueba() {
    
    int a = 5;
    int b = 5;

    bool prueba = !(a > b);
    /* true = Verdadero
        Ambos se pueden usar para la operación de arriba con las dos funciones:
            "and (Es igual a "Y" &&)" u "or (Es igual a "O" ||)"
       not = Falso
    */

    cout << prueba;

    return 1;
}

void dobleAspersand(){

    int edad;
    bool validarID;

    cout << "Edad: "; cin >> edad;
    cout << "¿Tienes una ID validad? (1. Si     2. No): "; cin >> validarID;

    if ( edad >= 18 && validarID)
    {
        cout << "Bienvenido al programa";
    }else{
        cout << "No valido";
    }
    
    

}


int main(){
    dobleAspersand();
}