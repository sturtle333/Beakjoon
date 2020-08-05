#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

class User {
	public:
		int age;
		string name;
		int index;

		User(int arg1, string arg2, int arg3):age( arg1 ), name( arg2 ), index( arg3 ) {}

		bool operator<(User u) {
			if ( this->age == u.age ) 	return this->index < u.index;
			else			return this->age < u.age;
		}
};

void print ( User u ) {
	cout << u.age << ' ' << u.name << '\n';
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	vector< User > v;
	v.reserve( t );

	for ( int a = 0; a < t; a++ ) {
		int age;
		string name;

		cin >> age >> name;

		v.push_back( User( age, name, a ) );
	}

	sort ( v.begin(), v.end() );

	for ( int a = 0; a < t; a++ ) {
		print ( v[ a ] );
	}

	return 0;
}