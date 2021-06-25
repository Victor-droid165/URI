/*
  @autor: Victor E. B. Rodrigues;
  @data: 24/06/2021;
  @nome: Fibonacci, Quantas Chamadas?;
*/
#include <bits/stdc++.h>

using namespace std;

int num_calls = 0;

int fib(int val){
	if(val < 2)
	    return val;
	else{
		num_calls+=2;
		return fib(val-1) + fib(val-2);
	}
		
}

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int N, vet[40];
	cin >> N;
	
	
	for(int i = 0; i < N; i++){
		int val;
		cin >> val;
		*(vet+val) = fib(val);
		cout << "fib(" << val << ") = " << num_calls << " calls = " << *(vet+val) << endl;
		num_calls = 0;
	}
	
	return 0;
}
