#include <bits/stdc++.h>

using namespace std;

bool vence(string x, string y) {
    return (x == "pedra" && y == "tesoura") || (x == "papel" && y == "pedra") || (x == "tesoura" && y == "papel");
}

int main() {
    string dodo, leo, pepper;
    while (cin >> dodo >> leo >> pepper) {
        if (vence(dodo, leo) && vence(dodo, pepper))
            cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
        else if (vence(leo, dodo) && vence(leo, pepper))
            cout << "Iron Maiden's gonna get you, no matter how far!" << endl;
        else if (vence(pepper, dodo) && vence(pepper, leo))
            cout << "Urano perdeu algo muito precioso..." << endl;
        else
            cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
    }
    return 0;
}
