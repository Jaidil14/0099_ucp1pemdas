/*
1.	int Bilangan
	string Nama
	double Nilai

2.	if (Rerata >= 70){
		status = "Lulus";
	}

    Digunakan untuk mengecek kondisi rerata, jika terpenuhi maka dinyatakan lulus.

3.	struct Mahasiswa {
        string Nama;
        int Nilai;
	};

    Digunakan untuk menyimpan variabel dengan tipe data yang berbeda.

4.	- Prosedur
    void Input(){
    cout << "Masukkan Nama: ";
    cin >> Nama;
    }

    Digunakan untuk melakukan input atau memasukkan dan menyimpan data ke dalam sistem.
    
    - Fungsi
    int Harga(){
        return (jumlahBarang * hargaBarang);
    }

    Digunakan untuk mengembalikan nilai, atau melakukan perhitungan.

5.	Mahasiswa[5]
    for(int i = 0; i < 5; i++){
        cout << "Masukkan Nama: ";
        cin >> Mahasiswa[i];
    }

    Digunakan untuk melakukan perulangan input nama Mahasiswa.
*/

#include <iostream>
using namespace std;

struct Kandidat {
	string Nama;
	int NilMtk;
	int NilBing;
	string status;
};

Kandidat kand[20];

void Input() {
		for (int i = 0; i < 3; i++) {
			cout << "Masukkan Nama: ";
			cin >> kand[i].Nama;
			cout << "Masukkan Nilai Matematika: ";
			cin >> kand[i].NilMtk;
			cout << "Masukkan Nilai Bahasa Inggris: ";
			cin >> kand[i].NilBing;
		}
}

int Rerata(int a, int b) {
	for (int i = 0; i < 3; i++) {	
	return (a + b) / 2;		
	}
}

void Display() {
	for (int i = 0; i < 3; i++) {
        if (Rerata(kand[i].NilMtk, kand[i].NilBing) >= 70 || kand[i].NilMtk >= 80){
            kand[i].status = "Diterima";
        }
        else {
            kand[i].status = "Ditolak    ";
        }
        cout << "Nama: " << "\t" << "Status: " << "\t" << "Rerata: " << endl;
		cout << kand[i].Nama << "\t" << kand[i].status << "\t" << Rerata(kand[i].NilMtk, kand[i].NilBing) << endl;
	}
}

int main() {
	char pilihan;
    do{
	Input();
	Display();
    cout << "Apakah anda ingin mengulang kembali? ";
    cin >> pilihan;
    system("cls");
    }while (pilihan == 'y' || pilihan == 'Y');
    return 0;
}