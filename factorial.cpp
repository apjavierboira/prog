#include <iostream>
using namespace std;

int factorial(int i){
    if (i==1){
        return 1;
    } else {
        return i*factorial(i-1);
    }
}
int main(){
    int entrada;
    cout << "dame valor para hacer factorial \n";5
    
    cin >> entrada;
    cout << factorial(entrada);
    return 0;


}