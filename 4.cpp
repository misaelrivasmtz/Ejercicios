#include <iostream>
#include <string.h>

using namespace std;

struct informacion{
    string nombre;
    int edad;
    float altura;
};

int main(void){
    informacion datos[5];

    cout << "\nAlmacenando datos.";
    for(int i = 0; i < 5; i++){
        cout << "\nPersona ["<<i+1<<"]: " << endl;
        cout << "Nombre: ";
        getline(cin, datos[i].nombre);
        cout << "Edad: ";
        cin >> datos[i].edad; cin.ignore();
        cout << "Altura: ";
        cin >> datos[i].altura; cin.ignore();
    }

    cout << "\nImprimiendo datos.";
    for(int j = 0; j < 5; j++){
        cout << "\nPersona ["<<j+1<<"]: " << endl;
        cout << "Nombre: " << datos[j].nombre << "." << endl;
        cout << "Edad: " << datos[j].edad << " años." << endl;
        cout << "Altura: " << datos[j].altura << "." << endl;
    }

    cout << "\nFin del programa." << endl;

    return 0;
}   