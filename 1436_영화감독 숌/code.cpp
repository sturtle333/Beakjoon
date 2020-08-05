#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void clearVector ( vector < int > &v ) {
	vector < int > tmp;
	v.swap(tmp);
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N; cin >> N;	

	vector < int > v (10, 0);

	int cnt = 0;
	int number = 666;
	while ( cnt != N ) {
		int idx = 0;
		int tmp = number;
		while (tmp != 0) {
			v[ idx++ ] = tmp % 10;
			tmp /= 10;
		}

/*		for ( int a = 0, pp = (int)v.size(); a < pp; a++) {
			cout << v[a];
		}cout << '\n';*/
		

		for ( int a = 0, pp = (int)v.size() - 2; a < pp; a++) {
			if ( v[ a ] == 6 && v[ a+1 ] == 6 && v[ a+2 ] == 6 ) {
				cnt++;
				break;
			}
		}
		number++;
	}
	
	cout << number - 1; 

	return 0;
}