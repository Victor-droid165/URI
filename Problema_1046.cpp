/*
  @autor: Victor E. B. Rodrigues;
  @data: 23/06/2021;
  @nome: Tempo de Jogo;
*/

#include <bits/stdc++.h>

using namespace std;

bool acabouMesmoDia(int& horaInicial, int& horaFinal){
	if(horaFinal <= horaInicial)
		return false;
	return true;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int h1, h2;
	cin >> h1 >> h2;
	
	if(acabouMesmoDia(h1, h2)){
		cout << "O JOGO DUROU " << h2-h1 << " HORA(S)" << endl;
	} else
		cout << "O JOGO DUROU " << 24-h1+h2 << " HORA(S)" << endl;
	
    return 0;
}
