#include<iostream>
using namespace std;
int main(){
	int inp, sum = 0, cnt=0;
	while(cnt < 5){
		cin >> inp;
		sum += inp < 40 ? 40 : inp;
		cnt+=1;
	}
	cout << sum/5;
	return 0;
}