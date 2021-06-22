/*
  @autor: Victor E. B. Rodrigues;
  @data: 22/06/2021;
  @nome: Média 2;
*/

#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);

    double A,B,C;
    const int p1 = 2, p2 = 3, p3 = 5;
    cin >>A>>B>>C;
    cout << setprecision(1) << fixed <<"MEDIA = "<<(A*p1+B*p2+C*p3)/(p1+p2+p3)<<endl;
    
    return 0;
}
