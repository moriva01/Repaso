#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int jugar_pc = rand() % 3 + 1;
    int jugar_user;

    cout << "-------------------------- bienvenido al juego de piedra, papel o tijera ----------------------" << endl;
    cout << "selecciona tu opcion (1 - Piedra, 2 - Papel, 3 - Tijera): ";
    cin >> jugar_user;

    if (jugar_user == jugar_pc)
    {
        cout << "empate" << endl;
    }
    else if ((jugar_user == 1 && jugar_pc == 3) ||
             (jugar_user == 2 && jugar_pc == 1) ||
             (jugar_user == 3 && jugar_pc == 2))
    {
        cout << "ganaste" << endl;
    }
    else
    {
        cout << "la pc gana" << endl;
    }

    return 0;
}
