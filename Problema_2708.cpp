/*
  @autor: Victor E. B. Rodrigues;
  @data: 24/06/2021;
  @nome: Turistas no Parque Huacachina!;
*/
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	string x="";
	int y, soma=0, cont=0;
	
	do{
		cin >> x;
		if(x == "ABEND")
			break;
		cin >> y;
		if(x=="SALIDA"){
			soma+=y;
			cont++;
		}
		else{
			soma-=y;
			cont--;
		}
	} while(x!="ABEND");
	cout << soma << endl << cont << endl;
	
	return 0;
}
