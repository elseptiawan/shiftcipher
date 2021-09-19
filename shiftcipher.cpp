/*
Nama    : Elshandi Septiawan
NPM     : 140810190050
Kelas   : B
Program C++ Enkripsi dan Dekripsi Metode Shift Chiper
*/

#include <iostream>
using namespace std;

string enkripsi(string teks, int k);
string dekripsi(string teks, int k);

int main()
{
    string teks;
    int k;
    cout << "Plainteks : ";
    cin >> teks;
    cout << "K : ";
    cin >> k;
    teks = enkripsi(teks, k);
    cout << "Chiperteks\t: " << teks << endl;
    teks = dekripsi(teks, k);
    cout << "Plainteks\t: " << teks;
}

string enkripsi(string teks, int k)
{
    string hasil = "";

    for (int i = 0; i < teks.length(); i++)
    {
        if (isupper(teks[i]))
        {
            hasil += char(int(teks[i] - 65 + k) % 26 + 65);
        }
        else
        {
            hasil += char(int(teks[i] - 97 + k) % 26 + 97);
        }
    }
    return hasil;
}

string dekripsi(string teks, int k)
{
    string hasil = "";

    for (int i = 0; i < teks.length(); i++)
    {
        if (isupper(teks[i]))
        {
            hasil += char(int(teks[i] - 65 - k + 26) % 26 + 65);
        }
        else
        {
            hasil += char(int(teks[i] - 97 - k + 26) % 26 + 97);
        }
    }
    return hasil;
}