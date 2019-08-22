#include <iostream>

using namespace std;

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N,count=1;
	cin>>N;
	int M = N;
	if(M<10) {
		if(M==0) {
			cout<<"1";
			return 0;
		}
		M*=10;	
	}
	while(N!=M || count == 1){
		int temp = M/10 + M%10;
		M = M%10*10 + temp%10;
		if(N==M) continue;
		count++;
	}
	cout<<count;
	return 0;	
}
