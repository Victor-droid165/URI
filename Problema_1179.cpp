/*
  @autor: Victor E. B. Rodrigues;
  @data: 10/07/2021;
  @nome: Preenchimento de Vetor IV;
*/

#include <bits/stdc++.h>

using namespace std;

void printPares(const int * par, int &qtdPares){
	for(int i= 0; i < qtdPares; i++)
		cout << "par["+to_string(i)+"] = " << *(par+i) << endl;
	qtdPares = 0;
}

void printImpares(const int * impar, int &qtdImpares){
	for(int i= 0; i < qtdImpares; i++)
		cout << "impar["+to_string(i)+"] = " << *(impar+i) << endl;
	qtdImpares = 0;
}

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	const int MAX=5;
	int par[MAX], impar[MAX];
	int xPar=0, xImpar=0, cont=15, num;
	
	while(cont--){
		cin >> num;
		(num%2 == 0) ? par[xPar++] = num : impar[xImpar++] = num;
		if (xPar == MAX)
			printPares(par, xPar);
		else if (xImpar == MAX)
			printImpares(impar, xImpar);
	}
	printImpares(impar, xImpar);
	printPares(par, xPar);

	return 0;
}
