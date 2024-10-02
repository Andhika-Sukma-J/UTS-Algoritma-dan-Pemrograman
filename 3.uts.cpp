#include <iostream>
using namespace std;

int main()
{
    int pilihan;
    double operand1, operand2, hasil;

    while (true)
    {
        cout << "Pilih operasi matematika:" << endl;
        cout << "1. Tambah" << endl;
        cout << "2. Kurang" << endl;
        cout << "3. Kali" << endl;
        cout << "4. Bagi" << endl;
        cout << "5. Keluar" << endl;
        cout << "Masukkan pilihan (1-5): ";
        cin >> pilihan;

        if (pilihan == 5)
        {
            cout << "Terima kasih!" << endl;
            break;
        }

        cout << "Masukkan operand 1: ";
        cin >> operand1;
        cout << "Masukkan operand 2: ";
        cin >> operand2;

        switch (pilihan)
        {
        case 1:
            hasil = operand1 + operand2;
            cout << "Hasil dari Tambah untuk " << operand1 << " dan " << operand2 << " adalah " << hasil << endl;
            break;
        case 2:
            hasil = operand1 - operand2;
            cout << "Hasil dari Kurang untuk " << operand1 << " dan " << operand2 << " adalah " << hasil << endl;
            break;
        case 3:
            hasil = operand1 * operand2;
            cout << "Hasil dari Kali untuk " << operand1 << " dan " << operand2 << " adalah " << hasil << endl;
            break;
        case 4:
            if (operand2 != 0)
            {
                hasil = operand1 / operand2;
                cout << "Hasil dari Bagi untuk " << operand1 << " dan " << operand2 << " adalah " << hasil << endl;
            }
            else
            {
                cout << "Tidak bisa dibagi dengan nol." << endl;
            }
            break;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    }
    return 0;
}
