/*
  @autor: Victor E. B. Rodrigues;
  @data: 22/06/2021;
  @nome: Esfera;
*/

#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

double getVolumeEsfera(double& raio, double pi = 3.14159){
	return 4/3.0*pi*(raio*raio*raio);
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	double raio;
	cin >> raio;
    
    cout << setprecision(3) << fixed;
    cout << "VOLUME = " << getVolumeEsfera(raio) << endl;
    
    return 0;
}
