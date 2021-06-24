/*
  @autor: Victor E. B. Rodrigues;
  @data: 23/06/2021;
  @nome: Sort Simples;
*/

#include <bits/stdc++.h>
#include <list>

using namespace std;

list<int>& insere(list<int> &lista, int x, int y, int z){
	lista.push_back(x);
	lista.push_back(y);
	lista.push_back(z);
	return lista;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int x, y, z;
	cin >> x >> y >> z;
	list<int> numeros;
	
	insere(numeros, x, y , z);
	numeros.sort();
	insere(numeros, x, y, z);
	list<int>::iterator it = numeros.begin();
	int cont = 0;
	while(it != numeros.end()){
		if(cont == 3)
			cout << '\n';
		cout << *it << endl;
		cont++;
		it++;
	}

	
	
    return 0;
}
