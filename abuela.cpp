#include <iostream>

using namespace std;

int main()
{
    float grados_f = 0;
    float conversion = 0;

    cout << "por favor digite la temperatura en grados Fahrenheit que indica la receta: " << endl;
    cin >> grados_f;

    conversion = (grados_f - 32) / 1.8;
    cout << "la temperatura de su horno en grados centrigrados es de: " << conversion << " c°" << endl;
    cout<<"disfrute de su receta"<<endl;

    return 0;
}