#include <iostream>
using namespace std;
int main(){
    int p, l , L;
    string ulang;

    do{
        cout <<"=======Menghitung Luas Presegi Panjang=======\n";
        cout <<"Masukan Nilai panjang: ";
        cin >> p;
        cout << "Masukan Nilai Lebar: ";
        cin >> l;
        L = p*l;
        cout << "Jadi Luas Persegi Panjang Adalah: " << L << endl;
        cout << "Apakah anda ingin menghitung kembali? <y/n>: ";
        cin >> ulang;
    }while(ulang == "y");
    cout <<"Program Selesai!!!\n";
}