#include<iostream>
#include<algorithm>
#include<vector>

#define ull unsigned long long int
#define uint unsigned int
#define llint long long int

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int number; cin >> number;

	vector<int> v;
	v.reserve(15);
	int tmp = number;
	while (tmp != 0) {
		v.push_back(tmp % 10);
		tmp /= 10;
	}
	
	sort( v.begin(), v.end(), greater<int>() );

	for (int x = 0, pp = (int)v.size() ; x < pp; x++){
		cout << v[x];
	}

	return 0;
}