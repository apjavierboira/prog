#include <iostream>
using namespace std;

void pideNumeros(int num, int *a){
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
    int menor=a[0];
    int posmenor=0;
    int i=0;
    while (i<num){
        if(a[i]<menor){
            menor=a[i];
            posmenor=i;
        }
        i++;
    }
    temp=a[0];
    a[0]=a[posmenor];
    a[posmenor]=temp;

    EscribeNumeros(num, a);
}