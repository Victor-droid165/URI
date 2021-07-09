/*
  @autor: Victor E. B. Rodrigues;
  @data: 09/07/2021;
  @nome: Número Primo;
*/

#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int primo(long long num){
	if(num < 2)
		return -1;
    else if(num == 2){
        return 0;
    
    }else if(num % 2 == 0){
      return 2;
      
    }else{
      for (int i = 3; i <= sqrt(num); i += 2)
          if (num % i == 0)
              return i;
      return 0;
    }

}

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int N, X;
	cin >> N;
	
	while(N--){
		cin >> X;
		(primo(X) == 0) ? cout << X << " eh primo" << endl : cout << X << " nao eh primo" << endl;
	}

	return 0;
}
