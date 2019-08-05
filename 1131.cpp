#include <iostream>

using namespace std;

int main() {
	int op, gg, gi, vg=0, vi=0, e=0, gn=0;
	
	do{
		cin >> gi >> gg;
		
		if (gi > gg)
			vi++;
		else if (gg > gi)
			vg++;
		else
			e++;
		
		gn++;
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> op;
	} while (op!=2);
	
	cout << gn << " grenais" << endl;
	cout << "Inter:" << vi << endl;
	cout << "Gremio:" << vg << endl;
	cout << "Empates:" << e << endl;
	
	if (vi > vg)
		cout << "Inter venceu mais" << endl;
	else if (vg > vi)
		cout << "Gremio venceu mais" << endl;
	else
		cout << "Nao houve vencedor" << endl;
	
	return 0;
}
