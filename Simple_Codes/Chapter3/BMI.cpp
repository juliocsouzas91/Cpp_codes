#include<iostream>

using namespace std;

double body_mass_index(double, double);

int main(){
    double BMI;
    BMI = body_mass_index(100,181);
    cout << "Your body mass index is: " << BMI <<endl;
    cin >> BMI;
    return 1;
}

double body_mass_index(double height, double weight){
    return (weight)/(height*height);
}