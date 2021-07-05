/*
  @autor: Victor E. B. Rodrigues;
  @data: 05/07/2021;
  @nome: Validação de Nota;
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

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int cont = 2;
	double nota, media=0;
	IntervaloFechado<double> intervalo(0,10);
	
	while(cont){
		cin >> nota;
		if (intervalo.contains(nota)){
			cont--;
			media+=nota;
		} else
			cout << "nota invalida" << endl;
	}
	cout << "media = " << setprecision(2) << fixed << media/2 << endl;
	return 0;
}
