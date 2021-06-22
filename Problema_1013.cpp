/*
  @autor: Victor E. B. Rodrigues;
  @data: 22/06/2021;
  @nome: O Maior;
*/

#include <bits/stdc++.h>
using namespace std;

int absDiferenca(int& a, int& b){
	if(a>b)
		return a-b;
	return (a-b) * (-1);
}

int maiorAB(int a, int b){
	return (a+b+absDiferenca(a,b))/2;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int A, B, C;
	cin >> A >> B >> C;
    
    cout << maiorAB(maiorAB(A,B), C) << " eh o maior" <<  endl;
    
    return 0;
}
