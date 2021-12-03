#include <iostream>
#include <math.h>

using namespace std;
/*prototipos*/
void menu(void);
void areaCirculo(void);
void areaCuadrado(void);
void areaRectangulo(void);
void areaTriangulo(void);

int main(void){

    menu();

    return 0;
}

void menu(void){
    int opcion;
    bool end = false;
    
    do{
    cout << "\nCalculo de areas de figuras geometricas." << endl;
    cout << "1. Circulo." << endl;
    cout << "2. Cuadrado." << endl;
    cout << "3. Rectangulo." << endl;
    cout << "4. Triangulo." << endl;
    cout << "5. Salir. " << endl;
    cout << "Opcion: ";
    cin >> opcion; cin.ignore();

    switch(opcion){
        case 1:
            areaCirculo();
            break;
        case 2:
            areaCuadrado();
            break;
        case 3:
            areaRectangulo();
            break;
        case 4: 
            areaTriangulo();
            break;
        case 5:
            end = true;
            break;
        default:
            cout << "Opcion invalida." << endl;
            break;
    }
    }while(end != true);

    cout << "\nFin del programa." << endl;
}

void areaCirculo(){
    float radio, area;
    cout << "\nDigite el radio del circulo: ";
    cin >> radio; cin.ignore();
    area = M_PI * pow(radio, 2); 
    cout << "El area del circulo es: " << area << " unidades cuadradas." << endl;
}

void areaCuadrado(void){
    float lado, area;
    cout << "\nDigite el valor del lado del cuadrado: ";
    cin >> lado; cin.ignore();
    area = pow(lado, 2);
    cout << "El area del cuadrado es: " << area << " unidades cuadradas." << endl;
}

void areaRectangulo(void){
    float base, altura, area;
    cout << "\nDigite la base del rectangulo: ";
    cin >> base; cin.ignore();
    cout << "Digite la altura del rectangulo: ";
    cin >> altura; cin.ignore();
    area = base * altura;
    cout << "El area del rectangulo es: " << area << " unidades cuadradas." << endl; 
}

void areaTriangulo(void){
    float base, altura, area;
    cout << "\nDigite la base del triangulo: ";
    cin >> base; cin.ignore();
    cout << "Digite la altura del triangulo: ";
    cin >> altura; cin.ignore();
    area = (base * altura) / (float) 2;
    cout << "El area del triangulo es: " << area << " unidades cuadradas." << endl; 
}