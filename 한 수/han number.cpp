#include <iostream>
#include <vector>

#define u64 long long

using namespace std;

void f(int *arr, int num) {
	int temp = 100;
	for(int i=0;i<3;i++) {
		arr[i] = num/temp%10;
		temp /= 10;
	}
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int X, result = 1, arr[3];
	cin>>X;
	
	if(X<=99) result = X;
	else if(X==1000) result = 144;
	else {
		result = 99;
		for(int i=100;i<=X;i++) {
			f(arr, i);
			if(arr[2] - arr[1] == arr[1] - arr[0]) 	result++;
		}
	}
	
	cout<<result;
}
