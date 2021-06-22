/*
  @autor: Victor E. B. Rodrigues;
  @data: 22/06/2021;
  @nome: Salário com Bônus;
*/

#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

double getSalarioBonificado(double& sal, double& montante){
	return sal+montante*0.15;
}

void printSalarioBonificado(double& sal, double& montante){
	cout << setprecision(2) << fixed;
	cout << "TOTAL = R$ " << getSalarioBonificado(sal, montante) << endl;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	string nome;
    double sal, montanteVendas;
    getline(cin, nome);
    cin >> sal >> montanteVendas;
    
    printSalarioBonificado(sal, montanteVendas);
    
    return 0;
}
