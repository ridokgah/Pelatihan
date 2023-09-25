#include <iostream>
using namespace std;
int main(){
    string p;
    cout <<"=== APA WARNA LAMPU LALU LINTAS DI DEPAN ANDA === "<<endl;
    cin >> p;
    if(p=="merah")
    {
        cout<<"Berhenti" << endl;
    }
    else if(p=="kuning")
    {
        cout << "Siap siap jalan"<< endl;
    }
    else if(p=="hijau")
    {
        cout << "Selamat jalan"<< endl;
    }
    else
    {
        cout <<"TABRAKAN"<< endl;
    }
}