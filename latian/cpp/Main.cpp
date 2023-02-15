#include <bits/stdc++.h>
#include "ListMhs.cpp"

using namespace std;

int main()
{
    ListMhs mhs;
    int i, n = 0, tipe;
    string nama;
    string nim;
    string prodi;
    string fakultas;

    list<ListMhs> dfrmhs;

    cout << "Jumlah Data yang di tambah : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        ListMhs temp;
        cout << "Nama : ";
        cin >> nama;
        cout << "NIM : ";
        cin >> nim;
        cout << "Prodi : ";
        cin >> prodi;
        cout << "Fakultas : ";
        cin >> fakultas;

        temp.setNama(nama);
        temp.setNim(nim);
        temp.setProdi(prodi);
        temp.setFakultas(fakultas);

        dfrmhs.push_back(temp);
    }
    cout << "Data Mahasiswa: " << '\n';
    for (list<ListMhs>::iterator add = dfrmhs.begin(); add != dfrmhs.end(); add++)
    {
        cout << "| " << add->getNama() << " | " << add->getNim() << " | " << add->getProdi() << " | " << add->getFakultas() << " |" << '\n';
    }

    return 0;
}