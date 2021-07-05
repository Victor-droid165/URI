/*
  @autor: Victor E. B. Rodrigues;
  @data: 04/07/2021;
  @nome: Senha Fixa;
*/
#include <bits/stdc++.h>
#define SENHA 2002
using namespace std;

bool permitirAcesso(int senha){
	if (senha==SENHA){
		cout << "Acesso Permitido" << endl;
		return true;	
	} else{
		cout << "Senha Invalida" << endl;
		return false;
	}
}

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);

	bool acesso = false;
	int senha;
	
	do{
		cin >> senha;
		acesso = permitirAcesso(senha);
	}while(!acesso);
	
	
	return 0;
}
