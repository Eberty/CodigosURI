#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	for (int i=0; i<t; i++){
		int pa, pb, tempo=0;
		float g1, g2;

		cin >> pa >> pb >> g1 >> g2;
		
		while (pa<=pb && tempo<=100){
			pa *= (1 + g1/100.0);
			pb *= (1 + g2/100.0);
			tempo++;
		}
		
		if(tempo > 100)
			cout << "Mais de 1 seculo." << endl;
		else
			cout << tempo << " anos." << endl;
	}
	
	return 0;
}
