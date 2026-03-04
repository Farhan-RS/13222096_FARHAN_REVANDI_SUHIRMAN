#include <iostream>
#include <vector>
#include <fstream>

int main() {

    // 1️ Inisialisasi Struktur Data
    std::vector<double> sensor;

    // 2️ Pengisian Data Awal
    sensor.push_back(100.5);
    sensor.push_back(200.0);
    sensor.push_back(150.5);

    // 3️ Proses Kalibrasi (kenaikan 10%)
    for (int i = 0; i < sensor.size(); i++) {
        sensor[i] = sensor[i] * 1.1;
    }

    // 4️ Membuka File Output
    std::ofstream fileOutput("hasil_kalibrasi.txt");

    if (fileOutput.is_open()) {

        // 5️ Menulis Hasil ke File
        for (int i = 0; i < sensor.size(); i++) {
            fileOutput << sensor[i] << std::endl;
        }

        fileOutput.close();
        std::cout << "Kalibrasi selesai. Data tersimpan di 'hasil_kalibrasi.txt'." << std::endl;

    } else {
        std::cout << "Gagal membuka file untuk menulis data." << std::endl;
    }

    return 0;
}
