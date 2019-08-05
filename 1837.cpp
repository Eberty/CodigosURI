#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a, b, q, r, v=0, num;
	cin >> a >> b;
	
	if (b==0)
		return 0;
	
	q = a/b;
	r =  a - b*q;
	
	if (r < 0){
		num=0;
		while (num < abs(a)){
			v++;
			num += abs(b);
		}
		if (b>0)
			q = -v;
		else
			q = v;
		r =  a - b*q;
	}
	
	cout << q << " " << r << endl;

	return 0;
}
