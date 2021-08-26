#include <iostream>
#include "functions.h"
// #include "getPI.h"
using namespace std;

// Extraemos primero el menu a su propia funcion.
void menu() {
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
	return;
}

int main() {
	while (true) {
		// Extraemos el menú a una función a parte dentro del mismo fichero por legibilidad.
		menu();
		char sel;
		cin >> sel;
		// Cuando hay más de 2 if o else-if anidados, es recomendabe cambiarlo
		// a la sentencia "switch", por legibilidad y mantenibilidad.

		// Otra cosa que se suele hacer, aunque en menús no mucho es convertir
		// a minúsculas (o mayúsculas) la opción introducida por el usuario. Si el usuario 
		// introduce 'c' en vez de 'C', el programa no sabría qué opción ha elegido. 
		// Sin embargo si conviertes todo lo introducido por el usuario a mayúsculas
		// en este caso, eliminarías ese error. El problema de esto es si quisieses
		// dar soporte a las opciones 'c' y 'C', que en este caso no te serviría.
		// Te dejo tu línea comentada:
		 
		 switch (toupper(sel)) {
		// switch (sel) {
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
			default:
				cout << "Opcion no valida";
		}
	}

	return 0;
}