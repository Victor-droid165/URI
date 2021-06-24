/*
  @autor: Victor E. B. Rodrigues;
  @data: 24/06/2021;
  @nome: Pares, Ímpares, Positivos e Negativos;
*/

#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int cont=0, qtdPar=0, qtdPositivo=0;
	vector<int> vet(5);
	
	int size = vet.size();
	
	while(cin >> vet[cont]){
		if (vet[cont] > 0)
			qtdPositivo++;
		if (vet[cont] % 2 == 0)
			qtdPar++;
		cont++;
	}
	
	cout << qtdPar << " valor(es) par(es)" << endl;
	cout << size - qtdPar << " valor(es) impar(es)" << endl;
	cout << qtdPositivo << " valor(es) positivo(s)" << endl;
	cout << size - qtdPositivo - count(vet.begin(), vet.end(), 0) << " valor(es) negativo(s)" << endl;
	
	return 0;
}
