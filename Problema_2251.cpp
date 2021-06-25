/*
  @autor: Victor E. B. Rodrigues;
  @data: 24/06/2021;
  @nome: Torres de Hanói;
*/
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int N, contaTestes=1;
	cin >> N;
	while(N!=0){
		cout << "Teste " << contaTestes++ << endl;
		cout << fixed << setprecision(0) << pow(2, N)-1 << endl << endl;
		cin >> N;
	}
	
	return 0;
}
