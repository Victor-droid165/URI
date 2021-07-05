/*
  @autor: Victor E. B. Rodrigues;
  @data: 03/07/2021;
  @nome: Sequencia IJ 1;
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int i = 1, j = 60;
	do{
		cout << "I=" << i << " J=" << j << endl;
		i+=3;
		j-=5;
	}while(j >= 0);
	
	return 0;
}
