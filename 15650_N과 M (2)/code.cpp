#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class number {
	public :
		const int value;
		bool isConn;

		number(int n):value(n),isConn(false) {}
};

class list {
	public :
		number *n;

		list (number* nn) {
			connect( nn );
		}

		int value() {
			if ( n == nullptr ) return -1;

			return this->n->value;
		}

		int connect ( number *nn ) {
			if ( nn->isConn == true ) return -1;

			this->n = nn;
			this->n->isConn = true;

			return 1;
		}

		int disconnect () {
			if (n == nullptr) return -1;

			n->isConn = false;
			n = nullptr;

			return 1;
		}

};

number* findBlank ( vector < number > &v, int index ) {
	for (int a = index, pp = (int)v.size(); a < pp; a++ ) {
		if ( v[ a ].isConn == false ) return &v[ a ];
	}
	return nullptr;
}

void print ( vector < list > &lt ) {
	for ( int a = 0, pp = (int)lt.size(); a < pp; a++ ){
		cout << lt [ a ].value() << ' ';
	}
	cout << '\n';
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M; cin >> N >> M;

	vector < number > num;
	num.reserve( N );

	for (int a = 1; a <= N; a++) {
		num.push_back ( number ( a ) );
	}

	vector < list > lt;
	lt.reserve( M );

	for (int a = 0; a < M; a++ ) {
		lt.push_back( &num[ a ] );
	}

	print ( lt );

	int index = M - 1;
	int tmpValue;
	
	while ( index != -1 ) {
		tmpValue = lt [ index ].value();
		while ( tmpValue != N ) {
			if( lt [ index ] .disconnect() == -1){ cout << "disconnecting error" << '\n'; return -1; }

			number *tmp = findBlank ( num, tmpValue );
			if ( tmp != nullptr ) {
				lt[ index ].connect ( tmp );
			}
			else {
				index -= 1;
				tmpValue = lt [ index ].value();
				continue;
			}

			if ( index != M - 1 ) {
				index += 1;
				number *tmp = findBlank ( num, tmpValue );
				if ( tmp != nullptr ) {
					lt[ index ].connect ( tmp );
				}

				else {
					index -= 1;
					tmpValue = lt [ index ].value();
				}
				continue;
			}

			print ( lt );
			tmpValue = lt [ index ].value();
		}
		lt [ index ] .disconnect();
		index -= 1;
	}

	return 0;
}