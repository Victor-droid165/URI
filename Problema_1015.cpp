/*
  @autor: Victor E. B. Rodrigues;
  @data: 22/06/2021;
  @nome: Distância Entre Dois Pontos;
*/

#include <bits/stdc++.h>
#include <iomanip>
#include <fstream>
#include <math.h>
using namespace std;

struct Ponto{
	double x, y;
	
	double calculaDistancia(Ponto& p2){
		return sqrt(pow(p2.x - this->x, 2) + pow(p2.y - this->y, 2));
	}
	
	friend istream& operator>>(istream& is, Ponto& ponto){
		is >> ponto.x >> ponto.y;
		return is;
	}
};

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	Ponto p1, p2;
	cin >> p1 >> p2;
    
    cout << setprecision(4) << fixed;
    cout << p1.calculaDistancia(p2)<< endl;
    
    return 0;
}
