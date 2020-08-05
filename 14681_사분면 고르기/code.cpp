#include<iostream>
using namespace std;
int main(){
	int N, M, rlt; cin >> N >> M;
	if(N>0){ if(M>0){rlt = 1;} else {rlt = 4;}}
	else{ if(M>0){rlt = 2;} else {rlt = 3;}}
	cout << rlt;
	return 0;
}