#include <iostream>
#include "lib.h"

using namespace std;


int main() {
    int dimensione;
    cin >> dimensione;
    float numeri [dimensione];
    for (int i=0; i<dimensione; i++){
        cin >> numeri[i];
    }
    maxnum(numeri, dimensione);
    cout <<  maxnum(numeri, dimensione) << endl;
    return 0;
}
