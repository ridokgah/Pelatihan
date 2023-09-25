#include <iostream>
using namespace std;
int main(){
    int pilih;
    string makan;
    do{
    cout <<"====Pilih salah satu makanan favoritmu:"<<endl;
    cout <<"1. Mie Goreng"<<endl;
    cout <<"2. Nasi Goreng"<<endl;
    cout <<"3. Bakso"<<endl;
    cout <<"4. Bubur"<< endl;
    cout <<"5. Ayam Goreng"<< endl;
    cout <<"  Ketik nomor berapa makanan favoritmu: "<< endl;
    cin >> pilih;

    switch(pilih){
        case 1:
        makan = "Mie Goreng";
        break;
        case 2:
        makan = "Nasi Goreng";
        break;
        case 3:
        makan = "Bakso";
        break;
        case 4:
        makan = "Bubur";
        break;
        case 5:
        makan = "Ayam Goreng";
        break;
        default :
        makan = "Tidak ada dalam pilihan tersebut";
        break;

    }
    cout << "== Makanan Favorit Saya "<<makan <<" =="<< endl;
    }
    while(pilih<=5);
}