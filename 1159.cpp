#include <iostream>

using namespace std;

int main() {
	int x;
	
	cin >> x;
	while (x != 0){
		int soma=0, v=0;
		
		for (int i=x;v<5; i++)
			if (i%2==0){
				soma+=i;
				v++;
			}
		
		cout << soma << endl;
		cin >> x;
	}
	
	return 0;
}
