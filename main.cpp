#include <iostream>
using namespace std;

int main() {
  cout << "Bir sayi yaziniz." << endl;
  int x;
  int y;
  string islem;
  cin >> x;
  if(x) {
    cout << x << " yazildi" << endl << endl;
    cout << "Bir sayi daha yaziniz." << endl;
    cin >> y;
    if(y) {
        cout << y << " yazildi" << endl << endl;
        cout << "Islem Seciniz: topla/cikar/bol/carp" << endl;
        cin >> islem;
        cout << "Islem Olarak Secildi: " << islem << endl;
        cout << endl;
        if(islem == "topla") {
            cout << "Sayilarin Toplami: " << x + y << endl;
        } else if(islem == "cikar") {
            cout << "Sayilarin Cikarimi: " << x - y << endl;
        } else if(islem == "carp") {
            cout << "Sayilarin Carpimi: " << x * y << endl;
        } else if(islem == "bol") {
            cout << "Sayilarin Bolumu: " << x / y << endl;
        } else {
            cout << "Gecersiz islem.";
        }
    }
  }
  return 0;
}
