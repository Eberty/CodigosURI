#include <iostream>

using namespace std;

int main() {
	int s, t, f, h;
	cin >> s >> t >> f;
	h = s+t+f;
	if (h>=24)
		h-=24;
	else if (h<0)
		h=24+h;
	cout << h << endl;
	return 0;
}
