#include <iostream>

using namespace std;

typedef struct ev{
	char aux[3];
	int d, h, m, s;
} evento;

int main() {
	evento ini, fim;
	unsigned int i, f, t;
	
	cin >> ini.aux;
	cin >> ini.d;
	cin >> ini.h;
	cin.ignore();cin.ignore();
	cin >> ini.m;
	cin.ignore();cin.ignore();
	cin >> ini.s;
	
	cin >> fim.aux;
	cin >> fim.d;
	cin >> fim.h;
	cin.ignore();cin.ignore();
	cin >> fim.m;
	cin.ignore();cin.ignore();
	cin >> fim.s;
	
	//cout << "d" << ini.d << " h" << ini.h << " m" << ini.m << " s" << ini.s << endl; 
	//cout << "d" << fim.d << " h" << fim.h << " m" << fim.m << " s" << fim.s << endl; 
	
	i = (ini.d*3600*24)+(ini.h*3600)+(ini.m*60)+(ini.s);
	f = (fim.d*3600*24)+(fim.h*3600)+(fim.m*60)+(fim.s);
	t = f-i;
	
	cout << t/(3600*24) << " dia(s)" << endl;
	t %= (3600*24);
	cout << t/3600 << " hora(s)" << endl;
	t %= 3600;
	cout << t/60 << " minuto(s)" << endl;
	t %= 60;
	cout << t << " segundo(s)" << endl;
	
    return 0;
}
