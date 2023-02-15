#include <iostream>
#include <string>

using namespace std;

class ListMhs
{
private:
    string nama;
    string nim;
    string prodi;
    string fakultas;

public:
    ListMhs()
    {
        this->nama = "";
        this->nim = "";
        this->prodi = "";
        this->fakultas = "";
    }
    ListMhs(string nama, string nim, string prodi, string fakultas)
    {
        this->nama = nama;
        this->nim = nim;
        this->prodi = prodi;
        this->fakultas = fakultas;
    }

    // set
    void setNama(string nama)
    {
        this->nama = nama;
    }
    void setNim(string nim)
    {
        this->nim = nim;
    }
    void setProdi(string prodi)
    {
        this->prodi = prodi;
    }
    void setFakultas(string fakultas)
    {
        this->fakultas = fakultas;
    }

    // get
    string getNama()
    {
        return this->nama;
    }
    string getNim()
    {
        return this->nim;
    }
    string getProdi()
    {
        return this->prodi;
    }
    string getFakultas()
    {
        return this->fakultas;
    }

    ~ListMhs() {}
};
