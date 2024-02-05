#include <iostream>

using namespace std;

int main()
{
    int aleatorio = 0;
    aleatorio = ((int)rand() / (RAND_MAX)) + 1;
    int eleccion;
cout << "------------------- Bienvenido al sistema de apuestas ------------------" << endl;
    cout << "escoge 0- para cara 1-para sello" << endl;
    cin >> eleccion;

    if ((aleatorio == 0 && eleccion == 0) || (aleatorio == 1 && eleccion == 1))
    {
        cout << "ganaste!!" << endl;
    }
    else
    {
        cout << "perdiste :c" << endl;
    }

    return 0;
}