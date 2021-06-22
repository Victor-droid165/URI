/*
  @autor: Victor E. B. Rodrigues;
  @data: 22/06/2021;
  @nome: Gasto de Combustível;
*/

#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

struct Automovel{
	double kmPorLitro;
	
	double calculaLitrosGastos(int& horasGastas, int& velocidadeMedia){
		int distanciaPercorrida = horasGastas*velocidadeMedia;
		return distanciaPercorrida/kmPorLitro;
	}
};

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int h, vm;
	cin >> h >> vm;
	
	Automovel carro = {12};
	
	cout << setprecision(3) << fixed;
	cout << carro.calculaLitrosGastos(h, vm)<< endl;
    
    return 0;
}
