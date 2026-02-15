#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Dime cuantos números quieres ordenar\n ";
    cin >> num;
    int a[num];

    for(int i=0; i<num; i++){
        cout << "dame el siguiente número ("<<i<<")";
        cin >> a[i];
    }

    int menor,posmenor,temp;

    for(int i=0;i<num-1;i++){
        menor=a[i]; posmenor=i;
        for(int j=i+1; j<num; j++){
            if(a[j]<menor){
                menor=a[j];posmenor=j;
            }
        }
        temp=a[i];
        a[i]=a[posmenor];
        a[posmenor]=temp;
    }


    int k=0;
    while(k<num){
        cout << a[k]<<" ";
        k++;
    }


}