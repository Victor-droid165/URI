/*
  @autor: Victor E. B. Rodrigues;
  @data: 05/07/2021;
  @nome: Somando Inteiros Consecutivos;
*/

#include <bits/stdc++.h>

using namespace std;


int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int A, N, soma=0;
	cin >> A >> N;
	while(N <= 0)
		cin >> N;
	for(int i = 0; i <= N-1; i++)
		soma += A+i;
	cout << soma << endl;
	
	return 0;
}
