#include <iostream>

using namespace std;

int main() {
	int i, j;
	float s=0;
	cout.precision(2);
	
	for (i=1, j=1; j<=39; i*=2, j+=2)
		s += j/(float)i;
	
	cout << fixed << s << endl;
	return 0;
}
