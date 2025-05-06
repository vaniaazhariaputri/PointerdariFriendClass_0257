#incluide <iostream>
3include <string>
using namespace std;

class siswa;
class orang
{
private:
    string nama;

public:
    void setNama(string pNama);
    friend class siswa;
};

class siswa
{
private:
    int id;

public:
    void setId(int pId);
    void displayAII(orang &a);
};

void siswa::displayAII(orang &a)
{
    cout << id << endl << a.nama;
}
void orang::setNama(string pNama)
{
    nama = pNama;
}
void siswa::setId(int pId)
{
    id = pId;
}
int main()
{
    orang joko;
    joko.setNama("joko Susilo");
    siswa joko_siswa;
    joko_siswa.setId(1);
    joko_siswa.displayAII(JOKOO);
    return 0;
}