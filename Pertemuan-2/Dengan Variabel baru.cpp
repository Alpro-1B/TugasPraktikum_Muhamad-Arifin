#include <iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cout <<"Nilai A : ";
    cin >>a;
    cout <<"Nilai B : ";
    cin >>b;
    //Rumus :
    c = a;
    a = b;
    b = c;
    cout<<"Setelah Pertukaran :"<<endl;
    cout <<"Nilai A : "<<a<<endl;
    cout <<"Nilai B : "<<b;
    return 0;

}
