/*
  @autor: Victor E. B. Rodrigues;
  @data: 24/06/2021;
  @nome: Números Ímpares;
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int X;
	cin >> X;
	
	for(int i = 1; i <= X; i+=2)
		cout << i << endl;
	
	return 0;
}
