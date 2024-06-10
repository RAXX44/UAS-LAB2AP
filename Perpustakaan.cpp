#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct identitas {
    string nama_anda;
    int nim;
    char pil;
};

struct book {
    string name;
    int tahun_terbit;
};

void input_mahasiswaa(identitas &mahasiswa) {
    cout << "==============================" << endl;
    cout << "SELAMAT DATANG DI PERPUSTAKAAN" << endl;
    cout << "==============================" << endl;
    cout << endl;
    cout << "||||||||||||     |||||||||||||" << endl;
    cout << "||          || ||           ||" << endl;
    cout << "||  ||||||    |    ||||||   ||" << endl;
    cout << "||            |             ||" << endl;
    cout << "||  ||||||    |    ||||||   ||" << endl;
    cout << "||            |             ||" << endl;
    cout << "||||||||||||     |||||||||||||" << endl;
    cout <<"            || ||" <<endl;
    cout <<"              |" <<endl;
    cout <<endl;
    cout << "Login akun anda untuk mendapatkan akses" << endl;
    cout << "Masukkan username: ";
    getline(cin, mahasiswa.nama_anda);
    cout << "Masukkan NIM anda: ";
    cin >> mahasiswa.nim;
    cout << "Anda Laki-laki atau perempuan (L/P)? ";
    cin >> mahasiswa.pil;
}

void output_mahasiswaa(identitas &mahasiswa) {
    cout << "Nama: " << mahasiswa.nama_anda << endl;
    cout << "NIM: " << mahasiswa.nim << endl;
    cout << "Kelamin: " << mahasiswa.pil << endl;
    cout << "Anda telah terverifikasi" << endl;
    cout << "Selanjutnya pilih buku yang ada di dalam perpustakaan" << endl;
}

