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
