/*
  @autor: Victor E. B. Rodrigues;
  @data: 05/07/2021;
  @nome: Sequência Lógica 2;
*/

#include <bits/stdc++.h>

using namespace std;


int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int x,y;
	cin >> x >> y;
	
	for(int i = 1; i <= y; i++)
		((i%x)) ? cout << i << " " : cout << i << endl;
	
	return 0;
}
