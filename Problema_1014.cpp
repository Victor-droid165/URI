/*
  @autor: Victor E. B. Rodrigues;
  @data: 22/06/2021;
  @nome: Consumo;
*/

#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

double calculaConsumo(int& distanciaPercorrida, double kmGastos){
	return distanciaPercorrida/kmGastos;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int X;
	double Y;
	cin >> X >> Y;
    
    cout << setprecision(3) << fixed;
    cout << calculaConsumo(X, Y) << " km/l" << endl;
    
    return 0;
}
