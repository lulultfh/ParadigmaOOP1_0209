#ifndef MANUSIA_H
#define MANUSIA_h
using namespace std;

class manusia {
    public:
    string nama;
    jantung varJantung;

    manusia(string pNama): name(pName) {
        cout << name << "hidup\n";

    }
    ~manusia() {
        cout << name << "mati\n";

    }
}
#endif