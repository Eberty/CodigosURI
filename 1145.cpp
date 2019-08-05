#include <iostream>

using namespace std;

int main() {
	int x, y, i=1, j=0;
	cin >> x >> y;
	
	while (i<y){
		cout << i;
		if (j==x-1)
			cout << endl;
		else
			cout << " ";
		i++;
		j = (j+1)%x;
	}
	cout << i << endl;
	
	return 0;
}
