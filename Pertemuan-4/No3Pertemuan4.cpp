#include <iostream>
using namespace std;
int main() {
    // Deklarasi variabel menyimpan jumlah bilangan fibonacci
    int n; 
    cout << "Masukkan jumlah bilangan Fibonacci: ";
    // Input untuk user memasukkan jumlah bilangan fibonacci
    cin >> n; 
    // Buat variabel untuk menyimpan dua bilangan Fibonacci sebelumnya
    int a = 0;
    int b = 1; 
    cout << "Deret Fibonacci dari 1 sampai " << n << " adalah : ";
    for (int i = 1; i <= n; i++) {
        // Menampilkan bilangan Fibonacci saat ini
        cout << a << " "; 
        // Menghitung bilangan Fibonacci berikutnya dengan menjumlahkan dua bilangan sebelumnya
        int c = a + b; 
        // Memperbarui bilangan Fibonacci pertama dengan bilangan Fibonacci kedua
        a = b; 
        // Memperbarui bilangan Fibonacci kedua dengan bilangan Fibonacci berikutnya
        b = c; 
    }
    return 0;
}
