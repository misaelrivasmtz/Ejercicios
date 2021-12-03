#include <iostream>

using namespace std;
/*Prototipo*/
bool anioBisiesto(int);

int main(void){
    int anio;
    cout << "\nCalcular si un anio es bisiesto o no." << endl;
    cout << "Digite un anio: ";
    cin >> anio; cin.ignore();
    if(anioBisiesto(anio))
        cout << "El anio si es bisiesto." << endl;
    else
        cout << "El anio NO es bisiesto." << endl;

    cout << "\nFin del programa." << endl;

    return 0;
}

//funcion con algoritmo que verifica si el año es bisiesto o no
bool anioBisiesto(int anio){
    if(anio%4 == 0){
        if(anio%100 == 0){
            if(anio%400 == 0){
                return true;
            }
            else
                return false;
        }
        return true;
    }
    else
        return false;
}