/*
  @autor: Victor E. B. Rodrigues;
  @data: 22/06/2021;
  @nome: Fórmula de Bhaskara;
*/

#include <bits/stdc++.h>
#include <cmath>

using namespace std;

void bhaskara(double& a, double& b, double& c){
	double delta = pow(b,2)+(-4*a*c);
	cout << setprecision(5) << fixed;
	if (delta < 0 || a ==0)
		cout << "Impossivel calcular" << endl;
	else{
		double x1 = (-b+sqrt(delta))/ (2*a);
		double x2 = (-b-sqrt(delta))/ (2*a);
		cout << "R1 = " << x1 << endl;
		cout << "R2 = " << x2 << endl;
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);

	double A, B, C;
	cin >> A >> B >> C;
	
	bhaskara(A, B, C);
    
    return 0;
}
