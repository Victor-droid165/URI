/*
  @autor: Victor E. B. Rodrigues;
  @data: 07/07/2021;
  @nome: Divisores I;
*/

#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int N;
	cin >> N;
	
	for(int i = 1; i <= N; i++)
		if(!(N%i))
			cout << i << endl;

	return 0;
}
