/*
  @autor: Victor E. B. Rodrigues;
  @data: 10/07/2021;
  @nome: Acima da Diagonal Secundária;
*/

#include <bits/stdc++.h>
#include <iomanip>
#define MAX 12

using namespace std;

double somaAcimaDiagonalSecundaria(const double matriz[MAX][MAX], const int &tamanho, int indice = 0, double soma=0){
	if(indice < tamanho-1){
		for(int i = 0; i < tamanho-1-indice; i++)
			soma += matriz[indice][i];
		soma = somaAcimaDiagonalSecundaria(matriz, tamanho, ++indice, soma);
	}
	return soma;
}

double media(const double matriz[MAX][MAX], const int &tamanho){
	double media = somaAcimaDiagonalSecundaria(matriz, tamanho);
	int soma = 0;
	for(int i=1; i < tamanho; i++)
		soma+=i;
	media /= soma;
	return media;
}

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);

	double M[MAX][MAX];
	char T;
	
	cin >> T;
	
	for(int i = 0; i < MAX; i++)
		for(int j = 0; j < MAX; j++)
			cin >> M[i][j];
	
	cout << setprecision(1) << fixed << ((T == 'S') ? somaAcimaDiagonalSecundaria(M, MAX) : media(M, MAX)) << endl;

	return 0;
}
