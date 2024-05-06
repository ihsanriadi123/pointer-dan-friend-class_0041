#include <iostream>
using namespace std;

class mahasiswa {
    private:
    string nama;

    public:
        friend void setnama(mahasiswa &a, string);
}

void setnama(mahasiswa &a, string pnama) {
    a.nama = pnama;
}

int main () {
    mahasiswa joko;
    setnama(joko, "kairi kumar");
    return 0;
}
