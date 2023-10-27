#include <iostream>
using namespace std;
int main ()
{
    //Buat variabel
    int nilai;
    //input nilai
    cout<<"Nilai : ";
    cin>>nilai;

    //jika nilai 90 keatas maka akan keluar output ini
    if (nilai>=90){
    cout <<"Selamat! Anda mendapatkan nilai A."<<endl;
    }
    //jika range nilai 80-89 maka akan keluar output ini
    else if (nilai>=80){
    cout <<"Anda mendapatkan nilai B."<<endl;
    }
    //jika range nilai 70-79 maka akan keluar output ini
    else if (nilai>=70){
    cout <<"Anda mendapatkan nilai C."<<endl;
    }
    //jika range nilai 60-69 maka akan keluar output ini
    else if (nilai>=60){
    cout <<"Anda mendapatkan nilai D."<<endl;
    }
    //jika nilai dibawah 60 maka akan keluar output ini
    else {
    cout <<"Anda mendapatkan nilai E."<<endl;
    }
    return 0;
}
