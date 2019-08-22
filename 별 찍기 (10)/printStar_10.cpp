#include <iostream>
#include <cmath>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;
	
	int tempN = N;
	char table[N][N];
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			table[i][j] = '*';
		}
	}
	
	while(N != 1){
		N=N/3;
		for(int a=N;a<tempN;a+=(3*N)){
			for(int b=N;b<tempN;b+=(3*N)){
				for(int i=a;i<a+N;i++){
					for(int j=b;j<b+N;j++){
						table[i][j] = ' ';
					}
				}	
			}
		}
	}
	
	
	for(int i=0;i<tempN;i++){
		for(int j=0;j<tempN;j++){
			cout << table[i][j];
		}
		cout << '\n';
	}
	
	return 0;
}
