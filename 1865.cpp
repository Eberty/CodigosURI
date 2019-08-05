#include <iostream>

using namespace std;

int main() {
	string nome;
	int n, forca;
	
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> nome >> forca;
		if (nome.compare("Thor")==0)
			cout << "Y" << endl;
		else
			cout << "N" << endl;
	}
	
	return 0;
}
