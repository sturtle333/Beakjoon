#include<iostream>
#define iny long long int

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	iny N, result=1;
	cin >> N;
	
	iny length = 1;
	while(length) {
		iny temp = 3*(length * length) - (3*length) + 1;
		if(N > temp) {
			result++;
		}
		else {
			break;
		}
		length++;
	}
	
	cout << result;
	return 0;
}
