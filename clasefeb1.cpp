#include <iostream>
using namespace std;

int main(){
    int ene;

    cout << "Dime cuantos valores me vas a dar";
    cin >> ene;
    int valor[ene];
    int i=0;
    while(i<ene){
        cin >> valor[i];
        i++;
    }
}