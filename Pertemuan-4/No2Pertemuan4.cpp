#include <iostream>
using namespace std;

int main(){
    // deklarasi variabel untuk tinggi segitiga
    int n;
    cout << "Silakan masukkan nilai tinggi segitiga: ";
    // Input tinggi segitiga
    cin >> n;
    cout << "Segitiga dengan tinggi " << n << " akan berbentuk seperti ini : " <<endl<<endl;
    // Melakukan outer loop untuk tinggi segitiga
    for (int i = 1; i <= n; i++){
        /* Melakukan inner loop untuk memberi space agar segitiga tidak menempel di kiri*/
        for (int j = n; j > i; j--){
            cout << " "; 
        }
        /* Melakukan inner loop untuk menampilkan bentuk pada segitiga menggunakan tanda bintang */ 
        for (int k = 1; k <= i; k++){
            cout << "* "; 
        }
    // membuat baris baru agar segitiga vertikal
    cout << endl;
    }

    return 0;
}
