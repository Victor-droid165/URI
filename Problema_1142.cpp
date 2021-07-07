/*
  @autor: Victor E. B. Rodrigues;
  @data: 05/07/2021;
  @nome: PUM;
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int x;
	const int PUM = 4;
	cin >> x;
	
	for (int i = 1; i <= x*PUM; i++)
		(i%PUM == 0) ? cout << "PUM" << endl : cout << i << " ";
	
	return 0;
}
