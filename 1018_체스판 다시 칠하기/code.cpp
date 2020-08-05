#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>

using namespace std;

string broad1 [ 8 ] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};

int Compare1 ( vector < string >& v, int x, int y ) {
	int cnt = 0;
	for ( int i = 0; i < 8; i++ ) {
		for ( int j = 0; j < 8; j++ ) {
			if ( broad1 [ i ] [ j ] != v [ i + y ] [ j + x ]	) {
				cnt++;
			}
		}
	}
	return cnt;
}

string broad2 [ 8 ] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
};

int Compare2 ( vector < string >& v, int x, int y ) {
	int cnt = 0;
	for ( int i = 0; i < 8; i++ ) {
		for ( int j = 0; j < 8; j++ ) {
			if ( broad2 [ i ] [ j ] != v [ i + y ] [ j + x ]	) {
				cnt++;
			}
		}
	}
	return cnt;
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int x, y; cin >> y >> x;

	vector< string > broad;
	broad.reserve( y );

	for ( int i = 0; i < y; i++ ){
		string s; cin >> s;
		broad.push_back ( string ( s ) );
	}

	int result = 50000;
	for ( int i = 0; i < y - 7; i++ ) {
		for ( int j = 0; j < x - 7; j++ ){
			result = min ( result, min ( Compare1 ( broad, j, i ), Compare2 ( broad, j ,i ) ) );
		}
	}

	cout << result;

	return 0;
}