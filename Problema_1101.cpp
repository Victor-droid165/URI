/*
  @autor: Victor E. B. Rodrigues;
  @data: 04/07/2021;
  @nome: Sequência de Números e Soma;
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
class IntervaloFechado:public Intervalo<T>{
public:	
	IntervaloFechado<T>(T x, T y) : Intervalo<T>(x,y){}
	
	bool contains(T &num){
		if(num >= this->getComeco() && num <= this->getFim())
			return true;
		return false;
	}
	
};

template<typename T>
T sum(IntervaloFechado<T> &intervalo){
	int menor, maior, soma = 0;
	if (intervalo.getComeco() > intervalo.getFim()){
		maior = intervalo.getComeco();
		menor = intervalo.getFim();
	} else{
		menor = intervalo.getComeco();
		maior = intervalo.getFim();
	}
	for(menor; menor <= maior; menor++){
		cout << menor << " ";
		soma+=menor;
	}
	return soma;
}

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);

	int num1, num2;
	
	while(cin >> num1 >> num2){
		if (num1 <=0 || num2 <=0)
			break;
		IntervaloFechado<int> intervalo(num1, num2);
		int soma = sum(intervalo);
		cout << "Sum=" <<  soma << endl;	
	}

	return 0;
}
