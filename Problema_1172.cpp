/*
  @autor: Victor E. B. Rodrigues;
  @data: 09/07/2021;
  @nome: Substituição em Vetor I;
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	const int MAX=10;
	int vetor[MAX], x=0;
	
	while(cin >> vetor[x]){
		vetor[x] = ((vetor[x] <= 0) ? 1 : vetor[x]);
		cout << "X["+to_string(x)+"] = " << vetor[x] << endl;  
		x++;
	}

	return 0;
}
