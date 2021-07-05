/*
  @autor: Victor E. B. Rodrigues;
  @data: 03/07/2021;
  @nome: Maior e Posição;
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int maiorPosicao[] = {0, 1}, num;
	cin >> maiorPosicao[0];
	
	for(int i=2;i<=100;i++){
		cin >> num;
		if (num > maiorPosicao[0]){
			maiorPosicao[0] = num;
			maiorPosicao[1] = i;
		}
	}
	cout << maiorPosicao[0] << endl << maiorPosicao[1] << endl;
	return 0;
}
