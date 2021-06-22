/*
  @autor: Victor E. B. Rodrigues;
  @data: 22/06/2021;
  @nome: Área;
*/

#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

double getAreaTriangulo(double& base, double& altura){
	return base*altura/2.0;
}

double getAreaCirculo(double& raio, double pi = 3.14159){
	return pi*(raio*raio);
}

double getAreaTrapezio(double& base1, double& base2, double& altura){
	return (base1+base2)*altura/2.0;
}

double getAreaQuadrado(double& lado){
	return lado*lado;
}

double getAreaRetangulo(double& base, double& altura){
	return base*altura;
}

void printAreas(double& A, double& B, double& C, int precisao = 3){
	cout << setprecision(precisao) << fixed;
	cout << "TRIANGULO: " << getAreaTriangulo(A, C) << endl;
	cout << "CIRCULO: " << getAreaCirculo(C) << endl;
	cout << "TRAPEZIO: " << getAreaTrapezio(A,B,C) << endl;
	cout << "QUADRADO: " << getAreaQuadrado(B) << endl;
	cout << "RETANGULO: " << getAreaRetangulo(A,B) << endl;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	double A, B, C;
	cin >> A >> B >> C;
    
    printAreas(A,B,C);
    
    return 0;
}
