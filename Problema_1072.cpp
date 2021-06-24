/*
  @autor: Victor E. B. Rodrigues;
  @data: 24/06/2021;
  @nome: Intervalo 2;
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
	
	int N, X, arr[2] = {0,0};
	IntervaloFechado<int> intervalo(10,20);
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> X;
		if(intervalo.contains(X))
			arr[0]++;
		else
			arr[1]++;
	}
			
	cout << arr[0] << " in\n" << arr[1] << " out" << endl;
	return 0;
}
