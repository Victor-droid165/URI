/*
  @autor: Victor E. B. Rodrigues;
  @data: 10/07/2021;
  @nome: Preenchimento de Vetor III;
*/

#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	const int MAX=100;
	double vetor[MAX];
	int x=0;
	
	cin >> vetor[x];
	cout << setprecision(4) << fixed;
	cout << "N[0] = " << vetor[x] << endl;  
	
	while(++x<MAX){
		vetor[x] = vetor[x-1]/2;
		cout << "N["+to_string(x)+"] = " << vetor[x] << endl;  
	}

	return 0;
}
