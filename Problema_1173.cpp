/*
  @autor: Victor E. B. Rodrigues;
  @data: 09/07/2021;
  @nome: Preenchimento de Vetor I;
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	const int MAX=10;
	int vetor[MAX], x=0;
	
	cin >> vetor[x];
	cout << "N[0] = " << vetor[x] << endl;  
	
	while(++x<10){
		vetor[x] = vetor[x-1]*2;
		cout << "N["+to_string(x)+"] = " << vetor[x] << endl;  
	}

	return 0;
}
