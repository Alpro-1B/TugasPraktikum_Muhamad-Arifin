#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel untuk jumlah elemen array
    int index;
    // Input User untuk memasukkan jumlah elemen array
    cout << "Masukkan jumlah elemen dalam array : ";
    cin >> index;
    // Membuat array dengan isi variabel yang telah dibuat sebelumnya
    int array[index];
    // Output memasukkan nilai setiap index array
    cout << "Masukkan nilai-nilai dalam array" << endl;
    // Melakukan looping untuk mengisi setiap nilai index array
    for (int i = 0; i < index; ++i) 
    {
        cout << "Nilai ke-" << i << " : ";
        cin >> array[i];
    }
    // Inisialisasi nilai tertinggi dengan elemen pertama array
    int nilaitertinggi = array[0]; 
    // Inisialisasi index tertinggi array
    int indextertinggi = 0; 

    // melakukan looping untuk mencari nilai tertinggi dalam array
    for (int i = 0; i < index; ++i) 
    {
        if (array[i] > nilaitertinggi)
        {
            nilaitertinggi = array[i];
            indextertinggi = i;
        }
    }
    // Output nilai tertinggi dalam array
    cout << "Nilai tertinggi dalam array adalah : " << nilaitertinggi << endl;

    // Memeriksa apakah nilai tersebut ada dalam array
    for (int i = 0; i < index; ++i) 
    {
        if (array[i] == nilaitertinggi) 
        {
            indextertinggi = i;
            break;
        }
    }
    // Output yang keluar jika nilai tersebut ada dalam array
    if (indextertinggi != -1) 
    {
        cout << "Nilai tersebut ada dalam array indeks ke : " << indextertinggi << endl;
    }
    // Output yang keluar jika nilai tersebut tidak ada dalam array
    else 
    {
        cout << "Nilai tersebut tidak ada dalam array." << endl;
    }

    return 0;
}
