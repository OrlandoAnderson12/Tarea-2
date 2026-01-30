#include <iostream>
using namespace std;

int main()
{
    double S = 1;
    double Fa = S / 4.0 + 40;

    if (Fa != 40.25)
    {
        cout << "Entonces esa no es la temperatura medida a traves del grillo" << endl;
    }
    else
    {
        cout << "La temperatura medida a traves del grillo es correcta" << endl;
    }

    cout << "La temperatura medida a traves del grillo es: "
         << Fa << " grados Celsius" << endl;

    return 0;
}