#include<iostream>
#define C1 123456
#define C2 246912

using namespace std;

int main(){
	bool arr[C2+1];
	arr[1] = false;
	for(long long i=2; i<=C2; i++){
		arr[i] = true;
	}
	for(long long i=2; i<=C1; i++){
		for(long long j = 2; i*j <= C2; j++){
			arr[i*j] = false;
		}
	}
	long long int n = 1;
	while(1){
		long long int cnt = 0;
		cin >> n;
		if(n==0) break;
		for(long long i = n+1; i <= 2*n; i++) if(arr[i]==true) cnt += 1;
		cout << cnt << '\n';
	}
	return 0;
}