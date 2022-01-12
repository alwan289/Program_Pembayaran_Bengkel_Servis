/*
	Nama		 : Alwan Munawar
	NIM			 : 2130511072
	Kelas		 : TI 1B
	Nama Program : Program Menghitung Pembayaran Bengkel Servis
*/

#include <iostream>
using namespace std;
#define utama 20000
const int kurang = 3000;

void supra_bapack(){
    string jasa[5]={"Fastrack(Servis cepat)","Booking","Light Servis","Heavy Repair","Claim Servis"};
    int harga[5]={200000,300000,100000,400000,500000};
    int kode;
    char pilihan,diskon,pelayanan,x;
    float jumlah,bayar,kembali,total,totalsemua;

    cout << "" << endl;
    cout << "                                     *=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*                         " << endl;
    cout << "                                     ||                                       ||                         " << endl;
    cout << "                                     ||           AHASS SUPRA BAPACK          ||                         " << endl;
    cout << "                                     ||              (SUKABUMI)               ||                         " << endl;
    cout << "                                     ||         Ora Supra Ora Mesra <3        ||                         " << endl;
    cout << "                                     ||                                       ||                         " << endl;
    cout << "                                     *=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*                         " << endl;
    cout << "" << endl;
    cout << "                                       ***PILIH PELAYANAN YANG ANDA INGINKAN***                          " << endl;
    cout << "" << endl;
    cout << "                                                 1.Fastrack(Servis cepat)                                " << endl;
    cout << "                                                 2.Booking                                               " << endl;
    cout << "                                                 3.Light Servis                                          " << endl;
    cout << "                                                 4.Heavy Repair                                          " << endl;
    cout << "                                                 5.Claim Servis                                          " << endl;
    cout << "" << endl;

        do{
            cout << "Pilih Pelayanan : ";
            cin >> kode;

            cout << "Jasa : " << jasa[kode-1] << endl;
            cout << "Harga : Rp " << harga[kode-1] << endl;

        if (kode==4 || kode==5){
            cout << "Diskon : Rp 7000" << endl;
            total = total + (harga[kode-1] - 7000);
        }else if (kode==1 || kode==2 || kode==3){
            cout << "Diskon : Rp 5000" << endl;
            total = total + (harga[kode-1] - 5000);
        }

        cout << "Apakah Ada Transaksi Lain ? ( Y / T ) : ";
        cin >> pilihan;

        }while(pilihan=='Y' || pilihan== 'y');
        cout << "Apakah Anda Puas Dengan Pelayanan Kami ? ( Y / T )";
        cin >> pelayanan;
        system ("cls");
        if (diskon=='Y' || pilihan== 'y'){
            totalsemua = total - kurang;
        }else{
            totalsemua = total;
        }

        cout << "Total Pembayaran : Rp" << totalsemua << endl;
        cout << "Bayar            : Rp";
        cin >> bayar;
        kembali = bayar - totalsemua;
        cout << "Kembali          : Rp" << kembali << endl;

        cout << "" << endl;
        cout << "" << endl;
    for (x=0; x<3; x++){
        cout << "THANKS FOR YOUR COMING!" << endl;
        cout << "SEE YOU NEXT TIME!" << endl;
        }
}

int main(){
        supra_bapack();
        return 0;
}
