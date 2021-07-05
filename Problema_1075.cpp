/*
  @autor: Victor E. B. Rodrigues;
  @data: 03/07/2021;
  @nome: Resto 2;
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int N;
	
	cin >> N;
	
	for(int i=1;i<=10000;i++){
		if(i%N == 2)
			cout << i << endl;
		
	}
	return 0;
}
