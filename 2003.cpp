#include <iostream>

using namespace std;

int main() {
	//while(scanf("%d:%d",&h,&m) != EOF){
	
	int h, m, a;
	while(cin >> h){
		cin.ignore();
		cin >> m;
		//cout << "h" << h << " m" << m << endl;
		a = (h*60) + m;
		if (a<=7*60)
			cout << "Atraso maximo: 0" << endl;
		else
			cout << "Atraso maximo: " << a-(7*60) << endl;
		
	}
	return 0;
}
