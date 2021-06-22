/*
  @autor: Victor E. B. Rodrigues;
  @data: 22/06/2021;
  @nome: Média 1;
*/

#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
    
	double A,B;
    const double p1 = 3.5, p2 = 7.5;
    cin >>A>>B;
    cout << setprecision(5) << fixed <<"MEDIA = "<<(A*p1+B*p2)/(p1+p2)<<endl;
    
    return 0;
}
