#include <iostream>
using namespace std;

int main() {
    int sencillas, dobles, triples;
    float total_sin_impuesto, impuesto, total_con_impuesto;

    cout << "Ingrese la cantidad de hamburguesas sencillas: ";
    cin >> sencillas;

    cout << "Ingrese la cantidad de hamburguesas dobles: ";
    cin >> dobles;

    cout << "Ingrese la cantidad de hamburguesas triples: ";
    cin >> triples;

    total_sin_impuesto = sencillas * 50 + dobles * 75 + triples * 100;
    impuesto = total_sin_impuesto * 0.05;
    total_con_impuesto = total_sin_impuesto + impuesto;

    cout << "Total sin impuesto: C$" << total_sin_impuesto << endl;
    cout << "Impuesto: C$" << impuesto << endl;
    cout << "Total con impuesto: C$" << total_con_impuesto << endl;

    return 0;
}