#include<iostream>
#include<string>
using namespace std;

int main() {

	int gajiPokok[] = {500,750,1000,1500,1750};
	
	int tunjangan[] = {450,300,375,200};
	
	string nama;
	char golongan,kodeJabatan;
	int pinjaman;
	
	cout << "Nama Karyawan: ";
	getline(cin,nama);
	
	do {
		cout << "Golongan (I, II, III, IV, V): ";
		cin >> golongan;
   } while (golongan < 'I' || golongan > 'V');
   
   do {
   	  cout << "Kode Jabatan (D, S, W, S): ";
   	  cin >> kodeJabatan;
   } while (kodeJabatan < 'D' || kodeJabatan > 'S');
   
   cout << "Pinjaman: ";
   while (!(cin >> pinjaman)) {
       cout << "Masukkan nilai numerik untuk pinjaman: ";
       cin.clear();
       cin.ignore(100, '\n');       
   
   }
   
   int indeksGolongan = golongan - 'I';
   int indeksJabatan = kodeJabatan -'D';
   
   int gajiPokokRupiah = gajiPokok[indeksGolongan];
   int tunjanganRupiah = tunjangan[indeksJabatan];
   int pajak = 0.5 * gajiPokokRupiah;
   int totalGajiKotor = gajiPokokRupiah + tunjanganRupiah;
   int totalGajiBersih = totalGajiKotor - pinjaman - pajak;
   
   cout << "\nSlip Gaji\n";
   cout << "Nama: " << nama << endl; 
   cout << "Golongan: " << golongan << endl;
   cout << "Kode Jabatan: " << KodeJabatan << endl;
   cout << "Gaji Pokok: Rp " << gajiPokokRupiah << ",00" << endl;
   cout << "Tunjangan: Rp " << tunjanganRupiah << ",00" << endl;
   cout << "Pinjaman; RP " <<pinjaman << endl;
   cout << "Pajak (5%): Rp " << pajak << ",00" << endl;
   cout << "Total Gaji Kotor: Rp " << totalGajiKotor << ",00" << endl;
   cout << "Total Gaji Kotor: Rp " << totalGajiBersih << ",00" << endl;
   
   return 0;
   
}