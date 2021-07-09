/*
  @autor: Victor E. B. Rodrigues;
  @data: 09/07/2021;
  @nome: Número Perfeito;
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);

	int N, X, somaDivisores;
	cin >> N;
	
	while(N--){
		cin >> X;
		somaDivisores = 0;
		for (int i = 1; i < X; i++){
			if(X%i == 0)
				somaDivisores+=i;
			if(somaDivisores>X)
				break;
		}
		if (somaDivisores == X)
			cout << X << " eh perfeito" << endl;
		else
			cout << X << " nao eh perfeito" << endl;
	}

	return 0;
}
