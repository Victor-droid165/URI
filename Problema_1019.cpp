/*
  @autor: Victor E. B. Rodrigues;
  @data: 22/06/2021;
  @nome: Conversão de Tempo;
*/

#include <bits/stdc++.h>
#include <stack>

using namespace std;


void printHorario(int& segundos, stack<int>& pilha){
	if(!pilha.empty()){
		int valor = pilha.top();
		int tempo = segundos/valor;
		if (tempo > 0)
			segundos -= tempo*valor;
		if(pilha.top() == 1)
			cout << tempo << endl;
		else
			cout << tempo << ":";
		pilha.pop();
		printHorario(segundos, pilha);
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	stack<int> pilha;
	
	pilha.push(1);
	pilha.push(60);
	pilha.push(3600);
	
	int N;
	cin >> N;
	
	printHorario(N, pilha);
    
    return 0;
}
