#include <iostream>
using namespace std;

void pideNumeros(int num, int a[]){
     for (int i=0; i<num; i++){
        cout << "dame el número "<< i+1 <<"\n";
        cin >> a[i];
    }
}
void EscribeNumeros(int num, int a[]){
     cout << "Lista de números:\n";
     for (int i=0; i<num; i++){
        cout << a[i] <<" ";
    }
}

int main() {
    int num;
    cout << "Cuántos números quieres usar?\n";
    cin >> num;
    int a[num];
    pideNumeros(num, &a[0]);

    int temp;
 
    int testigo=true;
    while(testigo){
        testigo=false;
        for(int i=0; i<num-1; i++){
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                testigo=true;
            }
        }
    }
    EscribeNumeros(num, a);
}