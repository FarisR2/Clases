#include <iostream>
#include <vector>

using namespace std;

void vectorBucle(){

    vector <int> vectorEdades = {20, 17, 18, 23};

    bool todosMayoresEdad = true;

    for (size_t i = 0; i < vectorEdades.size(); i++)
    {
        if (vectorEdades[i] < 18)
        {
            todosMayoresEdad = false;
            break;
        }

        
    }
    
    if (todosMayoresEdad){
        cout << "Todas las personas del vector son mayores de edad";
    }else{
        cout << "Al menos una persona en el vector no es mayor de edad." << endl;

    }

}
    