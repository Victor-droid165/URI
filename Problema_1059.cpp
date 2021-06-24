/*
  @autor: Victor E. B. Rodrigues;
  @data: 23/06/2021;
  @nome: Números Pares;
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int num = 0;
	do{
		if(++num%2 == 0)
			cout << num << endl;
	} while(num<100);
		
    return 0;
}
