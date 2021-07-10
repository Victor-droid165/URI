/*
  @autor: Victor E. B. Rodrigues;
  @data: 10/07/2021;
  @nome: Preenchimento de Vetor II;
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	const int MAX=1000;
	int vetor[MAX], indice=0, T;
	
	cin >> T;
	
	while(indice<MAX){
		vetor[indice] = indice%T;
		cout << "N["+to_string(indice)+"] = " << vetor[indice] << endl;  
		indice++;
	}

	return 0;
}
