#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // SINTAXIS
    vector<int> vInt;
    vector<bool> vBool;

    // INICIALIZACIÓN
    vector<int> vInt5({1, 3, 2, 5, 4}); // crea un vector con valores del 1 al 5
    vector<bool> vBoolTrue5(5, true);   // crea un vector con 5 elementos en TRUE
    vector<int> vIntCopy(vInt5);        // crea un vector copia de vInt5

    // FUNCIONES
    cout << "----------------vInt5------------------" << endl;
    cout << "PRIMER ELEMENTO: " << *vInt5.begin() << endl;
    cout << vInt5.front() << endl;
    cout << "ULTIMO ELEMENTO: " << *vInt5.end() << endl;
    cout << "TAMAÑO VECTOR: " << vInt5.size() << endl;
    vInt5.push_back(46);
    cout << "TAMAÑO VECTOR DESPUES DE AGREGAR ELEMENTO: " << vInt5.size() << endl;
    vInt5.clear();
    cout << "TAMAÑO VECTOR DESPUES DE ELIMINAR TODOS LOS ELEMENTOS: " << vInt5.size() << endl;
    cout << "ESTA VACIO? " << vInt5.empty() << endl;
    vInt5.push_back(1);
    vInt5.push_back(2);
    vInt5.push_back(3);
    vInt5.push_back(4);
    vInt5.push_back(5);
    cout << "ELEMENTO EN POSICIÓN 2: " << vInt5.at(2) << endl;
    vInt5.pop_back();
    cout << "TAMAÑO DEL VECTOR DESPUES DE ELIMINAR EL ÚLTIMO ELEMENTO: " << vInt5.size() << endl;
    vInt5.erase(vInt5.begin() + 2);
    cout << "ELEMENTO EN POSICIÓN 2 DESPUÉS DE ELIMINAR EL ELEMENTO DE LA POSICIÓN 2: " << vInt5.at(2) << endl;

    // ORDENAR ELEMENTOS
    sort(vInt5.begin(), vInt5.end());

    // RECORRER LOS ELEMENTOS DE UN VECTOR
    cout << "VECTOR ORDENADO: ";
    for (int num : vInt5)
    {
        cout << num << " ";
    }
    cout << endl;
}