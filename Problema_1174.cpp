/*
  @autor: Victor E. B. Rodrigues;
  @data: 10/07/2021;
  @nome: Seleção em Vetor I;
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
	
	cout << setprecision(1) << fixed;
	
	while(x<100){
		cin >> vetor[x];
		if(vetor[x] <= 10)
			cout << "A["+to_string(x)+"] = " << vetor[x] << endl;
		x++;
	}

	return 0;
}
