/*
  @autor: Victor E. B. Rodrigues;
  @data: 22/06/2021;
  @nome: Lista Telefônica Econômica;
*/

#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <queue>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	int n;
	while(cin >> n){
		priority_queue <string> fila;
		vector <string> meuVetor;
		while (n != 0){
			string resposta;
			cin >> resposta;
			fila.push(resposta);
			n--;
		}
		while (!(fila.empty())){
			meuVetor.push_back(fila.top());
			fila.pop();
		}

		int contador = 0, contador2 = 1, len = meuVetor.size();
		while (len - contador2 - 1 >= 0){
			for (int indice = 0; indice < meuVetor[len-contador2].length(); indice++){
				char letra = meuVetor[len-contador2][indice];
				char letra2 = meuVetor[len-contador2-1][indice];
				if (letra == letra2)
					contador++;
				else
					break;
			}
			contador2++;
		}
		cout << contador << endl;
	}
	return 0;
}
