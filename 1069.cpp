#include <iostream>

using namespace std;

int main (){
	int n, contd;
	string d;
	int abre;
	cin >> n;
	for (int i=0; i<n; i++){
		abre=0;
		contd=0;
		cin >> d;
		for (unsigned int j=0; j<d.size(); j++){
			if (d[j]=='<')
				abre++;
			else if (d[j]=='>' && abre!=0){		
				abre--;
				contd++;
			}
		}
		cout << contd << endl; 
	}
	return 0;
}
