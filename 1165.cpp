#include <iostream>

using namespace std;

int main() {
	unsigned int n, x, i, j;
	cin >> n;
	
	for (i=0; i<n; i++){
		int flag = 0;
		cin >> x;

		for (j=1; j<=x; j++){
			if (x%j == 0)
				flag++;
		}
			
		if(flag == 2)
			cout << x << " eh primo" << endl;
		else
			cout << x << " nao eh primo" << endl;
	}
	
	return 0;
}
