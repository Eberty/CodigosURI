#include <iostream>

using namespace std;

int main() {
	int t, b, a1, d1, l1, a2, d2, l2;
	double vg1, vg2;
	
	cin >> t;
	for (int i=0; i<t; i++){
		cin >> b >> a1 >> d1 >> l1 >> a2 >> d2 >> l2;
		
		if (l1&1)
			vg1 = (a1+d1)/2.0;
		else
			vg1 = ((a1+d1)/2.0) + b;
		
				
		if (l2&1)
			vg2 = (a2+d2)/2.0;
		else
			vg2 = ((a2+d2)/2.0) + b;
			
			
		if (vg1 > vg2)
			cout << "Dabriel" << endl;
		else if (vg2 > vg1)
			cout << "Guarte" << endl;
		else
			cout << "Empate" << endl;
	}
	
	
	return 0;
}
