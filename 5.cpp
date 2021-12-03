#include <iostream>
#include <string.h>

using namespace std;

struct Empleados{
    string nombre;
    char sexo;
    float sueldo;
};

int main(void){
    Empleados empleados[10]; //declaracion de variable tipo struct

    cout << "\nIngresando datos.";
    for(int i = 0; i < 10; i++){
        cout << "\nEmpleado ["<<i+1<<"]: " << endl;
        cout << "Nombre: ";
        getline(cin, empleados[i].nombre);
        cout << "Sexo M/F: ";
        cin >> empleados[i].sexo; cin.ignore();
        cout << "Sueldo: ";
        cin >> empleados[i].sueldo; cin.ignore();
    }

    cout << "\nImprimiendo datos.";
    for(int j = 0; j < 10; j++){
        cout << "\nEmpleado ["<<j+1<<"]" << endl;
        cout << "Nombre: " << empleados[j].nombre << "." << endl;
        cout << "Sexo: " << empleados[j].sexo << endl;
        cout << "Sueldo: $" << empleados[j].sueldo << endl;
    }

    cout << "\nFin del programa." << endl;

    return 0;
}