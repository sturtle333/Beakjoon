#include<iostream>
#define iny long long int

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	iny N;
	cin >> N;
	
	iny i = 1;
	while((i*(i+1))/2 < N){
		i++;
	}
	iny temp = N - ((i*(i+1))/2 - i);
	
	if(i%2==0){
		cout << temp << '/' << i-temp+1;	
	} 
	else {
		cout << i-temp+1 << '/' << temp;
	}
	return 0;
}
