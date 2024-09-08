#include <bits/stdc++.h>

using namespace std;

int main()
{
    // SINTAXIS
    stack<string> sString;

    // AGREGAR ELEMENTOS
    sString.push("El Principito");
    sString.push("El Libro de la Selva");
    sString.push("100 Años de Soledad");
    sString.push("Los Juegos del Hambre");

    // FUNCIONES
    cout << "----------------sString------------------" << endl;
    cout << "PRIMER ELEMENTO: " << sString.top() << endl;
    // cout << "ÚLTIMO ELEMENTO: " << sString. endl;
    cout << "TAMAÑO STACK: " << sString.size() << endl;
    sString.push("Dinosaurios");
    cout << "TAMAÑO STACK DESPUÉS DE AGREGAR ELEMENTO: " << sString.size() << endl;
    cout << "ESTA VACÍO? " << sString.empty() << endl;
    sString.pop();
    cout << "TAMAÑO DEL STACK DESPUÉS DE ELIMINAR EL ÚLTIMO ELEMENTO: " << sString.size() << endl;
    // cout << "ELEMENTO EN POSICIÓN 2: " << endl;
    // cout << "ELEMENTO EN POSICIÓN 2 DESPUÉS DE ELIMINAR EL ELEMENTO DE LA POSICIÓN 2: " << endl;
}