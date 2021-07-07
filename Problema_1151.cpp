/*
  @autor: Victor E. B. Rodrigues;
  @data: 05/07/2021;
  @nome: Fibonacci Fácil;
*/

#include <bits/stdc++.h>
#include <map>

using namespace std;

map<int, int> memo = {{}};

int fib(int num){
    if (memo.count(num))
		return memo[num];
	if (num <= 2){
		memo[num] = num-1;
		return memo[num];
	}
    memo[num] = fib(num-1) + fib(num-2);
    return memo[num];
}

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	int x;
	cin >> x;
	int fibonacci = fib(x);
	for(int i = 1; i <=x; i++)
		(i%x) ? cout << memo[i] << " " : cout << memo[i] << endl;
	
	return 0;
}
