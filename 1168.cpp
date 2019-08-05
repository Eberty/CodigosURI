#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, l;
	string v;
	
	cin >> n;
	for(int i=0; i<n; i++){
		l=0;
		
		cin >> v;
		
	for (std::string::iterator it=v.begin(); it!=v.end(); ++it){
		if (*it == '1')
			l += 2;
		else if (*it == '2')
			l += 5;
		else if (*it == '3')
			l += 5;
		else if (*it == '4')
			l += 4;
		else if (*it == '5')
			l += 5;
		else if (*it == '6')
			l += 6;
		else if (*it == '7')
			l += 3;
		else if (*it == '8')
			l += 7;
		else if (*it == '9')
			l += 6;
		else if (*it == '0')
			l += 6;
	}
		
		cout << l << " leds" << endl;
	}
	
	return 0;
}
