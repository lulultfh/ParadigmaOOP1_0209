#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
    const int id;  //variabel1 
    string nama;    //variabel2
    float nilai;    //variabel3
public:
    mahasiswa(int pId, string pNama, float pNilai) :id(pId), nama(pNama), nilai(pNilai) {
       //member definition 
    }
    ~mahasiswa() {
        cout << "Id     = " << id << endl;
        cout << "Nama   = " << nama << endl;
        cout << "Nilai  = " << nilai << endl;
    }
};