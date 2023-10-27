#include <iostream>
using namespace std;
int main()
{
    //buat variabel
    int BangunDatar,luas,alas,tinggi,panjang,lebar,sisi;

    //input user untuk memilih bangun datar
    cout <<"Pilih bangun datar yang akan dicari alasnya"<<endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "Pilih Bangun Datar 1/2/3 : ";
    cin >> BangunDatar;

//Membuat Switchcase
     switch (BangunDatar){
        //Kasus 1 untuk bangun datar persegi
        case 1:
            //input sisi
            cout << "Panjang sisi Persegi : ";
            cin >> sisi;
            //rumus luas
            luas = sisi * sisi;
            //output luas
            cout << "Luas Persegi : " << luas << endl;
            break;
        //Kasus 2 untuk bangun datar persegi panjang
        case 2:
            //input panjang
            cout << "Panjang Persegi Panjang : ";
            cin >> panjang;
            //input lebar
            cout << "Lebar Persegi Panjang : ";
            cin >> lebar;
            //rumus luas
            luas = panjang * lebar;
            //output luas
            cout << "Luas Persegi Panjang : " << luas << endl;
            break;
        //Kasus 3 untuk bangun datar segitiga
        case 3:
            //input alas
            cout << "Panjang alas Segitiga: ";
            cin >> alas;
            //input tinggi
            cout << "Tinggi Segitiga : ";
            cin >> tinggi;
            //rumus kluas
            luas = 0.5 * alas * tinggi;
            //output luas
            cout << "Luas Segitiga : " << luas << endl;
            break;
        //output yang keluar jika user memasukkan pilihan selain pilihan diatas
        default:
            cout << "Pilihan tidak valid" << endl;
        }

    return 0;
}

