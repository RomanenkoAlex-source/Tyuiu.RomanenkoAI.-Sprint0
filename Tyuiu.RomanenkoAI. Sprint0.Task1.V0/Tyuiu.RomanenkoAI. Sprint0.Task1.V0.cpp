#include <iostream>
#include <string> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Hello World!\nВведите ФИО: ";
    string a;

    getline(cin, a);

    int b;
    cout << "\nВведите Возраст: ";
    cin >> b;

    cout << "\nВаше ФИО: " << a;
    cout << "\nВаш Возраст = " << b << endl;

    return 0;
}