/*
  @autor: Victor E. B. Rodrigues;
  @data: 24/06/2021;
  @nome: Soma de Ímpares Consecutivos I;
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int x, y, soma = 0;
	cin >> x >> y;
	
	if(x < y)
		for(int i = x+1; i < y; i++)
			soma+= (i%2==1 || i%2 == -1) ? i : 0;
	else
		for(int i = y+1; i < x; i++)
			soma+= (i%2==1 || i%2 == -1) ? i : 0;
			
	cout << soma << endl;
	return 0;
}
