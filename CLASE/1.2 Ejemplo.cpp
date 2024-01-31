#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main(){
    

    int suma;
    int vector[] = {0,1,2,3,4,5,6};
    for (size_t i = 0; i < 5; ++i)
    {
        suma += vector[i];
        cout << suma;
    }
}
