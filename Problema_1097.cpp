/*
  @autor: Victor E. B. Rodrigues;
  @data: 03/07/2021;
  @nome: Sequencia IJ 3;
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	for(int i=1,j=7, k=j; i<=9; i+=2, j=k+2)
		for(k=j; j > k-3; j--)
			cout << "I=" << i << " J=" << j << endl;
	
	return 0;
}
