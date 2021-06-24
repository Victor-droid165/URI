/*
  @autor: Victor E. B. Rodrigues;
  @data: 23/06/2021;
  @nome: DDD;
*/

#include <bits/stdc++.h>
#include <map>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);

	map< string, string> dddEstado= 
	{
		{"61", "Brasilia"},
		{"71", "Salvador"},
		{"11", "Sao Paulo"},
		{"21", "Rio de Janeiro"},
		{"32", "Juiz de Fora"},
		{"19", "Campinas"},
		{"27", "Vitoria"},
		{"31", "Belo Horizonte"}
	};
	string ddd;
	cin >> ddd;
	if(dddEstado.count(ddd) == 0)
		cout << "DDD nao cadastrado" << endl;
	else
		cout << dddEstado[ddd] << endl;
	
    return 0;
}
