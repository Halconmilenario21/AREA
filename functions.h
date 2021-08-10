#include <iostream>
#include <cmath>
using namespace std;
float pi = 3.1415;
int cuadrado() {
	float LadoCuadrado;
	cout << "Introduce la medida de cualquier lado del cuadrado: ";
	cin >> LadoCuadrado;
	float AreaCuadrado = LadoCuadrado * LadoCuadrado;
	cout << "El area del cuadrado es " << AreaCuadrado << "\n";
	return 0;
}
int rectangulo() {
	float baserectangulo;
	cout << "Intruduce la medida de la base del rectangulo: ";
	cin >> baserectangulo;
	float alturarectangulo;
	cout << "Introduce la medida de altura del rectangulo: ";
	cin >> alturarectangulo;
	float arearectangulo = baserectangulo * alturarectangulo / 2;
	cout << "El area del rectangulo es de " << arearectangulo << "\n";
	return 0;
}
int triangulo() {
	float alturatriangulo;
	float basetriangulo;
	cout << "Introduce la medida de la base del triangulo: ";
	cin >> basetriangulo;
	cout << "Introduce la medida de la altura del triangulo:";
	cin >> alturatriangulo;
	float areatriangulo = basetriangulo * alturatriangulo / 2;
	cout << "El area del triangulo es de " << areatriangulo << "\n";
	return 0;
}
int rombo() {
	float diagonalmenor;
	float diagonalmayor;
	cout << "Introduce la medida de la diagonal menor del rombo: ";
	cin >> diagonalmenor;
	cout << "Introduce la medida de la diagonal mayor del rombo: ";
	cin >> diagonalmayor;
	float arearombo = diagonalmenor * diagonalmayor / 2;
	cout << "El area del rombo es de " << arearombo << "\n";
	return 0;
}
int trapecio() {
	cout << "Introduce la medida de la base mayor del trapecio: ";
	float BMayor;
	cin >> BMayor;
	cout << "Introduce la medida de la base menor del trapecio: ";
	float BMenor;
	cin >> BMenor;
	cout << "Introduce la medida de la altura del trapecio en centimetros: ";
	float alturatrapecio;
	cin >> alturatrapecio;
	float AreaTrapecio = (BMayor * BMenor / 2) * alturatrapecio;
	cout << "El area del trapecio es de" << AreaTrapecio << "\n";
	return 0;
}
int poligonoregular() {
	cout << "Introduce la medida del perimetro del poligono: ";
	float Perimetropoligono;
	cin >> Perimetropoligono;
	cout << "Introduce la medida del apotema del poligono: ";
	float Apotemapoligono;
	cin >> Apotemapoligono;
	float Areapoligono = (Perimetropoligono * Apotemapoligono / 2);
	cout << "El area del poligono regular es de" << Areapoligono << "\n";
	return 0;
}
int circulo() {
	cout << "Introduce la medida del radio del circulo: ";
	float radioA;
	cin >> radioA;
	float Areacirculo = radioA * radioA * pi;
	cout << "El area del circulo es de " << Areacirculo << "\n";
	return 0;
}
