#include <iostream>
using namespace std;
// Memberikan fungsi 
void fibonacci(int n);
int main() 
{
    // Deklarasi variabel menyimpan jumlah bilangan fibonacci
    int n; 
    cout << "Masukkan jumlah deret bilangan Fibonacci: ";
    // Input untuk user memasukkan jumlah deret bilangan fibonacci
    cin >> n; 
    cout << "Bilangan Fibonacci sebanyak " << n << " deret adalah sebagai berikut : ";
    // Panggil fungsi untuk menampilkan deret fibonacci
    fibonacci(n);
    return 0;
}
    // Isi fungsi untuk menampilkan deret fibonacci
void fibonacci(int jumlah)
    {
        // Lakukan inisialisasi nilai variabel
        int a = 0;
        int b = 1; 
        //lakukan looping untuk menampilkan deret fibonacci
        for (int i = 1; i <= jumlah; i++)
        {
        // Menampilkan bilangan Fibonacci 
        cout << a << " "; 
        // Menghitung bilangan Fibonacci berikutnya dengan menjumlahkan dua bilangan sebelumnya
        int c = a + b; 
        // Menggeser bilangan Fibonacci pertama dengan bilangan Fibonacci kedua
        a = b; 
        // Menggeser bilangan Fibonacci kedua dengan bilangan Fibonacci berikutnya
        b = c; 
        }
    }

