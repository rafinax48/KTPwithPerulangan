#include <iostream>
using namespace std;

int main()
{
    int tanggal, rt, rw, bulan, tahun;
    string nik, nama, tempat, kelamin, alamat, kelurahan, kecamatan, agama, status, pekerjaan, kewarganegaraan, berlaku, provinsi, kabupaten, golonganDarah;
    bool nikNomer;

    cout << "==================== Input KTP ====================" << endl;

    cout << "Provinsi\t\t: ";
    getline(cin, provinsi);
    cout << "Kabupaten\t\t: ";
    getline(cin, kabupaten);

    do
    {
        cout << "NIK (16 digit)\t\t: ";
        cin >> nik;

        nikNomer = false;
        for (int i = 0; i < nik.length(); i++)
        {
            if (isdigit(nik[i]))
            {
                nikNomer = true;
                break;
            }
        }

        if (nik.length() != 16 || nikNomer == false)
        {
            cout << "NIK tidak valid, silahkan masukkan NIK yang benar (16 digit angka)!" << endl;
        }

    } while (nik.length() != 16 || nikNomer == false);

    cin.ignore();
    cout << "Nama\t\t\t: ";
    getline(cin, nama);
    cout << "Tempat lahir\t\t: ";
    cin >> tempat;
    cout << "Tanggal lahir (2 digit)\t: ";
    cin >> tanggal;
    cout << "Bulan lahir (2 digit)\t: ";
    cin >> bulan;
    cout << "Tahun lahir (4 digit)\t: ";
    cin >> tahun;
    cin.ignore();
    cout << "Jenis kelamin\t\t: ";
    getline(cin, kelamin);
    cout << "Golongan darah\t\t: ";
    getline(cin, golonganDarah);
    cout << "Dusun/Kampung\t\t: ";
    getline(cin, alamat);
    cout << "RT (3 digit)\t\t: ";
    cin >> rt;
    cout << "RW (3 digit)\t\t: ";
    cin >> rw;
    cin.ignore();
    cout << "Kelurahan/Desa\t\t: ";
    getline(cin, kelurahan);
    cout << "Kecamatan\t\t: ";
    getline(cin, kecamatan);
    cout << "Agama\t\t\t: ";
    getline(cin, agama);
    cout << "Status Perkawinan\t: ";
    getline(cin, status);
    cout << "Pekerjaan\t\t: ";
    getline(cin, pekerjaan);
    cout << "Kewarganegaraan\t\t: ";
    getline(cin, kewarganegaraan);
    cout << "Berlaku hingga\t\t: ";
    getline(cin, berlaku);
    cout << endl;
    system("cls");

    cout << "=============================================================" << endl;
    cout << "\t\tPROVINSI " << provinsi << endl;
    cout << "\t\tKABUPATEN " << kabupaten << endl;
    cout << "=============================================================" << endl;
    cout << "NIK\t\t\t: " << nik << endl;
    cout << "Nama\t\t\t: " << nama << endl;
    cout << "Tempat/Tgl Lahir\t: " << tempat << ", " << tanggal << "-" << bulan << "-" << tahun << endl;
    cout << "Jenis Kelamin\t\t: " << kelamin << "\t\tGol. Darah: " << golonganDarah << endl;
    cout << "Alamat\t\t\t: " << alamat << endl;
    cout << "\tRT/RW\t\t: " << rt << "/" << rw << endl;
    cout << "\tKel/Desa\t: " << kelurahan << endl;
    cout << "\tKecamatan\t: " << kecamatan << endl;
    cout << "Agama\t\t\t: " << agama << endl;
    cout << "Status Perkawinan\t: " << status << endl;
    cout << "Pekerjaan\t\t: " << pekerjaan << endl;
    cout << "Kewarganegaraan\t\t: " << kewarganegaraan << endl;
    cout << "Berlaku Hingga\t\t: " << berlaku << endl;
    cout << "=============================================================" << endl;

    return 0;
}