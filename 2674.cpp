#include <bits/stdc++.h>

using namespace std;

bool ehPrimo(int num){
	if (num == 2)
		return true;
	if (num <= 1 || num%2 == 0)
		return false;
	
	for (int i = 3; i * i <= num; i += 2){
		if (num%i == 0){
			return false;
		}
	}
	return true;
}

bool ehSuper(int num){
	string str = to_string(num);
	for(size_t i=0; i<str.size(); i++){
		if (str[i]=='0' || str[i]=='1' || str[i]=='4' || str[i]=='6' || str[i]=='8' || str[i]=='9')
			return false;
	}
	return true;
}

int main() {
	int n;
	while (cin >> n){
		if (ehPrimo(n)){
			if(ehSuper(n))
				cout << "Super" << endl;
			else
				cout << "Primo" << endl;
		} else {
			cout << "Nada" << endl;
		}
	}
	return 0;
}
