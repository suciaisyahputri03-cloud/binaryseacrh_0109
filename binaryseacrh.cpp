#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input()
{
    while (true)
    {
        cout << "masukkan banyaknya elmen pada array (maksimal 10): ";
        cin >> nPanjang;

        if(nPanjang <= 10)
        {
            break;
        }
        else
        {
            cout << "\n[!] jumlah elemen tidak boleh lebih dari 10. silahkan coba lagi.\n";
        }
    }

    cout << "\n====================================\n";
    cout << "          Masukkan Elemen Array        \n";
    cout << "========================================\n";

    for (int i = 0; i < nPanjang; i++)
    {
        cout << "data ke-" << ( i + 1) << " = ";
        cin >> element[i];
    }
}