/*
  @autor: Victor E. B. Rodrigues;
  @data: 23/06/2021;
  @nome: Triângulo;
*/

#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

double getAreaTrapezio(double& baseMaior, double& baseMenor, double& altura){
	return (baseMaior + baseMenor)*altura/2.0;
}

double getPerimetroTriangulo(double& lado1, double& lado2, double& lado3){
	return lado1+lado2+lado3;
}

double absAB(double& a, double& b){
	if (a-b > 0)
		return a-b;
	return (a-b)*(-1);
}

bool formaTriangulo(double& lado1, double& lado2, double& lado3){
	if(lado1 < lado2 + lado3 && lado1 > absAB(lado2, lado3))
		return true;
	return false;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	double x, y, z;
	cin >> x >> y >> z;
	
	cout << setprecision(1) << fixed;
	
	if(formaTriangulo(x, y, z))
		cout << "Perimetro = " << getPerimetroTriangulo(x, y, z) << endl;
	else
		cout << "Area = " << getAreaTrapezio(x, y, z) << endl;
	
    return 0;
}
