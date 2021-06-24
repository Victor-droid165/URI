/*
  @autor: Victor E. B. Rodrigues;
  @data: 23/06/2021;
  @nome: Imposto de Renda;
*/

#include <bits/stdc++.h>
#include <iomanip>
#include <stack>

using namespace std;

double getIR(double& sal, stack<double>& pilha, stack<double>& pilha2){
	static double ir = 0;
	if(!pilha.empty()){
		if(sal > pilha.top()){
			ir+= (sal - pilha.top()) * pilha2.top();
			sal = pilha.top();
		}
		pilha.pop();
		pilha2.pop();
		getIR(sal, pilha, pilha2);
	}
	return ir;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);

	stack<double> pilha, pilhaIR;
	pilha.push(2000);
	pilha.push(3000);
	pilha.push(4500);
	
	pilhaIR.push(0.08);
	pilhaIR.push(0.18);
	pilhaIR.push(0.28);
	
	double salario;
	cin >> salario;
	
	cout << setprecision(2) << fixed;
	double impostoRenda = getIR(salario, pilha, pilhaIR);
	if(impostoRenda == 0)
		cout << "Isento" << endl;
	else
		cout << "R$ " << impostoRenda << endl;
	
    return 0;
}
