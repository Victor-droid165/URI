/*
  @autor: Victor E. B. Rodrigues;
  @data: 05/07/2021;
  @nome: Quadrado e ao Cubo;
*/

#include <bits/stdc++.h>

using namespace std;

void quadradoEAoCubo(int &max, int i=1){
	if(!(i>max)){
		cout << i << " " <<  i*i << " " << i*i*i << endl;
		quadradoEAoCubo(max, ++i);	
	}
}

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int x;
	cin >> x;
	quadradoEAoCubo(x);
	
	return 0;
}
