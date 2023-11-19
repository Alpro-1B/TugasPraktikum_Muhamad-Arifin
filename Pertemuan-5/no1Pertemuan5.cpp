#include <iostream>
using namespace std;
// membuat fungsi untuk masing-masing jenis bilangan dan faktornya
void bilanganGanjil();
void faktorGanjil();
void bilanganGenap();
void faktorGenap();
void bilanganPrima();
void faktorPrima();
//Deklarasi variabel batas angka
int batas; 
// inisialisasi untuk bilangan ganjil,genap,dan prima
int Ganjil = 0; 
int Genap = 0; 
int Prima = 0;

int main()
{
    // Input untuk user memasukkan batas angka
    cout << "Masukkan batas angka untuk deret bilangan : ";
    cin >> batas;
    // Output jumlah deret bilangan ganjil hingga batas angka
    cout << "\nBilangan Ganjil";
    cout << endl;
    // Memanggil fungsi untuk menampilkan bilangan ganjil
    bilanganGanjil();
    cout << "\nFaktor-faktor dari jumlah bilangan ganjil tersebut adalah : ";
    // Memanggil fungsi untuk menampilkan faktor bilangan ganjil
    faktorGanjil();
    cout << endl;
    // Output jumlah deret bilangan genap hingga batas angka
    cout << "\nBilangan Genap";
    cout <<endl;
    // Memanggil fungsi untuk menampilkan bilangan genap
    bilanganGenap();
    cout << "\nFaktor-faktor dari jumlah genap tersebut adalah : ";
    // Memanggil fungsi untuk menampilkan faktor bilangan genap
    faktorGenap();
    cout << endl;
    // Output jumlah deret bilangan prima hingga batas angka
    cout << "\nBilangan Prima";
    cout <<endl;
    // Memanggil fungsi untuk menampilkan bilangan prima
    bilanganPrima();
    cout << "\nFaktor-faktor dari jumlah prima tersebut adalah : ";
    // Memanggil fungsi untuk menampilkan faktor bilangan prima
    faktorPrima();
 return 0;
}
void bilanganGanjil()
{
 // lakukan looping dari angka 1 hingga batas yang diinput user
    for (int i = 1; i <= batas; i++)
   {
        // Output untuk deret bilangan
        if (i == 1){
            cout << "Bilangan ganjil dari angka 1 hingga " << batas << " adalah : ";
        }
        // Menyaring bilangan ganjil dari angka 1 hingga batas yang diinput user (jika dibagi dua masih ada sisa bagi)
        if (i % 2 != 0){
            // Output bilangan ganjil
            cout << i << " ";
            // Menginput bilangan ganjil yang telah disaring ke variabel jumlah agar bisa ditampilkan dan dicari faktornya
            Ganjil+=i;
        }
    }
}
void faktorGanjil()
{
 // looping dari angka 1 hingga nilai jumlah bilangan ganjil untuk mencari faktornya
    for (int a = 1; a <= Ganjil; a++){
        /* jika nilai jumlah bilangan ganjil dibagi suatu angka dari 1 hingga nilai jumlah itu sendiri tidak memiliki sisa bagi,
        maka angka yang menjadi pembagi merupakan faktornya*/
        if (Ganjil % a == 0){
            // Output faktornya
            cout << a << " ";
        } 
    }
}
void bilanganGenap()
{
     // looping seluruh bilangan bulat dari angka 1 hingga batas yang diinputkan
    for (int j = 1; j <= batas; j++){
        // Output kalimat awal untuk deret bilangan
        if (j == 1){
            cout << "Bilangan genap dari 1 hingga " << batas << " adalah : ";
        }
        // menyaring bilangan genap dari angka 1 hingga angka yang diinputkan user (jika dibagi dua masih tidak ada sisa bagi)
        if (j % 2 == 0){
            // Output bilangan genap
            cout << j << " ";
            // menginput bilangan-bilangan genap yang telah disaring ke variabel jumlah agar bisa ditampilkan dan dicari faktornya
            Genap+=j;
        }
    }
}
void faktorGenap()
{
        // lakukan looping dari angka 1 hingga nilai jumlah bilangan genap untuk mencari faktornya
    for (int b = 1; b <= Genap; b++){
        /* jika nilai jumlah bilangan genap dibagi suatu angka dari 1 hingga nilai jumlah itu sendiri tidak memiliki sisa bagi,
        maka angka yang menjadi pembagi merupakan faktornya*/
        if (Genap % b == 0){
            // output faktornya
            cout << b << " ";
        }
    }
}
void bilanganPrima()
{
     /* Untuk bilangan prima outer loop, looping seluruh bilangan bulat dari angka 1 hingga angka yang diinputkan user agar dapat disaring, 
    sehingga tersisa bilangan prima*/
    for (int k = 1; k <= batas; k++){
        // output kalimat awal untuk deret bilangan
        if (k == 1){
            cout << "Bilangan prima dari 1 hingga " << batas << " adalah : ";
        }
        /* inner loop, loop dari angka 2 (karena 1 adalah faktor semua bilangan) hingga angka yang diinputkan user,
        angka yang diloop akan menjadi pembagi untuk mencari faktor*/
        for (int l = 2; l <= batas; l++){
            // jika faktor suatu angka bukan dirinya sendiri lewatkan angka tersebut
            if (k % l == 0 && k != l){
                break;
                // jika suatu angka bernilai lebih dari 1 dan faktornya adalah diri sendiri, tampilkan
            } else if (k > 1 && k % l == 0 && k == l){
                // menampilkan bilangan prima
                cout << k << " ";
                // memasukkan bilangan-bilangan prima yang telah disaring ke variabel jumlah agar bisa ditampilkan dan dicari faktornya
                Prima+=k;
            }
        }
    }
}
void faktorPrima()
{
          // lakukan looping dari angka 1 hingga nilai jumlah bilangan prima untuk mencari faktornya
    for (int c = 1; c <= Prima; c++){
        /* jika nilai jumlah bilangan prima dibagi suatu angka dari 1 hingga nilai jumlah itu sendiri tidak memiliki sisa bagi,
        maka angka yang menjadi pembagi merupakan faktornya*/
        if (Prima % c == 0){
            // output faktor-faktornya
            cout << c << " ";
        }
    }
}