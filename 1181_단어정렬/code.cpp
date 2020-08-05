#include<iostream>
#include<algorithm>
#include<list>
#include<string>

using namespace std;

list < string > lt;

void print ( string s ) {
	cout << s << '\n';
}

bool Compare( string s1, string s2 ) {
	if ( s1.length() == s2.length() ) {
		if ( s1 == s2 ) {
			return false;
		}
		else	return s1 < s2;	
	}
	else 		return s1.length() < s2.length();
}


int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;

	for ( int a = 0; a < t; a++ ) {
		string s;
		cin >> s;
		lt.push_back( string(s) );
	}

	lt.sort ( Compare );
	lt.unique();

	for ( list< string >::iterator iter = lt.begin(); iter != lt.end(); iter++ ) {
		print( *iter );
	}

	return 0;
}