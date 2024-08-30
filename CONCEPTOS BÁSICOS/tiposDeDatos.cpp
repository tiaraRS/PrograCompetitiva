#include <bits/stdc++.h>

using namespace std;

int main()
{

    cout << "RANGOS MÍNIMOS Y MÁXIMOS PARA TIPOS DE DATOS NUMÉRICOS:" << endl;
    // INT_MIN, INT_MAX
    cout << "INT MIN = " << INT_MIN << endl;
    cout << "INT MAX = " << INT_MAX << endl;
    cout << "-----------------------------------------" << endl;
    // LONG LONG MIN, LONG LONG MAX
    cout << "LLONG MIN = " << LLONG_MIN << endl;
    cout << "LLONG MAX = " << LLONG_MAX << endl;

    // ERROR COMUN AL USAR LONG LONG
    int f = 123456789;
    long long f1 = f * f;
    cout << f1 << endl;               // RESULTADO ES TIPO INT
    cout << (long long)f * f << endl; // RESULTADO TIPO LONG LONG

    cout << "-----------------------------------------" << endl;

    // FLOAT MIN, FLOAT MAX
    cout << "FLOAT MIN = " << FLT_MIN << endl;
    cout << "FLOAT MAX = " << FLT_MAX << endl;
    cout << "-----------------------------------------" << endl;

    // DOUBLE MIN, DOUBLE MAX
    cout << "DOUBLE MIN = " << DBL_MIN << endl;
    cout << "DOUBLE MAX = " << DBL_MAX << endl;
    cout << "-----------------------------------------" << endl;

    // BOOL
    bool b1 = true, b2 = false;
    cout << "BOOL TRUE = " << b1 << endl;
    cout << "BOOL FALSE = " << b2 << endl;
    cout << "----------------------------" << endl;
    if (b1)
    {
        cout << "TRUE" << endl;
    }
    else
    {
        cout << "FALSE" << endl;
    }
    cout << "----------------------------" << endl;
    if (5 < 2)
    {
        cout << "TRUE" << endl;
    }
    else
    {
        cout << "FALSE" << endl;
    }
}