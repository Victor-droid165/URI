/*
  @autor: Victor E. B. Rodrigues;
  @data: 03/07/2021;
  @nome: Par ou Ímpar;
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int N;
	
	cin >> N;
	
	for(int i=0;i<N;i++){
		int valor;
		cin >> valor;
		
		if(valor==0)
			cout << "NULL" << endl;
		else{
			if(valor%2==0)
				cout << "EVEN ";
			else
				cout << "ODD ";
			if(valor>0)
				cout << "POSITIVE" << endl;
			else
				cout << "NEGATIVE" << endl; 
		}
		
	}
	return 0;
}
