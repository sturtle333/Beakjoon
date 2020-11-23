#include <iostream>
#include <vector>

using namespace std;
int cnt = 1;
bool done = false;
vector<int> v;
vector<int> u;

void f( ) {
	for (int i = 0; i < (int)v.size(); i++) {
		if ( v[i] % 3 == 0 ){
			if ( v[i] / 3 == 1 ) {
				cout << cnt;
				done = true;
				return;
			}
			else {
				u.push_back( v[i] / 3 );
			}
		}
		if ( v[i] % 2 == 0 ){
			if ( v[i] / 2 == 1 ) {
				cout << cnt;
				done = true;
				return;
			}
			else {
				u.push_back( v[i] / 2 );
			}
		}	
		if ( v[i] - 1 == 1 ) {
			cout << cnt;
			done = true;
			return;
		}
		else {
			u.push_back( v[i] - 1 );
		}
	}
	//cout << v.capacity() << '\t' << u.capacity() << '\n';

	v.swap(u);
	u.clear();
	cnt +=1;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int N;
	cin >> N;		

	v.reserve(5000000);
	u.reserve(5000000);

	v.push_back(N);
	while (done == false) f( );

	return 0;
}