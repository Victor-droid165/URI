/*
  @autor: Victor E. B. Rodrigues;
  @data: 03/07/2021;
  @nome: Sequencia IJ 4;
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	double j[] = {1,2,3};
	int tamanho = sizeof(j)/sizeof(double);
	
	for(double i=0; i<=2; i+=0.2, j[0] += 0.2, j[1] += 0.2, j[2] += 0.2)
		for(int k=0; k < tamanho; k++)
			cout << "I=" << i << " J=" << j[k] << endl;
	
	return 0;
}
