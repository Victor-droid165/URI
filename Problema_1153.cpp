/*
  @autor: Victor E. B. Rodrigues;
  @data: 05/07/2021;
  @nome: Fatorial Simples;
*/

#include <bits/stdc++.h>

using namespace std;

int fat(int num){
    if (num<1)
    	return 1;
    return num * fat(num-1);
}

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int x;
	cin >> x;
	cout << fat(x) << endl;
	
	return 0;
}
