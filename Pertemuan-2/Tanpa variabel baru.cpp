#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Nilai A : ";
    cin >> a;
    cout << "Nilai B : ";
    cin >> b;
    // Rumus :
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Setelah pertukaran: " <<endl;
    cout << "Nilai A = " << a <<endl;
    cout << "Nilai B = " << b <<endl;
    return 0;
}