void beragam() {
    char pilihan_3; 
    int pilihan_2, pilihan;
    vector<book> dictionaries = {
        {"Edmund weirner", 1989},
        {"E. St. harahap", 1942},
        {"Gustav Langenscheidt", 1832},
        {"Naoe Naganuma", 1986},
        {"Noel Edward Osselton", 2018}
    };
    vector<book> history = {
        {"Jonathan Black", 2007},
        {"Susan wise bauer", 2007},
        {"Pramoedya Ananta Toer", 1980},
        {"Pramoedya Ananta Toer", 1988},
        {"Yuval Noah Harari", 2011}
    };
    vector<book> selfreward = {
        {"James Clear", 2018},
        {"Simon Sinek", 2016},
        {"Robert Greene", 1998},
        {"Kevin Kruse", 2019},
        {"Napoleon Hill", 1937}
    };
    vector<book> novels = {
        {"Tereliye", 2014},
        {"Tereliye", 2017},
        {"Tereliye", 2012},
        {"Pidi Baiq", 2014},
        {"Andrea Hirata", 2005}
    };
    vector<book> comics = {
        {"Endou tatsuya", 2019},
        {"Muneyuki Kaneshiro", 2022},
        {"Aoyama Gosho", 1994},
        {"Dina Chandra", 2017},
        {"Gege Akutami", 2018}
    };
    do {
        cout << "1. Dictionary\n";
        cout << "2. Selfreward\n";
        cout << "3. History\n";
        cout << "4. Novel\n";
        cout << "5. Comic\n";
        cin >> pilihan;

       switch (pilihan) {
            case 1:
                cout << "Anda memilih Dictionary\n";
                cout << "Beragam buku Dictionary di antaranya:\n";
                cout << "1. The Oxford Dictionary\n";
                cout << "2. Kamus Bahasa Indonesia\n";
                cout << "3. Langenscheidt German\n";
                cout << "4. Basic Japanese\n";
                cout << "5. The New Routledge Dutch\n";
                cin >> pilihan_2;
                if (pilihan_2 >= 1 && pilihan_2 <= 5) {
                    cout << "Anda memilih:\n" << dictionaries[pilihan_2 - 1].name << "\n";
                    cout << "---------------------\n";
                    cout << "penulis: " << dictionaries[pilihan_2 - 1].name << endl;
                    cout << "tahun: " << dictionaries[pilihan_2 - 1].tahun_terbit << endl;
                } else {
                    cout << "Pilihan tidak tersedia\n";
                }
                break;
            case 2:
                cout << "Anda memilih Selfreward\n";
                cout << "Beragam buku Selfreward di antaranya:\n";
                cout << "1. Atomic Habits\n";
                cout << "2. Start with Why\n";
                cout << "3. The 48 Laws of Power\n";
                cout << "4. Great Leaders Have No Rules\n";
                cout << "5. Think and Grow Rich\n";
                cin >> pilihan_2;
                if (pilihan_2 >= 1 && pilihan_2 <= 5) {
                    cout << "Anda memilih:\n" << selfreward[pilihan_2 - 1].name << "\n";
                    cout << "---------------------\n";
                    cout << "penulis: " << selfreward[pilihan_2 - 1].name << endl;
                    cout << "tahun: " << selfreward[pilihan_2 - 1].tahun_terbit << endl;
                } else {
                    cout << "Pilihan tidak tersedia\n";
                }
                break;
            case 3:
                cout << "Anda memilih History\n";
                cout << "Beragam buku History di antaranya:\n";
                cout << "1. Sejarah Dunia yang Disembunyikan\n"; 
                cout << "2. The History of Ancient World\n";
                cout << "3. Bumi Manusia\n";
                cout << "4. Rumah Kaca\n";
                cout << "5. Sapiens\n";
                cin >> pilihan_2;
               if (pilihan_2 >= 1 && pilihan_2 <= 5) {
                    cout << "Anda memilih:\n" << history[pilihan_2 - 1].name << "\n";
                    cout << "---------------------\n";
                    cout << "penulis: " << history[pilihan_2 - 1].name << endl;
                    cout << "tahun: " << history[pilihan_2 - 1].tahun_terbit << endl;
                } else {
                    cout << "Pilihan tidak tersedia\n";
                }
                break;
            case 4:
                cout << "Anda memilih Novel\n";
                cout << "Beragam buku Novel di antaranya:\n";
                cout << "1. Bumi\n"; 
                cout << "2. Bintang\n";
                cout << "3. Negeri para bedebah\n";
                cout << "4. Dilan 1990\n";
                cout << "5. Laskar pelangi\n";
                cin >> pilihan_2;
                if (pilihan_2 >= 1 && pilihan_2 <= 5) {
                    cout << "Anda memilih:\n" << novels[pilihan_2 - 1].name << "\n";
                    cout << "---------------------\n";
                    cout << "penulis: " << novels[pilihan_2 - 1].name << endl;
                    cout << "tahun: " << novels[pilihan_2 - 1].tahun_terbit << endl;
                } else {
                    cout << "Pilihan tidak tersedia\n";
                }
                break;
            case 5:
            cout << "Anda memilih comic\n";
                cout << "Beragam buku comic di antaranya:\n";
                cout << "1. Spy x family season 01\n"; 
                cout << "2. Blue Lock 262\n";
                cout << "3. Comic Conan 3\n";
                cout << "4. WHY? 4\n";
                cout << "5. Jujutsu Kaisen 5\n";
                cin >> pilihan_2;
                 if (pilihan_2 >= 1 && pilihan_2 <= 5) {
                    cout << "Anda memilih:\n" << comics[pilihan_2 - 1].name << "\n";
                    cout << "---------------------\n";
                    cout << "penulis: " << comics[pilihan_2 - 1].name << endl;
                    cout << "tahun: " << comics[pilihan_2 - 1].tahun_terbit << endl;
                } else {
                    cout << "Pilihan tidak tersedia\n";
                }
                break;
            default:
                cout << "Pilihan tidak tersedia\n";
                break;
        }
        cout << "---------------------\n";
        cout << "Apakah anda ingin mengambil yang lain? (y/t): ";
        cin >> pilihan_3;
    } while (pilihan_3 == 'y' || pilihan_3 == 'Y');
}

int main() {
    system("cls");
    identitas mahasiswa;
    identitas* ptr_mahasiswa = &mahasiswa;
    input_mahasiswaa(*ptr_mahasiswa);
    output_mahasiswaa(*ptr_mahasiswa);
    beragam();
    system("cls");
    cout << "Selamat Membaca!! " << mahasiswa.nama_anda << ":)";
    return 0;
}