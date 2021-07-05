/*
  @autor: Victor E. B. Rodrigues;
  @data: 03/07/2021;
  @nome: Experiências;
*/
#include <bits/stdc++.h>
#include <map>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int N, Quantia;
	char Tipo;
	map<char,int> tipoQuantia;
	
	cin >> N;
	
	for(int i=0;i<N;i++){
		cin >> Quantia >> Tipo;
		(tipoQuantia.count(Tipo) > 0) ? tipoQuantia[Tipo] += Quantia : tipoQuantia[Tipo] = Quantia;
	}
	
	int totalCoelhos = tipoQuantia['C'], totalRatos = tipoQuantia['R'], totalSapos = tipoQuantia['S'];
	int total = totalCoelhos + totalRatos + totalSapos;
	
	cout << "Total: " << total << " cobaias" << endl
		<< "Total de coelhos: " << totalCoelhos << endl
		<< "Total de ratos: " << totalRatos << endl
		<< "Total de sapos: " << totalSapos << endl
		<< setprecision(2) << fixed
		<< "Percentual de coelhos: " << (double) totalCoelhos/total*100 << " %" << endl
		<< "Percentual de ratos: " << (double) totalRatos/total*100 << " %" << endl
		<< "Percentual de sapos: " << (double) totalSapos/total*100 << " %" << endl;
	
	return 0;
}
