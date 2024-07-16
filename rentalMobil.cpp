// memilih mobil
// sopir atau tidak
// Sewa berapa hari

// Aturan :
// Jika melebihi batas waktu, denda 20.000/jam

#include <iostream>
#include <string>


using namespace std;
    int jumlahPelanggan, lamaRental;
    double denda;
    char pilihMobil, isSopir;

    struct data {
        string nik, nama, alamat;
        int noHP;
    };
    data pelanggan[5];

    
    void cetak(int jumlahPelanggan, string nik, string nama, string alamat, int biayaMobil, double denda) {

        int totalBayar = biayaMobil + denda;

        for ( int i = 1; i <= jumlahPelanggan; i++)
        {
            cout << "Data Pelanggan "<< i <<"\n";
            // cout << "Mobil yang akan dirental " <<" ";

            cout << "NIK            : "<< nik[i] <<" \n";
            cout << "Nama           : "<< nama[i] <<" \n";
            cout << "Alamat         : "<< alamat[i] <<" \n";
            cout << "Biaya Mobil    : Rp "<< biayaMobil <<" \n";
            cout << "Denda          : Rp "<< denda <<" \n";
            cout << "Total Biaya    : Rp "<< totalBayar <<" \n";
        }

    }



     cekDenda(int lamaRental) {
        if ( lamaRental >= 5 ) // 5 > 5
        {
            double toMenit = lamaRental / 24;
            denda = 20000 * toMenit;
        }
        else {
            denda = 0;
        }
    }

void kelolaData(int jumlahPelanggan, char pilihMobil, int lamaRental, char isSopir, string nik, string nama, string alamat) {

    if ( pilihMobil == 'A' || pilihMobil == 'a') // Avanza
    {
        string namaMobil = "Avanza";
        if (isSopir == 'Y' || isSopir == 'y')
        {
            int biayaMobil = 700000 * lamaRental;
            cekDenda(lamaRental);
            cetak(jumlahPelanggan, nik, nama, alamat, biayaMobil, denda);
        } else {
            int biayaMobil = 500000 * lamaRental;
            cekDenda(lamaRental);
            cetak(jumlahPelanggan, nik, nama, alamat, biayaMobil, denda);
        }
    } else if( pilihMobil == 'B' || pilihMobil == 'b' ) {
        string namaMobil = "Ertiga";
        if (isSopir == 'Y' || isSopir == 'y')
        {
            int biayaMobil = 800000 * lamaRental;
            cekDenda(lamaRental);
            cetak(jumlahPelanggan, nik, nama, alamat, biayaMobil, denda);
        } else {
            int biayaMobil = 600000 * lamaRental;
            cekDenda(lamaRental);
            cetak(jumlahPelanggan, nik, nama, alamat, biayaMobil, denda);
        }
    } else if( pilihMobil == 'C' || pilihMobil == 'c' ) {
        string namaMobil = "Ertiga";
        if (isSopir == 'Y' || isSopir == 'y')
        {
            int biayaMobil = 1000000 * lamaRental;
            cekDenda(lamaRental);
            cetak(jumlahPelanggan, nik, nama, alamat, biayaMobil, denda);
        } else {
            int biayaMobil = 700000 * lamaRental;
            cekDenda(lamaRental);
            cetak(jumlahPelanggan, nik, nama, alamat, biayaMobil, denda);
        }
    }

}

int main() {

    cout << "Ingin mengolah berapa data : ";
    cin >> jumlahPelanggan;
    cout << "\n";

     cout << "+================================================================+\n";
    cout << "|                            Daftar Mobil                         |\n";
    cout << "+=================================================================+\n";
    cout << "| A |  M-001  |     Avanza      |    500.000   |  700.000 (Sopir)\n";
    cout << "+=================================================================+\n";
    cout << "| B |  M-002  |     Ertiga      |    600.000   |  800.000 (Sopir)\n";
    cout << "+=================================================================+\n";
    cout << "| C |  M-003  |     Expander    |    700.000   |  1.000.000 (Sopir)\n";
    cout << "+=================================================================+\n";
    cout << "\n";

    for (int i = 1; i <= jumlahPelanggan; i++)
    {
        cout << "Data Pelanggan "<< i <<"\n";
        cout << "Mobil yang akan dirental (A / B / C) : ";
        cin >> pilihMobil;

        cout << "Pakai sopir / tidak (Y/n) : ";
        cin >> isSopir;

        cout << "Rental berapa hari? : ";
        cin >> lamaRental;

        cout << "NIK   : ";
        cin >> pelanggan[i].nik;

        cout << "Nama   : ";
        cin >> pelanggan[i].nama;

        cout << "Alamat   : ";
        cin >> pelanggan[i].alamat;

        cout << "NO HP   : ";
        cin >> pelanggan[i].noHP;
        cout << "\n";

        kelolaData(jumlahPelanggan, pilihMobil, lamaRental, isSopir, pelanggan[i].nik.c_str(), pelanggan[i].nama.c_str(), pelanggan[i].alamat.c_str());
    }

    // for (int i = 1; i <= jumlahPelanggan; i++)
    // {
    //     cout << "Nama : "<< pelanggan[i].nama <<"";
    // }
    

}