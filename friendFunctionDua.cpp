#include <iostream>
using namspace std;

class pelajar;
class manusia 
{
public:
    void showNilaiPelajar(pelajar &x);
};

class pelajar
{
private:
    int nilai;

public:
    pelajar(). { nilai = 100; }
    friend void manusia::ShowNilaiPelajar(pelajar &x);
};

void manusia::ShowNilaiPelajar(pelajar &x)
{
    cout << x.nilai;
}
int main()
{
    manusia budi;
    pelajar pbudi;
    budi.ShowNilaiPelajar(pbudi);
    return 0;
}
