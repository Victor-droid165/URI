/*
  @autor: Victor E. B. Rodrigues;
  @data: 06/07/2021;
  @nome: Sequência S II;
*/

#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	double soma=0;
	
	for(int i = 1, j=1; i <= 39; i+=2, j*=2)
		soma += (double) i/j;

	cout << setprecision(2) << fixed << soma << endl;
	return 0;
}
