#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, m, p1x, p1y,  p2x, p2y, num;
	
	while (cin >> n >> m){
		for(int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				cin >> num;
				if (num == 1)
					p1x=i, p1y=j;
				if (num == 2)
					p2x=i, p2y=j;
			}
		}
		cout << abs(p1x-p2x) + abs(p1y-p2y) << endl;
	}

	return 0;
}
