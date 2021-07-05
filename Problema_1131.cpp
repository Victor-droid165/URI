/*
  @autor: Victor E. B. Rodrigues;
  @data: 05/07/2021;
  @nome: Grenais;
*/

#include <bits/stdc++.h>
#include <map>
#include <vector>
#include <string>

using namespace std;

int soma(int array[], const int tamanho){
	int soma = 0;
	for(int i = 0; i < tamanho; i++)
		soma += array[i];
	return soma;
}

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int golInter, golGremio, arr[3] = {0,0,0};
	vector<int> golsInter, golsGremio;
	map< string, vector<int> > timeGols = {
		{"inter", golsInter},
		{"gremio", golsGremio}
	};
	int continua = 1;
	
	while(continua != 2){
		cin >> golInter >> golGremio;
		timeGols["inter"].push_back(golInter);
		timeGols["gremio"].push_back(golGremio);
		if(timeGols["inter"].at(timeGols["inter"].size()-1) > timeGols["gremio"].at(timeGols["gremio"].size()-1))
			arr[0]++;
		else if(timeGols["inter"].at(timeGols["inter"].size()-1) < timeGols["gremio"].at(timeGols["gremio"].size()-1))
			arr[1]++;
		else
			arr[2]++;
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> continua;
	}
	
	cout << soma(arr, 3) << " grenais" << endl
		<< "Inter:" << arr[0] << endl
		<< "Gremio:" << arr[1] << endl
		<< "Empates:" << arr[2] << endl
		<< ((arr[0] > arr[1]) ? "Inter venceu mais" : (arr[0] < arr[1]) ? "Gremio venceu mais" : "Nao houve vencedor") << endl;
	
	return 0;
}
