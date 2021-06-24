/*
  @autor: Victor E. B. Rodrigues;
  @data: 24/06/2021;
  @nome: Pares entre Cinco Números;
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int val, qtdPar=0;
	
	while(cin >> val){
		if (val%2 == 0){
			qtdPar++;
		}
	}
	
	cout << qtdPar << " valores pares" << endl;
	
	return 0;
}
