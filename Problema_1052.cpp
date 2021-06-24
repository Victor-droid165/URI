/*
  @autor: Victor E. B. Rodrigues;
  @data: 23/06/2021;
  @nome: Mês;
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);

	struct tm date = { 0 };

	cin >> date.tm_mon;
	date.tm_mon--;

	char meses[20];

	strftime(meses, sizeof(meses), "%B", &date);
	cout << meses << endl;
		
    return 0;
}
