/*Example of using array in C++
Only declare one type of variable, similar to C

Author: Julio de Souza
Date 06/11/2022*/

//Array declarion in C++ is the same that in C. We can declare static and dynamically

#include<iostream>
int main(){
    using namespace std;
    /*-----------------Arrays------------------*/
    int array_variable[3];
    array_variable[0] = 7;
    array_variable[1] = 8;
    array_variable[2] = 9;
    cout << "Primeiro valor: " << array_variable[0] << ". Segundo valor: "<< array_variable[1] << ". Terceiro valor: "<< array_variable[2]<<"."<< endl;
    
    //Another type of declaration
    int array_variable2[3] = {1, 2, 3};
    cout << "Primeiro valor: " << array_variable2[0] << ". Segundo valor: "<< array_variable2[1] << ". Terceiro valor: "<< array_variable2[2]<<"."<< endl;
    /*Considerations:
    We can partially initialize the array
    It is possible to omit the [number] when declaring, in this way the compiler will alocate the memory
    */
   
    /*
    -----------------Srings----------------------
    Srings are a series of characters stored in an array where the last character is the null value \0
    This null character is crucial because there is implemented functions to handle strings*/
    char bird[] = "Quero-Quero" ; // é considerado uma string
    //Store a string
    char name[10],surname[10];
    cout<< "Enter your first name" <<endl;
    cin >> name;
    cout << "Hello "<< name << endl;
    //Store a string with getline()
    cout<< "Enter your surname" <<endl;
    cin.get();
    cin.getline(surname, 10);
    cout << "Hello "<<name<<" "<<surname << endl;


    return 0;
}