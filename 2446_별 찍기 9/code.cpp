#include<iostream>
using namespace std;
int main(){
	int N; cin >> N;
	for(int i=0; i<N; i++){
		for(int j=0; j<2*(N-1)+1-i; j++){
			if(j<i) 	cout << ' ';
			else	cout << '*';
		}
		cout << '\n';
	}
	for(int i=N-2; i>=0; i--){
		for(int j=0; j<2*(N-1)+1-i; j++){
			if(j<i) 	cout << ' ';
			else	cout << '*';
		}
		cout << '\n';
	}
	return 0;
}