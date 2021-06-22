/*
  @autor: Victor E. B. Rodrigues;
  @data: 22/06/2021;
  @nome: Idade em Dias;
*/

#include <bits/stdc++.h>
#include <stack>

using namespace std;


void printIdadeAMD(int& dias, stack<int>& pilha){
	if(!pilha.empty()){
		int valor = pilha.top();
		int tempo = dias/valor;
		if (tempo > 0)
			dias -= tempo*valor;
		if(pilha.top() == 365)
			cout << tempo << " ano(s)" <<  endl;
		else if(pilha.top() == 30)
			cout << tempo << " mes(es)" <<  endl;
		else
			cout << tempo << " dia(s)" <<  endl;
		pilha.pop();
		printIdadeAMD(dias, pilha);
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	stack<int> pilha;
	
	pilha.push(1);
	pilha.push(30);
	pilha.push(365);
	
	int N;
	cin >> N;
	
	printIdadeAMD(N, pilha);
    
    return 0;
}
