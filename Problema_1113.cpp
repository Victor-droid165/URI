/*
  @autor: Victor E. B. Rodrigues;
  @data: 04/07/2021;
  @nome: Crescente e Decrescente;
*/
#include <bits/stdc++.h>
#include <string>
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
string ordem(IntervaloFechado<T> &intervalo){
	string ord = (intervalo.getComeco() > intervalo.getFim()) ? "Decrescente" : "Crescente";
	return ord;
}

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);

	int num1, num2;
	
	while(cin >> num1 >> num2){
		if (num1 == num2)
			break;
		IntervaloFechado<int> intervalo(num1, num2);
		cout << ordem(intervalo) << endl;
	}

	return 0;
}
