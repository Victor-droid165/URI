/*
  @autor: Victor E. B. Rodrigues;
  @data: 07/07/2021;
  @nome: Soma de Ímpares Consecutivos III;
*/

#include <bits/stdc++.h>

using namespace std;

int sumOdds(int numeroInicial, int qtdImpares){
	int soma = 0;
	while(qtdImpares){
		if(numeroInicial++%2){
			soma+= numeroInicial-1;
			qtdImpares--;
		}
	}
	return soma;
}

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);

	int N, num1, num2;
	cin >> N;

	for (int i = 0; i < N; i++){
		cin >> num1 >> num2;
		cout << sumOdds(num1, num2) << endl;	
	}

	return 0;
}
