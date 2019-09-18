#include<iostream>
#include<cmath>
#define iny double
using namespace std;
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	iny A, B, V;
	cin >> A >> B >> V; V-=A;
	iny temp = A - B;
	long long int result = (long long int)ceil(V/temp)+1;
	cout << result;
	return 0;
}
