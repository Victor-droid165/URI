/*
  @autor: Victor E. B. Rodrigues;
  @data: 03/07/2021;
  @nome: Soma de Ímpares Consecutivos II;
*/

#include <bits/stdc++.h>

using namespace std;

template<class T>
class Intervalo{
private:
	T comeco;
	T fim;
	
public:
	
	Intervalo(){}
	
	Intervalo(T comeco, T fim){
		this->comeco = comeco;
		this->fim = fim;
	}
	
	T getComeco(){
		return comeco;
	}
	
	T getFim(){
		return fim;
	}
};

template<class T>
class IntervaloAberto:public Intervalo<T>{
public:	
	IntervaloAberto<T>(T x, T y) : Intervalo<T>(x,y){}
	
	bool contains(T &num){
		if(num > this->getComeco() && num < this->getFim())
			return true;
		return false;
	}
	
};

template<typename T>
T sumOdds(IntervaloAberto<T> &intervalo){
	int menor, maior, soma = 0;
	if (intervalo.getComeco() > intervalo.getFim()){
		maior = intervalo.getComeco();
		menor = intervalo.getFim();
	} else{
		menor = intervalo.getComeco();
		maior = intervalo.getFim();
	}
	menor++;
	for(menor; menor < maior; menor++)
		if(menor % 2 != 0)
			soma+=menor;
	return soma;
}

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);

	int N, num1, num2;
	cin >> N;

	for (int i = 0; i < N; i++){
		cin >> num1 >> num2;
		IntervaloAberto<int> intervalo(num1, num2);
		cout << sumOdds(intervalo) << endl;	
	}

	return 0;
}
