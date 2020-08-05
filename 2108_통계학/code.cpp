#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<utility>

#define ullint unsigned long long int
#define uint unsigned int
#define llint long long int

using namespace std;

class num {
	public:
		int idx;
		int val;

		num (int i, int v) : idx(i), val(v){};

		bool operator<(num n) const {
			if ( this->val == n.val ) 	return this->idx < n.idx;
			else 			return this->val > n.val;
		}
};

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	int arr[t];

	vector<num> cnt;
	cnt.reserve(8001);

	for( int x = 0; x < 8001; x++ ) cnt.push_back( num ( x - 4000, 0) );

	for( int x = 0; x<t; x++ ) {
		cin >> arr[x];
		cnt[ arr[x] + 4000 ].val += 1;
	}

	sort(arr, arr+t);

	int sum = 0;
	for(int x = 0; x < t; x++) sum += arr[x];
	cout << round( (float)sum / t ) << '\n';

	if (t % 2 == 0) {
		cout << round ( (arr[ t/2 - 1 ] + arr[ t/2 ]) / 2 ) << '\n';
	}
	else {
		cout << arr [ t / 2 ] << '\n';
	}

	sort ( cnt.begin(), cnt.end());
 
	int y = 0;
	if ( cnt [ y ].val == cnt [ y + 1 ] .val )	cout << cnt [ y + 1 ].idx << '\n';
	else				cout << cnt [ y ].idx << '\n';

	if ( t != 1 )	cout << arr[ t -1 ] - arr [ 0 ];
	else		cout << 0;

	return 0;
}