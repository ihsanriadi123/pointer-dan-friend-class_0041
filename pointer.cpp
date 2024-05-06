#include <iostream>
using namespace std;

class mahasiswa {
    public:
    int nim;
    void shownim() {
        cout <<"No Induk = " << nim << endl;
    }
};


int main() {
    mahasiswa mhs(1);
    mhs.shownim();

    mahasiswa &refmhs = mhs;
    refmhs.nim = 2;
    mhs.shownim();


    mahasiswa *pmhs = &mhs;
    pmhs ->nim = 3;
    pmhs ->shownim();
    return 0;
}
