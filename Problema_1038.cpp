/*
  @autor: Victor E. B. Rodrigues;
  @data: 22/06/2021;
  @nome: Lanche;
*/

#include <bits/stdc++.h>
#include <map>
#include <iomanip>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	map<char, double> codPreco = {{'1', 4.}, {'2', 4.5}, {'3', 5.}, {'4', 2.}, {'5', 1.5}};
	
	char codigo; int qtd;
	cin >> codigo >> qtd;
	cout << setprecision(2) << fixed << "Total: R$ " << codPreco[codigo]*qtd << endl;
    
    return 0;
}
