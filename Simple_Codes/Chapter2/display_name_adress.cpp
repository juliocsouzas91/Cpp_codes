/*
Author << Julio de Souza
Date 23/10
Program: print name adress
*/
#include <iostream>

using namespace std;

int main(){
    char name[50], adress[50];
    cout << "Digite seu nome" << endl;
    cin >> name;
    cout << "Digite seu endereco"<< endl;
    cin >> adress;
    cout << name<<" mora em: " << adress << endl;
    cin >> adress;
return 1;
}