/*
  @autor: Victor E. B. Rodrigues;
  @data: 10/07/2021;
  @nome: Linha na Matriz;
*/

#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

double soma(const double * vetor, const int &tamanho){
	double soma = 0;
	for(int i = 0; i < tamanho; i++)
		soma += *(vetor+i);
	return soma;
}

double media(const double * vetor, const int &tamanho){
	double media = soma(vetor, tamanho)/tamanho;
	return media;
}

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	const int MAX = 12;
	double M[MAX][MAX];
	int L;
	char T;
	
	cin >> L >> T;
	
	for(int i = 0; i < MAX; i++)
		for(int j = 0; j < MAX; j++)
			cin >> M[i][j];	
	
	cout << setprecision(1) << fixed << ((T == 'S') ? soma(M[L], MAX) : media(M[L], MAX)) << endl;

	return 0;
}
