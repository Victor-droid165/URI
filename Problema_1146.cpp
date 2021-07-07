/*
  @autor: Victor E. B. Rodrigues;
  @data: 05/07/2021;
  @nome: Sequências Crescentes;
*/

#include <bits/stdc++.h>

using namespace std;


int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int x=1;
	while(x!=0){
		cin >> x;
		for(int i = 1; i <= x; i++)
			((i%x)) ? cout << i << " " : cout << i << endl;
	}
	
	return 0;
}
