#include <iostream>
using namespace std;

class RekeningBank {
private:
    double saldo;

public:
    // Constructor untuk mengisi saldo awal
    RekeningBank(double saldoAwal) {
        saldo = saldoAwal;
    }

    // Method untuk setor uang
    void setor(double jumlah) {
        saldo += jumlah;
        cout << "Setor berhasil. Saldo sekarang: " << saldo << endl;
    }

    // Method untuk tarik uang
    void tarik(double jumlah) {
        if (jumlah > saldo) {
            cout << "Penarikan Gagal" << endl;
        } else {
            saldo -= jumlah;
            cout << "Penarikan berhasil. Sisa saldo: " << saldo << endl;
        }
    }
};

int main() {
    // Membuat objek dengan saldo awal 1000
    RekeningBank rekening1(1000);

    rekening1.setor(500);
    rekening1.tarik(300);
    rekening1.tarik(1500);

    return 0;
}
