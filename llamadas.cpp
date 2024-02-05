/* Sistema de calculo para llamadas - ivan david moreno vargas */

#include <iostream>

using namespace std;

main()
{

    int tipo_plan = 0;
    int total_llamada = 0;
    int duracion_llamada = 0;
    cout << "-------------- Bienvenido al sistema de facturacion telefonica -------------------------" << endl;
    cout << "Seleccione su plan telefonico: " << endl;
    cout << "1- Fija 2-Celular 3- Internacional " << endl;
    cin >> tipo_plan;
    cout << "Digite la duracion de la llamada: " << endl;
    cin >> duracion_llamada;

    switch (tipo_plan)
    {
    case 1:
        total_llamada = 200 + duracion_llamada;
        break;

    case 2:
        total_llamada = 300 + duracion_llamada;
        break;

    case 3:
        total_llamada = 500 + duracion_llamada;
        break;

    default:
        cout << "la opcion seleccionada no esta disponible" << endl;
        break;
    }

    cout << "su llamada tiene un costo de " << total_llamada << " pesos" << endl;

    return 0;
}