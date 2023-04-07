#include <iostream>
#include <string>

using namespace std;

struct Biodata
{
	int nim;
	string nama;
	string alamat;
	int umur;
}
biodata = { 22114870, "Kevin", "Jl. Mataram Bumi Sejahtera No. 93", 19 };

int main()
{
	cout << "NIM: " << biodata.nim << endl;
	cout << "Nama: " << biodata.nama << endl;
	cout << "Alamat: " << biodata.alamat << endl;
	cout << "Umur: " << biodata.umur << endl;

	return 0;
}