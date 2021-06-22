/*
  @autor: Victor E. B. Rodrigues;
  @data: 22/06/2021;
  @nome: Notas e Moedas;
*/

#include <bits/stdc++.h>
#include <stack>

using namespace std;


void printCedulas(double& n, stack<int>& pilha){
	if(!pilha.empty()){
		int valor = pilha.top();
		int qtdCedulas = n/valor;
		if (qtdCedulas > 0)
			n -= qtdCedulas*valor;
		cout << qtdCedulas << " nota(s) de R$ " << valor << ".00" << endl;
		pilha.pop();
		printCedulas(n, pilha);
	}
}

void printMoedas(double& n){
	cout << setprecision(2) << fixed;
	int cont;
	double vet[6] = {1, 0.5, 0.25, 0.1, 0.05, 0.01};
	for(int i = 0; i<6; i++){
		cont = int(n/vet[i]);
		cout << cont << " moeda(s) de R$ " << vet[i] << endl;
		if(cont>0){
			n -= vet[i]*cont;
			n *= 1000000.00;
			n +=1;
			n /= 1000000.00;
		}
	}	
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	stack<int> pilha;
	pilha.push(2);
	pilha.push(5);
	pilha.push(10);
	pilha.push(20);
	pilha.push(50);
	pilha.push(100);
	
	double n;
	cin >> n;
	
	cout << "NOTAS:" << endl;
	printCedulas(n, pilha);

	cout << "MOEDAS:" << endl;
	printMoedas(n);
	
    
    return 0;
}
