#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	for (int i=0; i<n; i++){
		int x, y, soma=0, v=0;
		cin >> x >> y;
		
		for (int j=x; v<y; j++){
			if (j%2){
				soma+=j;
				v++;
			}
		}
		
		cout << soma << endl;
	}
	
	return 0;
}
