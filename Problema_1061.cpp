/*
  @autor: Victor E. B. Rodrigues;
  @data: 23/06/2021;
  @nome: Tempo de um Evento;
*/

#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

template<class T>
struct Vetor{
	vector<T> vetor;

	Vetor<T>& operator-(const Vetor<T> &vetor){
		int size = this->vetor.size();
		for(int i = 0; i < size; i++)
			this->vetor[i] -= vetor.vetor[i];
		return(*this);
	}
};

vector<string> split(const string &str, const string &delimitador)
{   
	vector<string> vet;
	int comeco = 0;
    int fim = str.find(delimitador);
    while (fim != -1) {
    	vet.push_back(str.substr(comeco, fim - comeco));
        comeco = fim + delimitador.size();
        fim = str.find(delimitador, comeco);
    }
    vet.push_back(str.substr(comeco, fim - comeco));
	
	return vet;
}

vector<int> toIntVector(vector<string> vet){
	vector<string>::iterator it = vet.begin();
	vector<int> vetInteiro;
	while(it != vet.end()){
		int num = 0;
		for(char i : *it)
			num+= i-'0';
		vetInteiro.push_back(num);
		it++;
	}
	return vetInteiro;
}

void calculaTempoEvento(int diaInicial, int diaFinal, Vetor<int> &horarioInicial, Vetor<int> &horarioFinal, int &dias, Vetor<int> &horario){
	dias = diaFinal - diaInicial;
	horario = horarioFinal - horarioInicial;
	vector<int>::reverse_iterator it = horario.vetor.rbegin();
	while(it != horario.vetor.rend()){
		if(it+1 == horario.vetor.rend()){
			if(*it < 0){
				dias--;
				*it += 24;
			}
		}
		else if(*it < 0){
			*(it+1) -=1;
			*it += 60;
		}		
		it++;
	}
}

void printaTempoEvento(int &dias, Vetor<int> &horario){
	string arr[4] = {" dia(s)", " hora(s)", " minuto(s)", " segundo(s)"};
	int cont = 0;
	cout << dias << *(arr+cont++) << endl;
	for(int i : horario.vetor)
		cout << to_string(i) << *(arr+cont++) << endl;
}

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	string dia1, h1, dia2, h2;
	getline(cin, dia1);
	getline(cin, h1);
	getline(cin, dia2);
	getline(cin, h2);
	
	string delimitadorHorario = " : ";

	string d1 = dia1.substr(dia1.find(" "), dia1.length());
	string d2 = dia2.substr(dia2.find(" "), dia2.length());
	
	Vetor<int> horario1 = {toIntVector(split(h1, delimitadorHorario))};
	Vetor<int> horario2 = {toIntVector(split(h2, delimitadorHorario))};
	Vetor<int> horario;
	int dias;

	calculaTempoEvento(stoi(d1), stoi(d2), horario1, horario2, dias, horario);
	printaTempoEvento(dias, horario);
	
	return 0;
}
