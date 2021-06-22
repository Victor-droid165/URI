/*
  @autor: Victor E. B. Rodrigues;
  @data: 22/06/2021;
  @nome: Cédulas;
*/

#include <bits/stdc++.h>
#include <stack>

using namespace std;


void printCedulas(int& n, stack<int>& pilha){
	if(!pilha.empty()){
		int valor = pilha.top();
		int qtdCedulas = n/valor;
		if (qtdCedulas > 0)
			n -= qtdCedulas*valor;
		cout << qtdCedulas << " nota(s) de R$ " << valor << ",00" << endl;
		pilha.pop();
		printCedulas(n, pilha);
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	stack<int> pilha;
	
	pilha.push(1);
	pilha.push(2);
	pilha.push(5);
	pilha.push(10);
	pilha.push(20);
	pilha.push(50);
	pilha.push(100);
	
	int N;
	cin >> N;
	
	cout << N << endl;
	printCedulas(N, pilha);
    
    return 0;
}
