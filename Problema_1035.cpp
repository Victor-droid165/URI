/*
  @autor: Victor E. B. Rodrigues;
  @data: 22/06/2021;
  @nome: Teste de Seleção 1;
*/

#include <bits/stdc++.h>

using namespace std;

string valoresAceitos(int& A, int& B, int& C, int &D){
	if(B > C  && D > A)
		if(C + D > A + B  && (C>0 && D>0))
			if(A%2==0)
				return("Valores aceitos");
	return("Valores nao aceitos");
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	
	cout << valoresAceitos(A, B, C, D) << endl;
    
    return 0;
}
