/*
  @autor: Victor E. B. Rodrigues;
  @data: 06/07/2021;
  @nome: Idades;
*/

#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int idade, qtdIdades=0, mediaIdades=0;
	while(cin >> idade){
		if (idade < 0)
			break;
		qtdIdades++;
		mediaIdades += idade;
	}
	cout << setprecision(2) << fixed << (double) mediaIdades/qtdIdades << endl;
	
	return 0;
}
