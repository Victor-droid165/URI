/*
  @autor: Victor E. B. Rodrigues;
  @data: 09/07/2021;
  @nome: Crescimento Populacional;
*/

#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);

	int T, PA, PB, qtdAnos;
	double G1, G2;
	string msg;
	cin >> T;
	
	while(T--){
		qtdAnos = 0;
		msg = "";
		cin >> PA >> PB >> G1 >> G2;
		while(!(PA > PB)){
			PA += PA*(G1/100);
			PB += PB*(G2/100);
			qtdAnos++;
			if(qtdAnos > 100){
				msg = "Mais de 1 seculo.";
				break;
			}				
		}
		if (!(msg == "Mais de 1 seculo."))
			msg = to_string(qtdAnos) + " anos.";
		cout << msg << endl;
	}

	return 0;
}
