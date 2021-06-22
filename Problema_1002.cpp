/*
  @autor: Victor E. B. Rodrigues;
  @data: 22/06/2021;
  @nome: Área do Círculo;
*/

#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main() {
	const double n = 3.14159;
    double r;
    cin >> r;
    cout << setprecision(4) << fixed <<  "A="<< n*(r*r)<<endl;
    
    return 0;
}
