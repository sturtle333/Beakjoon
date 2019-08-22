#include <iostream>

using namespace std;

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long a, b, c;
	cin>>a>>b>>c;
	
	int ten = 1,tentemp = 1; 
	long long x = a*b*c;
	
	while(x/tentemp) {
		ten++;
		tentemp*=10;
	}

	long long number[ten];
	tentemp /= 10;
	for(int i=0;i<ten-1;i++){
		number[i] = x/tentemp%10;
		tentemp /= 10;
	}
	for(long long i=0;i<=9;i++){
		long long temp = 0;
		for(int j=0;j<ten-1;j++){
			temp += number[j] == i? 1 : 0;
		}
		cout<<temp<<"\n";
	}

	return 0;
}
