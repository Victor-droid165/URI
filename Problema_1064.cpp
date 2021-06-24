/*
  @autor: Victor E. B. Rodrigues;
  @data: 24/06/2021;
  @nome: Positivos e Média;
*/

#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	
	double arr[6], soma = 0, val;
	int qtdPositivo=0;
	
	while(cin >> val){
		if (val > 0){
			arr[qtdPositivo] = val;
			soma+= arr[qtdPositivo++];
		}
	}
	
	cout << qtdPositivo << " valores positivos\n" << setprecision(1) << fixed << soma/qtdPositivo << endl;
	
	return 0;
}
