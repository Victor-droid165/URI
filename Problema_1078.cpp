/*
  @autor: Victor E. B. Rodrigues;
  @data: 03/07/2021;
  @nome: Tabuada;
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int N;
	
	cin >> N;
	
	for(int i=1;i<=10;i++){
		cout << i << " x " << N << " = " << i*N<< endl;
		
	}
	return 0;
}
