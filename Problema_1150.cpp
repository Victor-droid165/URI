/*
  @autor: Victor E. B. Rodrigues;
  @data: 05/07/2021;
  @nome: Ultrapassando Z;
*/

#include <bits/stdc++.h>

using namespace std;


int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int X, Z, soma=0;
	cin >> X >> Z;
	while(Z <= X)
		cin >> Z;
	
	int i = X;
	while(!(soma > Z))
		soma+=i++;
		
	cout << i-X << endl;
	
	return 0;
}
