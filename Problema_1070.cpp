/*
  @autor: Victor E. B. Rodrigues;
  @data: 24/06/2021;
  @nome: Seis Números Ímpares;
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int X, cont = 0;
	cin >> X;
	
	while(cont != 6){
		static int i = X;
		if(i%2 == 1){
			cout << i << endl;
			i+=2;
			cont++;
		}
		else
			i++;
	}
	
	return 0;
}
