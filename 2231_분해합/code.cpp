#include<iostream>

using namespace std;

int N; 
int calc(int n);

int main(){
	cin >> N;
	int res = 0;

	for(int i=1 ; i<=N; i++) if (calc(i)) {res = i; break;}

	cout << res;

	return 0;
}

int calc(int n){
	int tmp = 1, res = 0;
	while(n / tmp > 0) {res += (n / tmp) % 10; tmp*=10;}
	if (res+n==N) 	return 1;
	else		return 0;
}