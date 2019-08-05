#include <iostream>

using namespace std;

int main(){
	unsigned long long som, n;

	som = 1;
	cin >> n;

	for(int i = 0; i < n; i++){
		som *= 3;
	}

	cout << som << endl;

	return 0;
}
