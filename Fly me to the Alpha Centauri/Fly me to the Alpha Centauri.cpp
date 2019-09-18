#include<iostream>
#include<vector>
#define iny long long int

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	iny T;
	cin >> T;
	
	vector<iny> v;
	vector<iny> result;
	
	for(iny i=0;i<T;i++){
		iny A, B;
		cin >> A >> B;
		
		v.push_back(B-A);
	}
	
	for(int i=0,pp=(int)v.size();i<pp;i++){
		iny length = 1;
		iny temp = v[i];
		iny count = 1;
		while(1){
			if(temp<=length){
				result.push_back(count);
				break;
			}
			temp-=length;
			count++;
			if(temp<=length){
				result.push_back(count);
				break;
			}
			temp-=length;
			count++;
			length++;
		}
	}
	
	for(int i=0,pp=(int)result.size();i<pp;i++){
		cout << result[i] << '\n';
	}
	return 0;
}
