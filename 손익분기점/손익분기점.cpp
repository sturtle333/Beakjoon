#include<iostream>
#include<vector>
using namespace std;

#define iny long long int

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	iny A, B, C, result = 0;
	cin >> A >> B >> C;
	
	if(C-B<=0){
		result = -1;
	}
	else {
		iny temp = A/(C-B);
		result = temp + 1;
	}
	
	cout << result;
	return 0;
}
