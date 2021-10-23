#include <iostream>
#include "functions.h"
using namespace std;
void menu() {
	while (true) {
		char sel;
		cout << "Calcular el area de una figura geometrica \n";
		cout << "C = CUADRADO \n";
		cout << "R = RECTANGULO \n";
		cout << "T = TRIANGULO \n";
		cout << "O = ROMBO \n";
		cout << "D = TRAPECIO \n";
		cout << "I = CIRCULO \n";
		cout << "P = POLIGONO REGULAR \n";
		cout << "Perimetros: \n";
		cout << "c = CUADRADO \n";
		cout << "r = RECTANGULO \n";
		cout << "t = TRIANGULO \n";
		cout << "o = ROMBO \n";
		cout << "d = TRAPECIO \n";
		cout << "OPCIONES ESPECIALES \n";
		cout << "E = Exit \n";
		cout << "V = Version \n";
		cout << "Que figura quieres calcular:  ";
		cin >> sel;
		switch (sel) {
		case 'C':
			cuadrado();
			break;
		case 'R':
			rectangulo();
			break;
		case 'T':
			triangulo();
			break;
		case 'O':
			rombo();
			break;
		case 'D':
			trapecio();
			break;
		case 'I':
			circulo();
			break;
		case 'P':
			poligonoregular();
			break;
		case 'V':
			cout << "1.2.20210810 \n";
			break;
			// Otro método muy común es ordenar las opciones según si es más conciso o más
			// extenso.	Las opciones de salida son las menos concisas, así que se pueden poner
			// las últimas.
		case 'E':
			return 0;
			break;
		case 'c':
			pcuadrado();
		case 'r':
			prectangulo();
		case 't':
			ptriangulo();
		default:
			cout << "Opcion no valida";
		}
	}
}
int main() {
	menu();
	return 0;
}