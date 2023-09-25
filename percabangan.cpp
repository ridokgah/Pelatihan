#include <iostream>
using namespace std;
int main(){
    string a;
    do{

     cout <<"---PERANGAKAT INI TERKUNCI---"<<endl;
     cout <<"Masukan Password :"<<endl;
     cin >> a;
      if(a=="ANJIR1")
    {
         cout <<"====ANDA BERHASIL MASUK===="<<endl;
        break;
    }
     else
    {
         cout <<"Password --SALAH--"<<endl;
    }
    }
    while("else");
}