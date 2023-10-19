#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cout << "Jumlah bebek yang dimiliki pa Tatang = ";
    cin >> a;
    cout << "Jumlah Teman yang akan diberikan bebek oleh Pa Tatang = ";
    cin >> b;
    // Rumus :
    c = a / b;
    d = a % b;
    // Hasil :
    cout <<"Maka"<<endl;
    cout << "Jumlah bebek yang diberikan ke masing-masing temannya = "<<c<<endl;
    cout << "Sisa bebek Pa Tatang = " << d <<endl;
    return 0;
}

