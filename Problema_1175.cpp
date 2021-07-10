/*
  @autor: Victor E. B. Rodrigues;
  @data: 10/07/2021;
  @nome: Troca em Vetor I;
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	const int MAX=20;
	int vetor[MAX], x=0;
	
	// lê todos os elementos do vetor
	while(x<MAX)
		cin >> vetor[x++];
	
	x=0;
	int aux;
	
	// troca os elementos do vetor
	while(x<MAX/2){
		aux = vetor[x];
		vetor[x] = vetor[MAX-1-x];
		vetor[MAX-1-x++] = aux;
	}
	x=0;
	
	// printa os elementos do vetor
	while(x<MAX){
		cout << "N["+to_string(x)+"] = " << vetor[x] << endl;
		x++;
	}
	return 0;
}
