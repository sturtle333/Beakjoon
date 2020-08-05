#include<iostream>
#include<cmath>

using namespace std;

class cycle {
	public:
		int x, y, r;
};

int main(void){
	int t;cin >> t;

	for (int i=0; i<t; i++){
		cycle c1, c2;
		cin >> c1.x >> c1.y >> c1.r >> c2.x >> c2.y >> c2.r;
	
		cycle arr[2];
		bool equl_r = false;
	
		if	(c1.r > c2.r)	{arr[0] = c1; arr[1] = c2;}
		else if	(c1.r < c2.r)	{arr[0] = c2; arr[1] = c1;}
		else			{arr[0] = c1; arr[1] = c2; equl_r = true;}
	
		if (arr[0].x == arr[1].x && arr[0].y == arr[1].y){
			if (equl_r) {cout << -1 << '\n';	continue;}
			else	{cout << 0 << '\n';		continue;}
		}
	
		int dist = pow(abs(arr[0].x - arr[1].x), 2) + pow(abs(arr[0].y - arr[1].y), 2);
		int r0 = arr[0].r;
		int r1 = arr[1].r;
	
		if (dist < pow(r0, 2))	{
			int tmp = pow(r0 - r1, 2);

			if 	(dist < tmp) 	{cout << 0 << '\n';	continue;}
			else if 	(dist == tmp)	{cout << 1 << '\n';	continue;}
			else			{cout << 2 << '\n';	continue;}
		}
		else	{
	 		int tmp = pow(r0 + r1, 2);

			if 	(dist > tmp) 	{cout << 0 << '\n';	continue;}
			else if 	(dist == tmp)	{cout << 1 << '\n';	continue;}
			else			{cout << 2 << '\n';	continue;}
		}
	}
	return 0;
}