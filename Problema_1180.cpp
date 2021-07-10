/*
  @autor: Victor E. B. Rodrigues;
  @data: 10/07/2021;
  @nome: Menor e Posição;
*/

#include <bits/stdc++.h>

using namespace std;

int getIndiceMenorValor(const int * vetor, const int &tamanho){
	int indiceMenorValor = 0;
	for(int i= 0; i < tamanho; i++){
		for(int j=0; j < tamanho; j++){
			if(vetor[i]<vetor[j] && vetor[i] < vetor[indiceMenorValor])
				indiceMenorValor = i;
		}
	}
	return indiceMenorValor;
}

int absAB(int a, int b){
	return ((a>b) ? a-b : b-a);
}

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int N;
	cin >> N;
	const int MAX = N;
	int vetor[MAX];
	
	while(N)
		cin >> vetor[absAB(N--,MAX)];
	
	int indiceMenor = getIndiceMenorValor(vetor, MAX);

	cout << "Menor valor: " << vetor[indiceMenor] << endl << "Posicao: " << indiceMenor << endl;

	return 0;
}
