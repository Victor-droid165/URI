/*
  @autor: Victor E. B. Rodrigues;
  @data: 05/07/2021;
  @nome: Sequência Lógica;
*/

#include <bits/stdc++.h>

using namespace std;


int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int N;
	int arr[3] = {0,0,0};
	cin >> N;
	
	for(int i =0; i < N; i++)
		arr[0]++;
		arr[1]=arr[0]*arr[0];
		arr[2] = arr[1]*arr[0];
		cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
		cout << arr[0] << " " << ++arr[1] << " " << ++arr[2] << endl;
	}
	
	return 0;
}
