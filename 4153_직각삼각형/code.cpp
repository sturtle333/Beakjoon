#include<iostream>
using namespace std;
int main(){
	while(1){
		int arr[3];
		cin >> arr[0] >> arr[1] >> arr[2];

		if(arr[0] + arr[1] + arr[2] == 0) break;

		int sum = 0, tmp = 0;
		for(int i=0, m=0; i<3; i++){
			if(m<arr[i]) {tmp = i; m=arr[i];}
		}
		for(int i=0; i<3; i++){
			if(i==tmp) continue;
			sum += arr[i] * arr[i];
		}
		if(sum == arr[tmp] * arr[tmp]) 	cout << "right" << '\n';
		else			cout << "wrong" << '\n';	
	}
	return 0;
}