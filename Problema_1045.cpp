/*
  @autor: Victor E. B. Rodrigues;
  @data: 23/06/2021;
  @nome: Tipos de Triângulos;
*/

#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int absAB(double& a, double& b){
	if (a>b)
		return a-b;
	return (a-b) * (-1);
}

bool formaTriangulo(double& lado1, double& lado2, double& lado3){
	if(lado1 < lado2 + lado3 && lado1 > absAB(lado2, lado3))
		return true;
	return false;
}

bool ehRetangulo(double& a, double& b, double& c){
	return pow(a,2) == pow(b,2) + pow(c,2);
}

bool ehObtusangulo(double& a, double& b, double& c){
	return pow(a,2) > pow(b,2) + pow(c,2);
}

bool ehAcutangulo(double& a, double& b, double& c){
	return pow(a,2) < pow(b,2) + pow(c,2);
}

bool ehEquilatero(double& a, double& b, double& c){
	return a == b && a == c;
}

bool ehIsosceles(double& a, double& b, double& c){
	return a == b || a == c || b == c;
}

string getTipoTrianguloAngulo(double& a, double& b, double& c){
	if(ehRetangulo(a,b,c))
		return "Retangulo";
	if(ehObtusangulo(a,b,c))
		return "Obtusangulo";
	if(ehAcutangulo(a,b,c))
		return "Acutangulo";
}

string getTipoTrianguloLados(double& a, double& b, double& c){
	if(ehEquilatero(a,b,c))
		return "Equilatero";
	if(ehIsosceles(a,b,c))
		return "Isosceles";
	return "";
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	double a, b, c;
	cin >> a >> b >> c;
	double arr[] = {a, b, c};
	sort(arr, arr+3);

	if(formaTriangulo(*(arr+2),*(arr+1),*arr)){
		string tipoTrianguloAngulo = getTipoTrianguloAngulo(*(arr+2),*(arr+1),*arr);
		transform(tipoTrianguloAngulo.begin(), tipoTrianguloAngulo.end(), tipoTrianguloAngulo.begin(), ::toupper);
		cout<< "TRIANGULO " << tipoTrianguloAngulo<< endl;
		string tipoTrianguloLados = getTipoTrianguloLados(*(arr+2),*(arr+1),*arr);
		if (!tipoTrianguloLados.empty()){
			transform(tipoTrianguloLados.begin(), tipoTrianguloLados.end(), tipoTrianguloLados.begin(), ::toupper);
			cout << "TRIANGULO " << tipoTrianguloLados << endl;
		}		
	}
	else
		cout << "NAO FORMA TRIANGULO" << endl;
	
    return 0;
}
