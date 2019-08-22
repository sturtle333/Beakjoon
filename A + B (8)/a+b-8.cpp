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
	
	for(int i=0;i<T;i++){
		cout<<"Case #"<<i+1<<": "<<a[i]<<" + "<<b[i]<<" = "<<a[i]+b[i]<<"\n";
	}
	return 0;	
}
