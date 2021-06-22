/*
  @autor: Victor E. B. Rodrigues;
  @data: 22/06/2021;
  @nome: Salário;
*/

#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

double getSalario(int& horas, double& salHora){
	return horas*salHora;
}

void printNumSal(int& num, int& horas, double& salHora){
	cout << setprecision(2) << fixed;
	cout << "NUMBER = " << num << "\nSALARY = U$ " << getSalario(horas, salHora) << endl;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);

    int num, horas;
    double salHora;
    cin >> num >> horas >> salHora;
    
    printNumSal(num, horas, salHora);
    
    return 0;
}
