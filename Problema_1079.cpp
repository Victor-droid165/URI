/*
  @autor: Victor E. B. Rodrigues;
  @data: 03/07/2021;
  @nome: Médias Ponderadas;
*/
#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

double sum(const double *lista, const int tamanho){
	int soma = 0;
	for(int i =0; i < tamanho; i++)
		soma+= *(lista+i);
	return(soma);
}

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int N;
	const double pesos[] = {2, 3, 5};
	double notas[3], media;
	int tamanho = sizeof(pesos)/sizeof(double);
	
	cin >> N;
	cout << setprecision(1) << fixed;
	
	for(int i=0;i<N;i++){
		cin >> notas[0] >> notas[1] >> notas[2];
		media = notas[0]*pesos[0] + notas[1]*pesos[1] + notas[2]*pesos[2];
		media/= sum(pesos, tamanho);
		cout << media << endl;
	}
	return 0;
}
