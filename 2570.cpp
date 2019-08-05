#include <iostream>
#include <set>
 
using namespace std;
 
typedef struct{
    int jog, xy;
    char lc;
} cel;
 
int main(){
    int n, m, k, jog[4];
    set <int> l, c;
    cel rod[500010];
 
    cin >> n >> m >> k;
 
    for(int i = 0; i < 4; i++)
        jog[i] = 0;
 
    for(int i = k-1; i >= 0; i--){
        cin >> rod[i].lc;
        cin >> rod[i].xy;
        rod[i].jog = ((k-1) - i) % 4;
    }
 
    for(int i = 0; i < k; i++){
        if (rod[i].lc == 'C'){
            if(c.find(rod[i].xy) == c.end()){
                jog[rod[i].jog] += (n - l.size());
                c.insert(rod[i].xy);
            }
        } else {
            if(l.find(rod[i].xy) == l.end()){
                jog[rod[i].jog] += (m - c.size());
                l.insert(rod[i].xy);
            }
        }
    }
 
    cout << "R" << jog[0] << " H" << jog[1] << " C" << jog[2] << " P" << jog[3] << endl;
 
    return 0;
}
