/*
  @autor: Victor E. B. Rodrigues;
  @data: 10/07/2021;
  @nome: Abaixo da Diagonal Principal;
*/

#include <bits/stdc++.h>
#include <iomanip>
#define MAX 12

using namespace std;

double somaAbaixoDiagonalPrincipal(const double matriz[MAX][MAX], const int &tamanho, int indice = 11, double soma=0){
	if(indice > 0){
		for(int i = indice-1; i >= 0; i--)
			soma += matriz[indice][i];
		soma = somaAbaixoDiagonalPrincipal(matriz, tamanho, --indice, soma);
	}
	return soma;
}

double media(const double matriz[MAX][MAX], const int &tamanho){
	double media = somaAbaixoDiagonalPrincipal(matriz, tamanho);
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
	
	cout << setprecision(1) << fixed << ((T == 'S') ? somaAbaixoDiagonalPrincipal(M, MAX) : media(M, MAX)) << endl;

	return 0;
}
