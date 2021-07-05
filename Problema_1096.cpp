/*
  @autor: Victor E. B. Rodrigues;
  @data: 03/07/2021;
  @nome: Sequencia IJ 2;
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	for(int i=1,j=7; i<=9; i+=2, j=7){
		for(j; j >= 5; j--){
			cout << "I=" << i << " J=" << j << endl;
		}
	}
	
	return 0;
}
