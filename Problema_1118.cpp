/*
  @autor: Victor E. B. Rodrigues;
  @data: 05/07/2021;
  @nome: Várias Notas Com Validação;
*/

#include <bits/stdc++.h>
#include <iomanip>

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
	
	int cont, x=1;
	double nota, media;
	IntervaloFechado<double> intervalo(0,10);
	
	while(x!=2){
		if(x==1){
			cont = 2;
			media = 0;
		}
		while(cont){
			cin >> nota;
			if (intervalo.contains(nota)){
				cont--;
				media+=nota;
				if(!cont)
					cout << "media = " << setprecision(2) << fixed << media/2 << endl;
			} else
				cout << "nota invalida" << endl;
		}
		cout << "novo calculo (1-sim 2-nao)" << endl;
		cin >> x;
	}
	
	return 0;
}
