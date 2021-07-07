/*
  @autor: Victor E. B. Rodrigues;
  @data: 07/07/2021;
  @nome: Soma de Pares Consecutivos;
*/

#include <bits/stdc++.h>

using namespace std;

int sumEvens(int numeroInicial, int qtdPares){
	int soma = 0;
	while(qtdPares)
		if(!(numeroInicial++%2)){
			soma += numeroInicial-1;
			qtdPares--;
		}
	return soma;
}

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);

	int X, paresConsecutivos=5;
	cin >> X;
	while(X){
		cout << sumEvens(X, paresConsecutivos) << endl;
		cin >> X;
	}

	return 0;
}
