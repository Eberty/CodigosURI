#include <iostream>

using namespace std;

int main() {
	float s=0;
	cout.precision(2);
	
	for (int i=1; i<=100; i++)
		s += 1.0/i;
	
	cout << fixed << s << endl;
	return 0;
}
