#include <iostream>

using namespace std;

int main() {
	int n, x;
	
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> x;
		if (x!=0){
			if (x&1)
				cout << "ODD ";
			else
				cout << "EVEN ";
				
			if (x>0)
				cout << "POSITIVE" << endl;
			else
				cout << "NEGATIVE" << endl;
		}else{
			cout << "NULL" << endl;
		}
	}
	
    return 0;
}
