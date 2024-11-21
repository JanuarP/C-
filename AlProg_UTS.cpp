#include <iostream>
#include <string>
using namespace std;

int main(){
    string username, password;
    bool loginPage = false;

    cout << "===========Login============" << endl;
		cout << "Masukan Username: ";
        cin >> username;
        cout << "Masukan Password anda: ";
        cin >> password;
    while (loginPage)
    { if (username =="Januar"){
            if (password =="januari01"){
                cout << "Selamat berhasil login" << endl;
                loginPage=true;
            } else {
                cout << "\nPassword anda salah" << endl;
            }
        } else {
            cout << "\nUsername anda salah" << endl;
        }
    }
	cout << endl;
	
	int paketSpeed, notaPembayaran;
    int pilihan;

    //Pemilihan durasi Paket Internet
	cout << "Durasi Langganan Internet" << endl;
    cout << "1. Paket Langganan internet 1 bulan" << endl;
    cout << "2. Paket langganan internet 3 bulan" << endl;
    cout << "3. Paket Langganan internet 6 bulan" << endl;
    cout << "4. Histori pembayaran" << endl;
    cout << "_______________________________________" << endl;
    cout << "Pilihlah angka 1-4 = " ;
    cin >> pilihan;
	cout << endl;

    // Pemilihan kecepatan internet
	switch(pilihan){
		case 1:
		cout << "1. Paket speed 10Mb/s + Modem Wifi" << endl;
        cout << "2. Paket speed 25Mb/s + Modem Wifi" << endl;
        cout << "3. Paket speed 50Mb/s + Modem Wifi" << endl;
        cout << "***************************************" << endl;
        cout << "Silahkan pilih angkanya 1-3= ";
        cin >> paketSpeed;
		break;
		
		case 2:
		cout << "1. Paket speed 10Mb/s + Modem Wifi" << endl;
        cout << "2. Paket speed 25Mb/s + Modem Wifi" << endl;
        cout << "3. Paket speed 50Mb/s + Modem Wifi" << endl;
        cout << "***************************************" << endl;
        cout << "Silahkan pilih angkanya 1-3= ";
        cin >> paketSpeed;
		break;
		
		case 3:
		cout << "1. Paket speed 10Mb/s + Modem Wifi" << endl;
        cout << "2. Paket speed 25Mb/s + Modem Wifi" << endl;
        cout << "3. Paket speed 50Mb/s + Modem Wifi" << endl;
        cout << "***************************************" << endl;
        cout << "Silahkan pilih angkanya 1-3= ";
        cin >> paketSpeed;
		break;
		default:
		cout << "Pilihan tidak valid" << endl;
	}
}