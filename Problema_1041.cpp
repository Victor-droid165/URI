/*
  @autor: Victor E. B. Rodrigues;
  @data: 23/06/2021;
  @nome: Coordenadas de um Ponto;
*/

#include <bits/stdc++.h>

using namespace std;

bool ehPositivo(double& x){
	return x>0;
}

struct ParOrdenado{
	double x;
	double y;
	
	char sobreEixo(){
		if (x == 0 && y == 0)
			return '2';
		if (y == 0)
			return 'X';
		if (x == 0)
			return 'Y';
		return 'F';
	}
	
	int pertenceAoQuadrante(){
		if(sobreEixo() != 'F')
			return sobreEixo();
		if(ehPositivo(x) && ehPositivo(y))
			return 1;
		if(ehPositivo(y) && !ehPositivo(x))
			return 2;
		if(!ehPositivo(y) && !ehPositivo(x))
			return 3;
		return 4;
	}
};


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	double x,y;
	cin >> x >> y;
	ParOrdenado p1 = {x,y};
	
	int quadrante = p1.pertenceAoQuadrante();
	if(!(quadrante >= 1 && quadrante <=4)){
		if (quadrante == '2')
			cout << "Origem" << endl;
		else
			cout << "Eixo " << (char) quadrante << endl;
	}
	else
		cout << "Q" << quadrante << endl;
    
    return 0;
}
