#include <iostream>
#include <cmath>
using namespace std;

float massa;
float energi;
float kecepatan;

int main(){
    cout << "masukkan massa objek(kg): ";
    cin >> massa;
    cout << "masukkan kecepatan objek(m/s): ";
    cin >> kecepatan;

    double hitungEK = 0.5 * massa * kecepatan * kecepatan;

    cout << "energi kinetik: " << hitungEK << "joule" << endl;
    return 0;

    
}