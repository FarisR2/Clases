/* Los vectores trabajan con memoria = 0xf125
    vector:
    int
    float
    char
    *p
*/

/*  
    int vector [7]
  [  0 - 1 - 2 - 3(9) - 4 - 5(6) - 6  ]
  [ 0xf125 - 0xf126 - 0xf127... 0fx131  ]
    vect [3] = 9
    vect [5] = 6
    Direccion de memoria:


    iterativo:
    while, for, do
    1-2-3-4(break)(continue Retorna a 1)-5-6

    Tipos de vectores;
    Dinamicos: Infinitos, no tienen un limite al momento de crearlas.
    Estatica: Limite, cuando creas un vector[5] tiene 5 valores.
 
    <ctime>: Para valores aleatorios
    push_back: E es más eficiente que agregar elementos utilizando el operador de índice ([]) cuando el tamaño del contenedor es 
    desconocido, ya que el vector puede ajustar automáticamente su capacidad interna para acomodar nuevos elementos.
    (*p): Valor.
    (p): Dirección.

    Enum: Son variables almacenadas para usarlas
    enum DiasSemana [ Lunes, Martes... Domingo ]
    DiasSemana dia = Martes; 

    &: Operación binaria de suma
    
    
*/

