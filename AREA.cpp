#include <iostream>
#include "functions.h"
// #include "getPI.h"
using namespace std;
int main() {
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
		//		cout << "Perimetros: \n";
		//		cout << "c = CUADRADO \n";
		//		cout << "r = RECTANGULO \n";
		//		cout << "t = TRIANGULO \n";
		//		cout << "o = ROMBO \n";
		//		cout << "d = TRAPECIO \n";
		cout << "OPCIONES ESPECIALES \n";
		cout << "E = Exit \n";
		cout << "V = Version \n";
		cout << "Que figura quieres calcular:  ";
		cin >> sel;
		if (sel == 'C') {
			cuadrado();
		}
		else if (sel == 'R') {
			rectangulo();
		}
		else if (sel == 'T') {
			triangulo();
		}
		else if (sel == 'O') {
			rombo();
		}
		else if (sel == 'D') {
			trapecio();
		}
		else if (sel == 'I') {
			circulo();
		}
		else if (sel == 'E') {
			break;
		}
		else if (sel == 'V') {
			cout << "1.2.20210810 \n";
		}
		else if (sel == 'P') {
			poligonoregular();
		}
		else {
			cout << "Opcion no valida";
		}
	}

	return 0;
}