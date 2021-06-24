/*
  @autor: Victor E. B. Rodrigues;
  @data: 23/06/2021;
  @nome: Aumento de Salário;
*/

#include <bits/stdc++.h>
#include <iomanip>
#include <limits>

using namespace std;

class Intervalo{
private:
	double comeco;
	double fim;
	
public:
	
	Intervalo(){}
	
	Intervalo(double comeco, double fim){
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
	IntervaloFechado(double x, double y) : Intervalo(x,y){}
	
	bool contains(double& num){
		if(num >= getComeco() && num <= getFim())
			return true;
		return false;
	}
};
	
class IntervaloAberto:public Intervalo{

public:	
	IntervaloAberto(double x, double y) : Intervalo(x,y){}

	bool contains(double& num){
		if(num > getComeco() && num < getFim())
			return true;
		return false;
	}
	
};
	
class IntervaloMisto:public Intervalo{

private:
	bool direito;
public:	
	IntervaloMisto(double x, double y, bool direito) : Intervalo(x,y){
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
};

double reajuste(double salario){
	IntervaloFechado i1(0,400);
	IntervaloMisto i2(400, 800, false);
	IntervaloMisto i3(800, 1200, false);
	IntervaloMisto i4(1200, 2000, false);
	IntervaloMisto i5(2000, numeric_limits<double>::infinity(), false);
	
	if(i1.contains(salario))
		return salario+0.15*salario;
	if(i2.contains(salario))
		return salario+0.12*salario;
	if(i3.contains(salario))
		return salario+0.1*salario;
	if(i4.contains(salario))
		return salario+0.07*salario;
	if(i5.contains(salario))
		return salario+0.04*salario;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	double salario;
	cin >> salario;
		
	double salarioReajustado = reajuste(salario);
	cout << setprecision(2) << fixed;
	cout << "Novo salario: " << salarioReajustado << endl;
	cout << "Reajuste ganho: " << salarioReajustado - salario << endl;
	cout << setprecision(0) << fixed;
	cout << "Em percentual: " << ((salarioReajustado/salario-1)*100)<< " %" <<  endl;
	
    return 0;
}
