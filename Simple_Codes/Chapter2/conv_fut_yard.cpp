/*
Author << Julio de Souza
Date 23/10
Program: Convert furlong to yard
        one furlong is 220 yards
*/

#include <iostream>

using namespace std;
int conversion(double);

int main(){
    double furlong=0, yards=0;
    cout << "How much furlong" << endl;
    cin >> furlong;
    yards = conversion(furlong);
    cout << furlong << " furlong is " << yards<<" yards" << endl;
    cin >> furlong;
    return 1; 
}

int conversion(double furlong){
    return 220*furlong;
    
}