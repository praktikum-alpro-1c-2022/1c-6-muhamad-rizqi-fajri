#include <iostream>

using namespace std;

int toC(int);
float toC(float);
double toC(double);

int main(){
    int intF;
    float floatF;
    double doubleF;

    cout << "Masukan nilai fahrenheit (integer): ";
    cin >> intF;
    cout << "Hasil konversi ke Celcius: " << toC(intF) << '\n';

    cout << "Masukan nilai fahrenheit (float): ";
    cin >> floatF;
    cout << "Hasil konversi ke Celcius: " << toC(floatF) << '\n';

    cout << "Masukan nilai fahrenheit (double): ";
    cin >> doubleF;
    cout << "Hasil konversi ke Celsius: " << toC(doubleF) << '\n';
}

int toC(int f){
    return (f - 32.0) * 5 / 9;
}

float toC(float f){
    return (f - 32.0) * 5 / 9;
}

double toC(double f){
    return (f - 32.0) * 5 / 9;
}