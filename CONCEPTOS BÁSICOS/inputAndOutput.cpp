#include <bits/stdc++.h>

using namespace std;

int main()
{
    // IR COMENTANDO Y DESCOMENTANDO PARA PROBAR DIFERENTES ENTRADAS Y SALIDAS ESTANDAR
    //  CIN
    int a, b, c;
    string h;
    cin >> a >> b >> c >> h;
    /*
    El siguiente cin lee asumiendo que hay un espacio/salto de línea entre cada elemento
    Por ejemplo:
        - 15 64 987 hola
        - 15
            64 987
            hola
        - 15                64                       978 hola
    */
    cout << a << ", " << b << ", " << c << ", " << h << endl;

    // SCANF Y PRINTF
    /*
    El siguiente scanf y printf puede ser utilizado con:
        - 1 2
        - 3 4
        NO PUEDE SER UTILIZADO CON: 2             5
    */
    /*int d, e, f;
    scanf("%d %d", &d, &e);
    printf("%d %d \n", d, e);*/

    // LEER LINEA ENTERA CON POSIBLES ESPACIOS
    /*
    Por ejemplo:
        - Televisor 4K Ultra HD - Oferta especial
        - Laptop de alto rendimiento
        - Auriculares inalámbricos - oferta del día
    */
    /*string s;
    getline(cin, s);
    // cin >> s;
    cout << s << endl;*/

    // LEER ENTRADAS INFINITAS hasta EOF (fin de archivo)
    // para probar en la ultima sentencia usar CTRL + D para terminar
    int x;
    /*while (cin >> x)
    {
        cout << "x = " << x << endl;
    }*/

    // VARIOS CASOS DE PRUEBA
    /*
    La primera línea de la entrada contiene un entero t (1 ≤ t ≤ 10^4 ) — el número de casos de prueba.
    La descripción de cada prueba consiste en una línea que contiene un entero rating (−5000 ≤ rating ≤ 5000)
    */
    /*int t = 5, rating;
    for (int i = 0; i < t; i++)
    {
        cin >> rating;
    }*/
}