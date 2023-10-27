#include <iostream>
using namespace std;
int main()
{
//Buat variabel
int angka1,angka2,angka3;

//input ketiga angka
cout << "Angka pertama : ";
cin >> angka1;
cout << "Angka kedua : ";
cin >> angka2;
cout << "Angka ketiga : ";
cin >> angka3;

//Jika angka 1 > angka 2 > angka 3 maka akan keluar output ini
if ( angka1 > angka2 && angka1 > angka3 )
        cout << "Angka terbesar : " << angka1 << endl;
//jika angka 2 > angka 1 > angka 3 maka akan keluar output ini
else if ( angka2 > angka1 && angka2 > angka3 )
        cout << "Angka terbesar : " << angka2 << endl;
//jika angka 3 > angka 1 > angka 2 akan keluar output ini
else
        cout << "Angka terbesar : " << angka3 << endl;
    return 0;
}
