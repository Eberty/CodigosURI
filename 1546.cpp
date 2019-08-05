#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k, feed;
	
	cin >> n;
	while (n--){
		cin >> k;
		while (k--){
			cin >> feed;
			if (feed == 1)
				cout << "Rolien" << endl;
			else if (feed == 2)
				cout << "Naej" << endl;
			else if (feed == 3)
				cout << "Elehcim" << endl;
			else
				cout << "Odranoel" << endl;
		}
	}
	
	return 0;
}
