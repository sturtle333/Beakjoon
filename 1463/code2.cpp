#include <iostream>
#include <cmath>

using namespace std;

int arr[1000001];

int f( int x ) {
	if ( x == 1 ) return 0;
	if ( arr[x] != 0 ) return arr[x];

	int temp = 99999;
	if ( x % 3 == 0 ) {
		temp = min ( temp, f ( x / 3 ) );
	}
	if ( x % 2 == 0 ) {
		temp = min ( temp, f ( x / 2 ) );
	}
	if ( x % 6 != 0 ) {
		temp = min ( temp, f ( x - 1 ) );
	}

	return arr[x] = temp + 1;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	for (int i = 0; i < 1000001; i++) {
		arr[i] = 0;
	}
	
	int N;

	cin >> N;	

	cout << f ( N );

	return 0;
}