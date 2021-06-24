/*
  @autor: Victor E. B. Rodrigues;
  @data: 23/06/2021;
  @nome: Números Positivos;
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int cont = 0; double arr[6];
	for(int i = 0; i < 6; i++){
		cin >> arr[i];
		cont+= (arr[i] > 0) ? 1 : 0; 
	}
	cout << cont << " valores positivos" << endl;
		
    return 0;
}
