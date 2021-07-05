/*
  @autor: Victor E. B. Rodrigues;
  @data: 05/07/2021;
  @nome: Dividindo X por Y;
*/

#include <bits/stdc++.h>

using namespace std;

bool ehNulo(double x){
	return x==0;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int N;
	int x,y;
	
	cin >> N;
	
	for (int i = 0; i<N; i++){
		cin >> x >> y;
		if(ehNulo(y))
			cout << "divisao impossivel" << endl;
		else
			cout << setprecision(1) << fixed << (double) x/y << endl;
	}

    return 0;
}
