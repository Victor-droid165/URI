/*
  @autor: Victor E. B. Rodrigues;
  @data: 23/06/2021;
  @nome: Tempo de Jogo com Minutos;
*/

#include <bits/stdc++.h>

using namespace std;

bool acabouMesmoDia(int& horaInicial, int& horaFinal, int& minutoInicial, int& minutoFinal){
	if(horaFinal <= horaInicial){
		if(minutoFinal <= minutoInicial)
			return false;
		return true;	
	}
	return true;
}

int ajustaHorario(int &m1, int &m2, int &h2){
	int min = m2-m1;
	if(min == 60)
		min = 0;
	else if(min < 0){
		h2--;
		min = 60 + min;
	}
	return min;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int h1, h2, m1, m2;
	cin >> h1 >> m1 >> h2 >> m2;
	
	if(acabouMesmoDia(h1, h2, m1, m2)){
		int min = ajustaHorario(m1, m2, h2);
		cout << "O JOGO DUROU " << h2-h1 << " HORA(S) E " << min << " MINUTO(S)"<< endl;
	} else{
		int min = ajustaHorario(m1, m2, h2);
		cout << "O JOGO DUROU " << 24-h1+h2 << " HORA(S) E " << min << " MINUTO(S)" << endl;
	}
	
    return 0;
}
