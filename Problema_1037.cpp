/*
  @autor: Victor E. B. Rodrigues;
  @data: 22/06/2021;
  @nome: Intervalo;
*/

#include <bits/stdc++.h>
#include <fstream>

using namespace std;

class Intervalo{
private:
	int comeco;
	int fim;
	
public:
	
	Intervalo(){}
	
	Intervalo(int comeco, int fim){
		this->comeco = comeco;
		this->fim = fim;
	}
	
	int getComeco(){
		return comeco;
	}
	
	int getFim(){
		return fim;
	}
};
class IntervaloFechado:public Intervalo{
public:	
	IntervaloFechado(int x, int y) : Intervalo(x,y){}
	
	bool contains(double& num){
		if(num >= getComeco() && num <= getFim())
			return true;
		return false;
	}
	
	friend ostream& operator<<(ostream &os, IntervaloFechado& intf){
		os << "[" << intf.getComeco() << "," << intf.getFim() << "]";	
		return os;
	}
};
	
class IntervaloAberto:public Intervalo{
public:	
	IntervaloAberto(int x, int y) : Intervalo(x,y){}

	bool contains(double& num){
		if(num > getComeco() && num < getFim())
			return true;
		return false;
	}
	
	friend ostream& operator <<(ostream &os, IntervaloAberto& ia){
		os << "(" << ia.getComeco() << "," << ia.getFim() << ")";
		return os;
	}
};
	
class IntervaloMisto:public Intervalo{
private:
	bool direito;
public:	
	IntervaloMisto(int x, int y, bool direito) : Intervalo(x,y){
		this->direito = direito;
	}

	bool contains(double& num){
		if(direito){
			if(num >= getComeco() && num < getFim())
				return true;
		}
		else
			if(num > getComeco() && num <= getFim())
				return true;
		return false;
	}
	
	friend ostream& operator <<(ostream &os, IntervaloMisto& im){
		if(im.direito)
			os << "[" << im.getComeco() << "," << im.getFim() << ")";
		os << "(" << im.getComeco() << "," << im.getFim() << "]";
		return(os);
	}
};

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	IntervaloFechado int1(0,25);
	IntervaloMisto int2(25, 50, false);
	IntervaloMisto int3(50, 75, false);
	IntervaloMisto int4(75, 100, false);
	
	double num;
	cin >> num;
    
	if(num < 0 || num > 100)
		cout << "Fora de intervalo" << endl;
	else{
		cout << "Intervalo ";
	    if (int1.contains(num))
	    	cout << int1 << endl;
	    else if(int2.contains(num))
	    	cout << int2 << endl;
	    else if(int3.contains(num))
	    	cout << int3 << endl;
	    else if(int4.contains(num))
	    	cout << int4 << endl;	
	}
    
    
    return 0;
}
