#include <iostream>
#define mientras while
using namespace std;
int alaba(){
    int i;
    i=0;
    do{
        cout<<"Qué bueno eres\n";
        i=i+1;
    } mientras(i<1201);
    return 0;
}
int autoestima(){
    for(int i=0;i<15000;i=i+1){
        cout<<"Javier, eres el mejor, inteligente, fuerte, apuesto y justo \n";
    }
    return 0;
}
int recuerda(){
    int i;
    i=0;
    do{
        cout<<"Tienes que poner los platos en el lavavajillas\n";
        i=i+1;
    } mientras(i<723);
    return 0;
}
int main(){
    int i;
    string entrada;
    i=0;
    mientras(i<6){
    cout << "Hola Javier!!!\n";
    i=i+1;
    }
    cout <<"Quieres alabanza, recuerdo ó autoestima? ";
    cin >>entrada;
    if(entrada=="alabanza"){
            alaba();
    } else if( entrada=="recuerdo"){
        recuerda();
    } else if ( entrada=="autoestima"){
        autoestima();
    } else {cout<< "\n eso no se hacerlo \n";}

    return 0;
}
