#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <queue>

using namespace std;

class node {
	private:
		vector< node* > nodes;
	public:
		int number;
		bool bCheck = false;
		bool dCheck = false;

		node (int n) { this->number = n; }
		
		void connect ( node *n ) { nodes.push_back( n ); }

		node * getNode ( int n ) { return this->nodes[n]; }

		void sortNode ();

		node* bfsSelect () {
			bCheck = true;
			return this;
		}

		void bfs();
		void dfs();
};

queue<node *> q;
vector<int> b;
vector<int> d;

bool compare (node *a, node *b) {
	if (a->number > b->number) return a->number > b->number;
	else return a->number < b->number;
}

void node::bfs () {
	q.pop();
	b.push_back( this-> number );

	for (int i = 0; i < (int)this->nodes.size(); i++) {
		if (this->nodes[i]->bCheck) continue;
		q.push( this->nodes[i]->bfsSelect() );
	}

	if (q.empty()) return;
	q.front()->bfs();
}

void node::dfs () {
	if ( this->dCheck == true ) return;
	dCheck = true;
	d.push_back( this->number );

	for (int i = 0; i < (int)this->nodes.size(); i++) {
		if (this->nodes[i]->dCheck) continue;
		this->nodes[i]->dfs();
	}
}

void node::sortNode () { sort( this->nodes.begin(), this->nodes.end(), compare ); }

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	b.reserve(1000);
	d.reserve(1000);

	int n, m, pivot;

	cin >> n >> m >> pivot;

	vector <node> v;
	v.reserve (1000);

	for (int i = 0; i < n; i++ ){
		v.push_back( node(i+1) );
	}

	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;

		v[x-1].connect( &v[y - 1] );
		v[x-1].connect( &v[x - 1] );
	}

	for (int i = 0; i < n; i++ ){
		v[i].sortNode();
	}

	v[pivot - 1].dfs();
	for (int i = 0; i < (int)d.size(); i++ ){
		cout << d[i] << ' ';
	}

	cout << '\n';

	v[pivot - 1].bfsSelect();
	v[pivot - 1].bfs();
	for (int i = 0; i < (int)b.size(); i++ ){
		cout << b[i] << ' ';
	}

	return 0;
}