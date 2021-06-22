/*
  @autor: Victor E. B. Rodrigues;
  @data: 22/06/2021;
  @nome: Diferença;
*/

#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int produto(int& a, int& b){
	return a*b;
}

int diferenca(int& a, int& b, int& c, int& d){
	return produto(a,b) - produto(c,d);
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);

    int A, B, C, D;
    cin >> A >> B >> C >> D;
    
    cout << "DIFERENCA = " << diferenca(A, B, C, D) << endl;
    
    return 0;
}
