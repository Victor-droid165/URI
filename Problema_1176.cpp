/*
  @autor: Victor E. B. Rodrigues;
  @data: 10/07/2021;
  @nome: Fibonacci em Vetor;
*/

#include <bits/stdc++.h>
#include <map>

using namespace std;

map<int, long long int> memo = {{}};

long long int fib(int num){
	if(memo[num] != 0)
		return memo[num];
	if(num < 2){
		memo[num] = num;
		return memo[num];
	}
	memo[num] = fib(num-1) + fib(num-2);
	return memo[num];
}

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	const int MAX = 60;
	memo[MAX] = fib(MAX);
	
	int N, num;
	cin >> N;
	
	// lê todos os elementos do vetor
	while(N--){
		cin >> num;
		cout << "Fib("+to_string(num)+") = " << memo[num] << endl;
	}
	return 0;
}
