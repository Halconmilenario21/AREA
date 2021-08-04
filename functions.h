#include <iostream>
#include <cmath>
using namespace std;
float pi = 3.1415;
int cuadrado() {
	float LadoCuadrado;
	cout << "Introduce cuanto mide cualquier lado del cuadrado en centimetros: ";
	cin >> LadoCuadrado;
	float AreaCuadrado = LadoCuadrado * LadoCuadrado;
	cout << "El area del cuadrado es " << AreaCuadrado << "\n";
	return 0;
}
int rectangulo() {
	float baserectangulo;
	cout << "Intruduce la base del rectangulo en centimetros: ";
	cin >> baserectangulo;
	float alturarectangulo;
	cout << "Introduce la altura del rectangulo en centimetros: ";
	cin >> alturarectangulo;
	float arearectangulo = baserectangulo * alturarectangulo / 2;
	cout << "El area del rectangulo es de " << arearectangulo << "\n";
	return 0;
}
int triangulo() {
	float alturatriangulo;
	float basetriangulo;
	cout << "Introduce la base del triangulo en centímetros";
	cin >> basetriangulo;
	cout << "Introduce la altura del triangulo en centimetros";
	cin >> alturatriangulo;
	float areatriangulo = basetriangulo * alturatriangulo / 2;
	cout << "El area del triangulo es de " << areatriangulo << "\n";
	return 0;
}
int rombo() {
	float diagonalmenor;
	float diagonalmayor;
	cout << "Introduce la diagonal menor del rombo en centimetros: ";
	cin >> diagonalmenor;
	cout << "Introduce la diagonal mayor del rombo en centimetros: ";
	cin >> diagonalmayor;
	float arearombo = diagonalmenor * diagonalmayor / 2;
	cout << "El area del rombo es de " << arearombo << "\n";
	return 0;
}
int trapecio() {
	cout << "Introduce la base mayor del trapecio en centímetros: ";
	float BMayor;
	cin >> BMayor;
	cout << "Introduce la base menor del trapecio en centímetros: ";
	float BMenor;
	cin >> BMenor;
	cout << "Introduce la altura del trapecio en centimetros: ";
	float alturatrapecio;
	cin >> alturatrapecio;
	float AreaTrapecio = (BMayor * BMenor / 2) * alturatrapecio;
	cout << "El area del trapecio es de" << AreaTrapecio << "\n";
	return 0;
}
int poligonoregular() {
	cout << "Introduce el perimetro del poligono en centímetros: ";
	float Perimetropoligono;
	cin >> Perimetropoligono;
	cout << "Introduce el apotema del poligono en centímetros: ";
	float Apotemapoligono;
	cin >> Apotemapoligono;
	float Areapoligono = (Perimetropoligono * Apotemapoligono / 2);
	cout << "El area del poligono regular es de" << Areapoligono << "\n";
	return 0;
}
int circulo() {
	cout << "Introduce el radio del circulo en centimetros: ";
	float radioa;
	cin >> radioa;
	float Areacirculo = radioa * radioa * pi;
	cout << "El area del circulo es de " << Areacirculo << "\n";
	return 0;
}
int select() {
	cout << "ESTE PROGRAMA SIEMPRE DARA LOS RESULTADOS EN CENTIMETROS CUADRADOS \n";
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
			cout << "1.0.2021031700000 \n";
		}else if (sel == 'P') {
			poligonoregular();
		}
		else {
			cout << "Opcion no valida";
		}
	}
	return 0;
}
