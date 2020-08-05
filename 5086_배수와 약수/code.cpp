#include<iostream>
#define ull unsigned long long int
#define uint unsigned int

using namespace std;

int main(void){
	cin.tie(nullptr);

	int n, m;

	for(;;){
		cin >> n >> m;

		if (n == 0) break;

		if (m % n == 0) cout << "factor" << "\n";

		else if (n % m == 0) cout << "multiple" << "\n";

		else cout << "neither" << "\n";
 	}
	
	return 0;
}