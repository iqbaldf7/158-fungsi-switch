#include <iostream>
using namespace std;

int bilSatu, bilDua;

void input()
{
    cout << "Masukan Bilangan pertama = ";
    cin >> bilSatu;
    cout << "Masukan Bilangan Kedua = ";
    cin >> bilDua;
}

float penjumlahan(float a, float b)
{
    return a + b;
}

float pembagian(float a, float b)
{
    return a / b;
}

float pengurangan(float a, float b)
{
    return a - b;
}

float perkalian(float a, float b)
{
    return a * b;
}


int main()
{
    int pilihan;
    do
    {
         cout << " =========================" << endl;
        cout << "MENU" << endl;
        cout << "1. penjumlahan " << endl;
        cout << "2. pembagian " << endl;
        cout << "3. perkalian " << endl;
        cout << "4. pengurangan " << endl;
        cout << "5. Exit" << endl;
        cout << "Masukan pilihan 1/2/3/4/5 =";
        cin >> pilihan;

          switch (pilihan)
        {
        case 1:
            input();
            cout << "Hasil penjumlahan = " << penjumlahan(bilSatu, bilDua) << endl;
            break;
        case 2:
            input();
            cout << "Hasil pembagian =  " << pembagian(bilSatu, bilDua) << endl;
            break;