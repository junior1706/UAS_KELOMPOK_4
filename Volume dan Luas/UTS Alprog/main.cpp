#include <iostream>
const float phi = 3.14;
using namespace std;

int main()
{
	cout << "\t|-----------------------------------------------------|\t" << endl;
	cout << "\t|   Program Menghitung Volume dan Luas Bangun Ruang   |\t" << endl;
	cout << "\t|-----------------------------------------------------|\t" << endl;
	cout << endl;

	int pilihan_, a, b, c, d;
	float volume, luas;
	char ulangi;

	do {

		cout << "\t|-----------------------------------------------------|\t" << endl;
		cout << "\t|			Pilih Menu		      |" << endl;
		cout << "\t|-----------------------------------------------------|\t" << endl;
		cout << "\t|1) Bola					      |\t" << endl;
		cout << "\t|2) Balok					      |\t" << endl;
		cout << "\t|3) Kubus					      |\t" << endl;
		cout << "\t|4) Tabung					      |\t" << endl;
		cout << "\t|5) Kerucut					      |\t" << endl;
		cout << "\t|6) Limas Segi Empat		   		      |\t" << endl;
		cout << "\t|7) Prisma Tegak Segitiga			      |\t" << endl;
		cout << "\t|8) keluar					      |\t" << endl;
		cout << "\t|-----------------------------------------------------|\t" << endl;
		cout << "\tMasukan angka pilihan : ";
		cin >> pilihan_;
		cout << endl;

		switch (pilihan_)
		{
		case 1:
			cout << "\t			|--------|" << endl;
			cout << "\t			|  Bola  |" << endl;
			cout << "\t			|--------|" << endl;
			cout << "\tPanjang jari-jari : ";
			cin >> a;
			cout << "\t-------------------------------------------------------" << endl;
			volume = 4 / 3 * phi * a * a * a;
			luas = 4 * phi * a * a;
			cout << "\tVolume Lingkaran = " << volume << endl;
			cout << "\tLuas Permukaan = " << luas << endl;
			cout << "\t-------------------------------------------------------" << endl;
			break;

		case 2:
			cout << "\t			|---------|" << endl;
			cout << "\t			|  Balok  |" << endl;
			cout << "\t			|---------|" << endl;
			cout << "\tPanjang Balok : ";
			cin >> a;
			cout << "\tLebar Balok   : ";
			cin >> b;
			cout << "\tTinggi Balok  : ";
			cin >> c;
			cout << "\t-------------------------------------------------------" << endl;
			volume = a * b * c;
			luas = 2 * (a * b + b * c + a * c);
			cout << "\tVolume Balok = " << volume << endl;
			cout << "\tLuas Balok = " << luas << endl;
			cout << "\t-------------------------------------------------------" << endl;
			break;

		case 3:
			cout << "\t			|---------|" << endl;
			cout << "\t			|  Kubus  |" << endl;
			cout << "\t			|---------|" << endl;
			cout << "\tPanjang Rusuk Kubus : ";
			cin >> a;
			cout << "\t-------------------------------------------------------" << endl;
			volume = a * a * a;
			luas = a * a * 6;
			cout << "\tVolume Kubus = " << volume << endl;
			cout << "\tLuas Kubus = " << luas << endl;
			cout << "\t-------------------------------------------------------" << endl;
			break;

		case 4:
			cout << "\t		       |----------|" << endl;
			cout << "\t		       |  Tabung  |" << endl;
			cout << "\t		       |----------|" << endl;
			cout << "\tPanjang jari-jari Alas Tabung : ";
			cin >> a;
			cout << "\tTinggi Tabung                 : ";
			cin >> b;
			cout << "\t-------------------------------------------------------" << endl;
			volume = phi * a * a * b;
			luas = (phi * a * 2) * (a * b);
			cout << "\tVolume Tabung = " << volume << endl;
			cout << "\tLuas Tabung = " << luas << endl;
			cout << "\t-------------------------------------------------------" << endl;
			break;

		case 5:
			cout << "\t		      |-----------|" << endl;
			cout << "\t		      |  Kerucut  |" << endl;
			cout << "\t		      |-----------|" << endl;
			cout << "\tPanjang jari-jari Alas Kerucut : ";
			cin >> a;
			cout << "\tTinggi Kerucut                 : ";
			cin >> b;
			cout << "\tGaris Pelukis Kerucut          : ";
			cin >> c;
			cout << "\t-------------------------------------------------------" << endl;
			volume = (phi * a * a * b) / 3;
			luas = (phi * a * (a = c));
			cout << "\tVolume Kerucut = " << volume << endl;
			cout << "\tLuas Kerucut = " << luas << endl;
			cout << "\t-------------------------------------------------------" << endl;
			break;

		case 6:
			cout << "\t		 |--------------------|" << endl;
			cout << "\t		 |  Limas Segi Empat  |" << endl;
			cout << "\t		 |--------------------|" << endl;
			cout << "\tPanjang Alas Limas : ";
			cin >> a;
			cout << "\tLebar Limas        : ";
			cin >> b;
			cout << "\tTinggi Limas       : ";
			cin >> c;
			cout << "\t-------------------------------------------------------" << endl;
			volume = (a * b * c * 1 / 3);
			luas = ((a + b) * c) + (a * b);
			cout << "\tVolume Limas Segi Empat = " << volume << endl;
			cout << "\tLuas Limas Segi Empat = " << luas << endl;
			cout << "\t-------------------------------------------------------" << endl;
			break;

		case 7:
			cout << "\t		|-------------------------|" << endl;
			cout << "\t		|  Prisma Tegak Segitiga  |" << endl;
			cout << "\t		|-------------------------|" << endl;
			cout << "\tAlas Segitiga Prisma               : ";
			cin >> a;
			cout << "\tTinggi Segitiga Alas Prisma        : ";
			cin >> b;
			cout << "\tSisi Lengkung Segitiga Alas Prisma : ";
			cin >> c;
			cout << "\tTinggi Prisma Tegak                : ";
			cin >> d;
			cout << "\t-------------------------------------------------------" << endl;
			volume = (a * b / 2) * d;
			luas = (2 * (a * b / 2)) + ((a + b + c) * d);
			cout << "\tVolume Prisma Tegak Segitiga = " << volume << endl;
			cout << "\tLuas Prisma Tegak Segitiga = " << luas << endl;
			cout << "\t-------------------------------------------------------" << endl;
			break;

		case 8:
			cout << "\tSelesai ^_^" << endl;
			pilihan_ = 'n';
			break;

		default:
			cout << "\tPilihan Menu Yang Anda Masukan Salah" << endl;
			cout << "\t-------------------------------------------------------" << endl;
			break;
		}
		if (pilihan_ != 'n') {
			cout << "\tApakah anda akan mengulangi pilihan [y/n] ? ";
			cin >> ulangi;
		}

	} while (pilihan_ != 'n' && (ulangi == 'y' || ulangi == 'Y'));

	cout << endl;
	system("pause");

	return 0;
}
