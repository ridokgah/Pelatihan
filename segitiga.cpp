#include <iostream>
using namespace std;
int main(){
    int a, t , L;
    string ulang;

    do{
        cout <<"=======Menghitung Luas Segitiga=======\n";
        cout <<"Masukan panjang alas segita: ";
        cin >> a;
        cout << "Masukan tinggi segitiga: ";
        cin >> t;
        L = a/2*t;
        cout << "Jadi Luas Segitiga Adalah: " << L << endl;
        cout << "Apakah anda ingin menghitung kembali? <y/n>: ";
        cin >> ulang;
    }
    while(ulang == "y");
    cout <<"==========Program Selesai=============\n";
return;
}