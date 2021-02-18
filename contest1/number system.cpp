#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    string num = string();
    cin >> a;
    num.insert(0, (a % 60) % 10, 'v');
    num.insert(0, (a % 60) / 10, '<');
    a = a / 60;
    while (a != 0){
        num.insert(0, 1, '.');
        num.insert(0, (a % 60) % 10, 'v');
        num.insert(0, (a % 60) / 10, '<');
        a = a / 60;
    }
    cout << num;
    return 0;
}
