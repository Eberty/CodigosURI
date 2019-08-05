#include <iostream>

using namespace std;

int main() {
	int l, v, lesma=1;
	
	while (cin >> l){
		lesma=1;
		for (int i=0; i<l; i++){
			cin >> v;
			if (v>=10 && v<20 && lesma==1)
				lesma=2;
			else if (v >= 20)
				lesma=3;
		}
		cout << lesma << endl;
	}
	
	return 0;
}
