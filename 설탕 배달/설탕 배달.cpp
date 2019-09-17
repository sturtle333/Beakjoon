#include<iostream>
#include<vector>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, result=0;
	cin >> N;
	
	while(N > 0){
		if(N%5 == 0) {
			N-=5;
			result+=1;
		}
		else if(N%3 == 0) {
			N-=3;
			result+=1;
		}
		else if(N > 5) {
			N-=5;
			result+=1;
		}
		else{
			result = -1;
			break;
		}
	}
	
	cout << result;
	return 0;
}
