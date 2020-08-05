#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class point {
	public :
		int x, y;
		point(int x_, int y_):x(x_),y(y_) {}

		bool operator<(point p) {
			if (this->x == p.x)	return this->y < p.y;
			else		return this->x < p.x;
		}
};

void print ( point p ) {
	cout << p.x << ' ' << p.y << '\n';
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;

	vector<point> v;
	v.reserve(t);

	for ( int a = 0; a < t; a++ ){
		int x, y;
		cin >> x >> y;

		v.push_back( point( x, y ) );
	}

	sort ( v.begin(), v.end() );

	for ( int a = 0; a < t; a++ ) {
		print(v[a]);
	}

	return 0;
}