/*
  @autor: Victor E. B. Rodrigues;
  @data: 22/06/2021;
  @nome: Cálculo Simples;
*/

#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

double getValorAPagar(int& qtd1, int& qtd2, double& preco1, double& preco2){
	return qtd1*preco1+qtd2*preco2;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int cod1, cod2, qtd1, qtd2;
    double preco1, preco2;
    cin >> cod1 >> qtd1 >> preco1 >> cod2 >> qtd2 >> preco2;
    
    cout << setprecision(2) << fixed;
    cout << "VALOR A PAGAR: R$ " << getValorAPagar(qtd1, qtd2, preco1, preco2) << endl;
    
    return 0;
}
