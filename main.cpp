#include <iostream>
using namespace std;

int main() {
int Numero, a=1, b=1, c;
cin>>Numero;
  if (Numero<2) {
        cout << "errore" << endl;

 }else {
        cout<<a<<endl;
        cout<<b<<endl;
        for (int i =2; i < Numero; i++) {
            c = a + b;
            a = b;
            b = c;
            cout << c << endl;
        }
    }
   return 0;
}
