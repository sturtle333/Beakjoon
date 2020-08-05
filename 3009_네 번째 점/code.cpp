#include<iostream>
using namespace std;
int main(){
	int x[3], y[3], tp[2];
	for(int i=0; i<3; i++){
		cin >> x[i] >> y[i];
	}
	if	(x[0]==x[1]) 	tp[0] = x[2];
	else if	(x[0]==x[2]) 	tp[0] = x[1];
	else			tp[0] = x[0];

	if	(y[0]==y[1]) 	tp[1] = y[2];
	else if	(y[0]==y[2]) 	tp[1] = y[1];
	else			tp[1] = y[0];	

	cout <<	tp[0] << ' ' <<	tp[1];

	return 0;
}