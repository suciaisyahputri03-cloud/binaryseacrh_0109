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

void bubleSortArray()
{
    int pass = 1;
    do
    {
        for (int j = 0; j <= nPanjang - 1 - pass; j++)
        {
            if (element[j] > element[j + 1])
            {
                int tempt = element[j];
                element[j] = element[j + 1];
                element[j + 1] = tempt;
            }
        }
        pass++;
    }while (pass <= nPanjang - 1);
}

void display()
{
    cout << "\n=================================\n";
    cout << "Element Array Setelah Diurutkan (ASC)\n";
    cout << "===================================\n";

    for (int j = 0; j < nPanjang; j++)
    {
        cout << element [j];
        if (j < nPanjang - 1)
        {
            cout << " -> ";
        }
    }
    cout << endl;
}

void binarySearch()
{
    char ulang;
    do 
    {
        cout << "\n===============================\n";
        cout << "          Pencarian Binary Search        \n";
        cout << "=================================\n";

        cout << "Masukkan element yang ingin dicari: ";
        cin >> x;

        int low = 0;
        int high = nPanjang - 1;

        do 
        {
            int mid = (low + high) /2;

            if (element[mid] == x)
            {
                cout << "\n[] Eleme" << x << "ditemukan pada indeks " << mid << "\n";
                return;
            }
            if (x < element[mid])
            {
                high = mid - 1;
            }
            if (x > element[mid])
            {
                low = mid + 1;
            }
        }while (low <= high);
        
        if (low > high)
    }
}
