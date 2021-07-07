/*
  @autor: Victor E. B. Rodrigues;
  @data: 05/07/2021;
  @nome: Tipo de Combustível;
*/

#include <bits/stdc++.h>
#include <map>
#include <string>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int x;
	map <int, map<string, int> > tipoQuantidade = {
		{1, {{"Alcool", 0}}},
		{2, {{"Gasolina", 0}}},
		{3, {{"Diesel", 0}}},
		{4, {{"Fim", 0}}}
	};
	
	while(!(tipoQuantidade[4]["Fim"])){
		cin >> x;
		if (tipoQuantidade.count(x) == 0)
			continue;
		else{
			map<string, int>::iterator it = tipoQuantidade[x].begin();
			it->second++;
		}
	}
	cout << "MUITO OBRIGADO" << endl;
	map <int, map<string, int> >::iterator it = tipoQuantidade.begin();
	for(it; it != tipoQuantidade.end(); it++){
		if (++it == tipoQuantidade.end())
			break;
		else
			it--;
		map<string, int>::iterator it2 = (it->second).begin();
		cout << it2->first << ": " << it2->second << endl;
	}

	return 0;
}
