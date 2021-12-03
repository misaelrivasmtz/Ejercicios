#include <iostream>

using namespace std;

float calcularSalario(float, float);

int main(void){
    string nombre;
    float cantidadHoras = 0, valorHora = 0, sueldo = 0;

    cout << "\nCalculo de salario neto." << endl;
    cout << "Ingresando datos: " << endl;
    cout << "Nombre: ";
    getline(cin, nombre);
    cout << "Cantidad de horas trabajadas: ";
    cin >> cantidadHoras; cin.ignore();
    cout << "Valor por hora: ";
    cin >> valorHora; cin.ignore();

    //llamada a la funcion que calcula el salario
    sueldo = calcularSalario(cantidadHoras, valorHora);

    cout << "Nombre: " << nombre << endl;
    cout << "Sueldo final: $" << sueldo << endl;
    
    cout << "Fin del programa." << endl;

    return 0;
}

float calcularSalario(float nHoras, float valorH){

    /* 
    DATOS DEL 2021
    DESCUENTO DEL ISSS = 3%  TECHO = $1000 -> $30.00
    DESCUENTO DE AFP = 7.25% TECHO = $6523.20 -> $472.93
    TECHO -> SALARIO MÁXIMO COTIZABLE.
    */

    float salario, isss, afp;

    salario = (nHoras * valorH);

    if(salario <= 1000){ //para salarios iguales o menores a $1000
        isss = salario * 0.03;
        afp = salario * 0.0725;
    }
    else if(salario > 1000 && salario <= 6523.20){ //para salarios mayores a $1000 y menores o iguales a $6523.20
        isss = 1000 * 0.03;
        afp =  salario * 0.0725;
    }
    else{ //para salarios mayores a $6523.20
        isss = 1000 * 0.03;
        afp = 6523.20 * 0.0725;
    }

    salario = salario - isss - afp; //salario - descuentos

    return salario;    
}