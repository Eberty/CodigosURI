#include <bits/stdc++.h>

using namespace std;

int main() {
	string str;
	int n;
	
	cin >> n;
	while(n--){
		cin >> str;
		if (str.size() != 8){
			cout << "FAILURE" << endl;
		} else if (str[0] >= 'A' && str[0] <= 'Z' && str[1] >= 'A' && str[1] <= 'Z' && str[2] >= 'A' && str[2] <= 'Z' && str[3] == '-') {
			if(str[4] >= '0' && str[4] <= '9' && str[5] >= '0' && str[5] <= '9' && str[6] >= '0' && str[6] <= '9' && str[7] >= '0' && str[7] <= '9'){
				if (str[7] == '1' || str[7] == '2')
					cout << "MONDAY" << endl;
				if (str[7] == '3' || str[7] == '4')
					cout << "TUESDAY" << endl;
				if (str[7] == '5' || str[7] == '6')
					cout << "WEDNESDAY" << endl;
				if (str[7] == '7' || str[7] == '8')
					cout << "THURSDAY" << endl;
				if (str[7] == '9' || str[7] == '0')
					cout << "FRIDAY" << endl;
			} else {
				cout << "FAILURE" << endl;
			}
		} else {
			cout << "FAILURE" << endl;
		}
		
	}
	
	return 0;
}
