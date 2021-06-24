/*
  @autor: Victor E. B. Rodrigues;
  @data: 23/06/2021;
  @nome: Múltiplos;
*/

#include <bits/stdc++.h>

using namespace std;


bool ehInteiro(double num){
	return (int) num == num;
}

bool multiplos(double& x, double& y){
	double maior = (y>x) ? y : x;
	double menor = (maior==y) ? x : y;
	return ehInteiro(maior/menor);
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	double x, y;
	cin >> x >> y;
	
	(multiplos(x,y)) ? cout << "Sao Multiplos" << endl : cout << "Nao sao Multiplos" << endl;
	
    return 0;
}
