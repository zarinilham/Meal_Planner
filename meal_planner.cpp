#include <iostream>
#include <vector>
using namespace std;

int main() {
int budget, protein, jumlah_waktu;

cout << "Berapa budget yang Anda miliki? ";
cin >> budget;

cout << "Berapa banyak protein yang Anda butuhkan (dalam gram)? ";
cin >> protein;

cout << "Berapa kali Anda ingin makan dalam sehari? ";
cin >> jumlah_waktu;

//Menampilkan menu makanan
cout << "Silahkan pilih menu makanan anda:" << endl;
cout << "1. Ayam Geprek (250g protein) " << endl;
cout << "Harga: Rp 15.000" << endl;

cout << "2. Nasi Goreng (10g protein) " << endl;
cout << "Harga: Rp 12.000" << endl;

cout << "3. Indomie (7g protein)" << endl;
cout << "Harga: Rp 3.000" << endl;

cout << "4. Nasi Ampera (250g protein)" << endl;
cout << "Harga: Rp 15.000" << endl;

cout << "5. Sarden (25g protein)" << endl;
cout << "Harga: Rp 21.000" << endl;

cout << "6. Lontong (5g protein)" << endl;
cout << "Harga: Rp 12.000" << endl;

cout << "7. Nasi Uduk (10g protein)" << endl;
cout << "Harga: Rp 12.000" << endl;

cout << "8. Mie Ayam (20g protein)" << endl;
cout << "Harga: Rp 17.000" << endl;

vector<int> pilihan(jumlah_waktu);

//memilih menu makanan
for (int i = 0; i < jumlah_waktu; i++) {
    cout << "Masukkan pilihan menu makanan ke-" << (i + 1) << ": ";
    cin >> pilihan[i];
}

//Menghitung Budget
    int harga_AyamGeprek = 15000;
    int harga_NasiGoreng = 12000;
    int harga_Indomie = 3000;
    int harga_NasiAmpera = 15000;
    int harga_Sarden = 21000;
    int harga_Lontong = 12000;
    int harga_NasiUduk = 12000;
    int harga_MieAyam = 17000;

    for (int i = 0; i < jumlah_waktu; i++) {
        if (pilihan[i] == 1) {
            budget -= harga_AyamGeprek;
        } else if (pilihan[i] == 2) {
            budget -= harga_NasiGoreng;
        } else if (pilihan[i] == 3) {
            budget -= harga_Indomie;
        } else if (pilihan[i] == 4) {
            budget -= harga_NasiAmpera;
        } else if (pilihan[i] == 5) {
            budget -= harga_Sarden;
        } else if (pilihan[i] == 6) {
            budget -= harga_Lontong;
        } else if (pilihan[i] == 7) {
            budget -= harga_NasiUduk;
        } else if (pilihan[i] == 8) {
            budget -= harga_MieAyam;
        }else {
            cout << "Pilihan menu tidak valid." << endl;
        }
    }

    if (budget < 0) {
        cout << "Maaf, budget Anda tidak cukup untuk membeli semua menu yang dipilih." << endl;

        system("pause");
        return 0;

    } else {
        
   
        

//menghitung total harga makanan

int total_harga = 0;
for(int i = 0; i < jumlah_waktu; i++) {
    if (pilihan[i] == 1) {
        total_harga += harga_AyamGeprek;
    } else if (pilihan[i] == 2) {
        total_harga += harga_NasiGoreng;
    } else if (pilihan[i] == 3) {
        total_harga += harga_Indomie;
    } else if (pilihan[i] == 4) {
        total_harga += harga_NasiAmpera;
    } else if (pilihan[i] == 5) {
        total_harga += harga_Sarden;
    } else if (pilihan[i] == 6) {
        total_harga += harga_Lontong;
    } else if (pilihan[i] == 7) {
        total_harga += harga_NasiUduk;
    } else if (pilihan[i] == 8) {
        total_harga += harga_MieAyam;
    }
}


//Menghitung Protein
int AyamGeprek = 250;
int NasiGoreng = 10;
int Indomie = 7;
int NasiAmpera = 250;
int Sarden = 25;
int Lontong = 5;
int NasiUduk = 10;
int MieAyam = 20;

    int total_protein = 0;
for (int i = 0; i < jumlah_waktu; i++) {
    if (pilihan[i] == 1) {
        total_protein += AyamGeprek;
    } else if (pilihan[i] == 2) {
        total_protein += NasiGoreng;
    } else if (pilihan[i] == 3) {
        total_protein += Indomie;
    } else if (pilihan[i] == 4) {
        total_protein += NasiAmpera;
    } else if (pilihan[i] == 5) {
        total_protein += Sarden;
    } else if (pilihan[i] == 6) {
        total_protein += Lontong;
    } else if (pilihan[i] == 7) {
        total_protein += NasiUduk;
    } else if (pilihan[i] == 8) {
        total_protein += MieAyam;
    } else {
        cout << "Pilihan menu tidak valid." << endl;
    }
}





//Menghitung kalori
int kalori_AyamGeprek = 500;
int kalori_NasiGoreng = 400;
int kalori_Indomie = 350;
int kalori_NasiAmpera = 600;
int kalori_Sarden = 300;
int kalori_Lontong = 250;
int kalori_NasiUduk = 450;
int kalori_MieAyam = 550;

int total_kalori = 0;
for(int i = 0; i < jumlah_waktu; i++) {
    if (pilihan[i] == 1) {
        total_kalori += kalori_AyamGeprek;
    } else if (pilihan[i] == 2) {
        total_kalori += kalori_NasiGoreng;
    } else if (pilihan[i] == 3) {
        total_kalori += kalori_Indomie;
    } else if (pilihan[i] == 4) {
        total_kalori += kalori_NasiAmpera;
    } else if (pilihan[i] == 5) {
        total_kalori += kalori_Sarden;
    } else if (pilihan[i] == 6) {
        total_kalori += kalori_Lontong;
    } else if (pilihan[i] == 7) {
        total_kalori += kalori_NasiUduk;
    } else if (pilihan[i] == 8) {
        total_kalori += kalori_MieAyam;
    }
}

for (int i = 0; i < jumlah_waktu; i++) {
    
    }


cout << "Total harga makanan yang Anda pilih: Rp " << total_harga << endl;
cout << "Total protein yang Anda konsumsi: " << total_protein << " gram" << endl;
cout << "Total kalori yang Anda konsumsi: " << total_kalori << " kalori" << endl;


    if (total_protein >= protein && total_kalori <= 2000) {
        cout << "Menu makanan yang Anda pilih sesuai dengan kebutuhan nutrisi Anda." << endl;
    } else {
        cout << "Menu makanan yang Anda pilih tidak sesuai dengan kebutuhan nutrisi Anda." << endl;
    }

            }    

    system("pause");
    return 0;
}
