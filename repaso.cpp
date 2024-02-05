/* repaso de variables en c++*/

#include <iostream>

using namespace std;

#define Pi 3.1418;
#define friend 1

int main()
{

    char name[20];
    int num1 = 5;
    int num2 = 15;
    double pi;
    float num;
    num = 3.8;
    bool estado;
    estado = false;

    float res;

    res = num1 + num2;
    res = res + num;
    res = res * 2;

    cout << res << endl;

    cout << "el valor de pi es: " << Pi;

    const float iva = 19.02;
    cout << endl
         << "el valor de IVA es: " << iva << endl;

    int resultado = 0;
    cout << "cuanto es 39+50?" << endl;
    cin >> resultado;

    if (resultado == 39 + 50)
    {
        cout << "la respuesta es correcta!!" << endl;
    }
    else
    {
        cout << "todo mal" << endl;
    }
    system("PAUSE");
    return 0;
}
