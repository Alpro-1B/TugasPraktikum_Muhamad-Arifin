#include <iostream>
using namespace std;

int main(){
    // Deklarasi variabel untuk batas angka 
    int batas; 
    // Input untuk user memasukkan batas angka
    cout << "Masukkan batas angka untuk deret bilangan : ";
    cin >> batas;
    // Deklarasi isi dari variabel untuk bilangan ganjil,genap,dan prima
    int Ganjil = 0; 
    int Genap = 0; 
    int Prima = 0;
    cout << endl;
    // Pertama untuk bilangan ganjil, lakukan looping dari angka 1 hingga batas yang diinput user sehingga tersisa bilangan ganjil
    for (int i = 1; i <= batas; i++){
        // Output kalimat awal untuk deret bilangan
        if (i == 1){
            cout << "Bilangan ganjil dari angka 1 hingga " << batas << " adalah : ";
        }
        // menyaring bilangan ganjil dari angka 1 hingga batas yang diinput user (jika dibagi dua masih ada sisa bagi)
        if (i % 2 != 0){
            // Output bilangan ganjil
            cout << i << " ";
            // Menginput bilangan ganjil yang telah disaring ke variabel jumlah agar bisa ditampilkan dan dicari faktornya
            Ganjil+=i;
        }
    }
    // Output jumlah deret bilangan ganjil hingga batas angka
    cout << "\nJumlah bilangan ganjil dari angka 1 hingga " << batas << " adalah : " << Ganjil;
    cout << "\nFaktor-faktor dari jumlah bilangan ganjil tersebut adalah : ";
    // Lakukan looping dari angka 1 hingga nilai jumlah bilangan ganjil untuk mencari faktornya
    for (int a = 1; a <= Ganjil; a++){
        /* jika nilai jumlah bilangan ganjil dibagi suatu angka dari 1 hingga nilai jumlah itu sendiri tidak memiliki sisa bagi,
        maka angka yang menjadi pembagi merupakan faktornya*/
        if (Ganjil % a == 0){
            // Output faktornya
            cout << a << " ";
        } 
    }
    cout << endl << endl;
    // untuk bilangan genap, Lakukan looping seluruh bilangan bulat dari angka 1 hingga batas yang diinputkan user agar dapat disaring, sehingga tersisa bilangan genap
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
    // Output jumlah deret bilangan genap hingga batas angka
    cout << "\nJumlah bilangan genap dari angka 1 hingga " << batas << " adalah : " << Genap;
    cout << "\nFaktor-faktor dari jumlah genap tersebut adalah : ";
    // lakukan looping dari angka 1 hingga nilai jumlah bilangan genap untuk mencari faktornya
    for (int b = 1; b <= Genap; b++){
        /* jika nilai jumlah bilangan genap dibagi suatu angka dari 1 hingga nilai jumlah itu sendiri tidak memiliki sisa bagi,
        maka angka yang menjadi pembagi merupakan faktornya*/
        if (Genap % b == 0){
            // output faktornya
            cout << b << " ";
        }
    }
    cout << endl << endl;
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
    // Output jumlah deret bilangan prima hingga batas angka
    cout << "\nJumlah bilangan prima dari angka 1 hingga " << batas << " adalah : " << Prima;
    cout << "\nFaktor-faktor dari jumlah prima tersebut adalah : ";
    // lakukan looping dari angka 1 hingga nilai jumlah bilangan prima untuk mencari faktornya
    for (int c = 1; c <= Prima; c++){
        /* jika nilai jumlah bilangan prima dibagi suatu angka dari 1 hingga nilai jumlah itu sendiri tidak memiliki sisa bagi,
        maka angka yang menjadi pembagi merupakan faktornya*/
        if (Prima % c == 0){
            // output faktor-faktornya
            cout << c << " ";
        }
    }

 return 0;
}