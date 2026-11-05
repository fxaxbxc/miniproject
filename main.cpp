#include <iostream>
#include <string>
#include <limits>

using namespace std;

const int MAX_KEGIATAN = 100;

string namaKegiatan[MAX_KEGIATAN];
string waktuKegiatan[MAX_KEGIATAN];
string HariKegiatan[MAX_KEGIATAN];
int statusKegiatan[MAX_KEGIATAN];

int jumlahKegiatan = 0;

// Fungsi menampilkan judul
void tampilkanJudul(string judul) {
    cout << "\n==========================================" << endl;
    cout << "  " << judul << endl;
    cout << "==========================================" << endl;
}

// Fungsi menampilkan menu utama
void tampilkanMenu() {
    tampilkanJudul("DAILY ACTIVITY PLANNER");