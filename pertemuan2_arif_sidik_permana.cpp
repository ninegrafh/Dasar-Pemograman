/*
    cout<<"Nama : ARIF SIDIK PERMANA"<<endl;
    cout<<"NIM  : 19.1.03.03.0056"<<endl;
    cout<<"=========================="<<endl;
*/
#include<iostream>
#include <cstdlib>
using namespace std;
int main(){
 float berat;
 float tinggi;
 float ideal;
 cout<<"Program Penghitung berat badan Ideal\n";
 cout<<"------------------------------------\n";
 cout<<"Berat anda : ";
 cin>>berat;
 cout<<"Tinggi anda (m) : ";
 cin>>tinggi;
 ideal = berat / (tinggi * tinggi);
 cout<<"Hasil : "<<ideal<<endl;

 cout<<"Bila hasil < 17 Anda Under Weight/Kurus\n";
 cout<<"Bila hasil 17-23 Anda Normal Weight/Ideal\n";
 cout<<"Bila hasil 23-27 Anda Over Weight/Kegemukan\n";
 cout<<"Bila hasil > 27 Anda obesitas\n";
 return 0;
}
