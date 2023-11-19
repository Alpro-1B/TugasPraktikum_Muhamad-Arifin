#include <iostream>
using namespace std;

// Membuat fungsi untuk segitiga 
void SegitigaBintang(int tinggi);

int main()
{
    // Deklarasi variabel untuk tinggi segitiga
    int n;
    cout << "Masukkan nilai tinggi segitiga: ";
    // Input untuk user memasukkan tinggi segitiga
    cin >> n;
    // Ouput yang keluar menampilkan bentuk segitiga
    cout << "Segitiga dengan tinggi " << n << " berbentuk seperti ini : " <<endl<<endl;
    // Memanggil fungsi yang menunjukkan bentuk segitiga
    SegitigaBintang(n);
    return 0;
}
// isi fungsi untuk menampilkan segitiga
void SegitigaBintang(int tinggi)
{
    // Melakukan outer loop untuk tinggi segitiga
    for (int a = 1; a <= tinggi; a++)
    {
        /* Melakukan inner loop untuk menggeser agar segitiga tidak menempel di kiri*/
        for (int w = tinggi; w > a; w--)
        {
            cout << " "; 
        }
        /* Melakukan inner loop untuk menampilkan bentuk segitiga dengan tanda bintang */ 
        for (int c = 1; c <= a; c++)
        {
            cout << "* "; 
        }
        // membuat baris baru tiap loop agar tinggi segitiga vertikal
        cout << endl;
    
    }
}
