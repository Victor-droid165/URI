/*
  @autor: Victor E. B. Rodrigues;
  @data: 05/07/2021;
  @nome: Resto da Divisão;
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
		T aux= comeco, aux2=fim;
		if(fim < comeco){
			aux = fim;
			aux2 = comeco;
		}
		this->comeco = aux;
		this->fim = aux2;
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
	
	int x, y, soma = 0;
	cin >> x >> y;
	IntervaloFechado<int> intervalo(x,y);
	
	for(int i = intervalo.getComeco()+1; i < intervalo.getFim(); i++){
		if(i%5 == 2 || i%5 == 3)
			cout << i << endl;
	}
	return 0;
}
