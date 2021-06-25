/*
  @autor: Victor E. B. Rodrigues;
  @data: 24/06/2021;
  @nome: Balanço de Parênteses I;
*/
#include <bits/stdc++.h>
#include <queue>
#include <stack>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	string str;
	queue<string> fila;
	stack<char> pilha;
	
	while(getline(cin, str)){
		if (str == ",")
			break;
		fila.push(str);
	}
	
	while(!fila.empty()){
		string equacao = fila.front();
		int qtdpe = 0, qtdpd = 0;
		if(count(equacao.begin(), equacao.end(), '(') != count(equacao.begin(), equacao.end(), ')')){
			cout << "incorrect" << endl;
			fila.pop();
			continue;
		}
		
		for (char chr : equacao){
			if(chr == '(' || chr == ')')
				pilha.push(chr);
		}
		
		while(!pilha.empty()){
			if(pilha.top() == ')'){
				qtdpd++;
				qtdpe--;
			}
			if(pilha.top() == '('){
				qtdpe++;
				qtdpd--;
			}
			if(qtdpd<0)
				break;
			pilha.pop();
		}
		if(qtdpd == qtdpe && qtdpd == 0)
			cout << "correct" << endl;
		else
			cout << "incorrect" << endl;
		pilha = stack<char>();
		fila.pop();
	}
	
	
	return 0;
}
