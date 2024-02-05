#include <iostream>

using namespace std;

int main()
{
    float peso_bebe = 0;
    int meses_bebe = 0;
    float dosis_vacuna = 0;

    cout << "Bienvenido al sistema de vacuna de famisalud" << endl;
    cout << "por favor digite el peso del bebe:" << endl;
    cin >> peso_bebe;
    cout << "por favor digite los meses que tiene el bebe: " << endl;
    cin >> meses_bebe;

    dosis_vacuna = ((peso_bebe + 10) / (meses_bebe * 10)) * 8;

    cout << "la dosis ideal para el bebe es de: " << dosis_vacuna << endl;

    return 0;
}