/*Example of using array in C++
Only declare one type of variable, similar to C

Author: Julio de Souza
Date 06/11/2022*/

//Array declarion in C++ is the same that in C. We can declare static and dynamically

#include<iostream>
int main(){
    using namespace std;
    int array_variable[3];
    array_variable[0] = 7;
    array_variable[1] = 8;
    array_variable[2] = 9;
    cout << "Primeiro valor: " << array_variable[0] << ". Segundo valor: "<< array_variable[1] << ". Terceiro valor: "<< array_variable[2]<<"."<< endl;
    //Another type of declaration
    int array_variable2[3] = {1, 2, 3};
    cout << "Primeiro valor: " << array_variable2[0] << ". Segundo valor: "<< array_variable2[1] << ". Terceiro valor: "<< array_variable2[2]<<"."<< endl;
    return 0;
}