#include <bits/stdc++.h>

using namespace std;

int main()
{
    // SINTAXIS
    priority_queue<int> pqInt;
    priority_queue<pair<int, string>> pqHospital;

    // AGREGAR ELEMENTOS
    pqInt.push(15);
    pqInt.push(5);
    pqInt.push(8);

    /*cout << pqInt.top() << endl;
    pqInt.pop();
    cout << pqInt.top() << endl;*/

    pqHospital.push(pair<int, string>(1, "Julio"));
    pqHospital.push(pair<int, string>(1, "Alejandra"));
    pqHospital.push(pair<int, string>(5, "Samuel"));
    pqHospital.push(pair<int, string>(1, "Isabel"));
    pqHospital.push(pair<int, string>(2, "Mauricio"));

    while (!pqHospital.empty())
    {
        cout << pqHospital.top().second << endl;
        pqHospital.pop();
    }
    // cout<<pqHospital.top().second<<endl;
}