/*
  @autor: Victor E. B. Rodrigues;
  @data: 24/06/2021;
  @nome: Quadrado de Pares;
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int N;
	cin >> N;
	
	for(int i = 2; i <= N; i+=2)
		cout << i << "^2 = " << i*i << endl;
			

	return 0;
}
