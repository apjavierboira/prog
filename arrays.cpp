#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Dime cuantos números quieres sumar\n ";
    cin >> num;
    cout << "He entendido que quieres sumar " << num << " números\n";
    int valores[num];
    int i;
    i=0;
    while (i<num){
        cout << "Dame el número " << i <<"\n";
        cin >> valores[i];
        i=i+1;
    }
    int j=0;
    while (j<num){
        cout <<"valor "<< j <<" es "<< valores[j]<<"\n";
        j=j+1;
    }

}