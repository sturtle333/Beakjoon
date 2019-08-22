#include <iostream>

using namespace std;

int main() {
	std::cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int T;
	cin>>T;
	
	int a[T],b[T];
	for(int i=0;i<T;i++){
		cin>>a[i];
		cin>>b[i];
	}
	
	for(int i=1;i<=T;i++){
		cout<<"Case #"<<i<<": "<<a[i-1]+b[i-1]<<"\n";
	}
	return 0;	
}
