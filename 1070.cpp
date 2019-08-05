#include <iostream>

using namespace std;

int main() {
	int i, j, x;
	cin >> x;
	
	for (i=x, j=0; j<6; i++)
		if (i&1){
			cout << i << endl;
			j++;
		}
		
    return 0;
}
