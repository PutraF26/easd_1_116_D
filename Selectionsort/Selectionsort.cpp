//Sebuah algoritma dibutuhkan untuk menyelesaikan suatu masalah karena algoritma memberikan langkah-langkah yang sistematis dan terstruktur untuk mencapai solusi yang diinginkan

//Dalam algoritma, terdapat dua jenis struktur data yaitu:
//1.Struktur data Linear: Struktur data ini mempunyai susunan data yang bersifat linear atau sejajar, sehingga memudahkan dalam proses penelusuran data secara urut. Contoh dari struktur data linear adalah array, linked list, stack, dan queue.
//2.Struktur data Non-Linear: Struktur data ini memiliki susunan data yang tidak berurutan atau tidak sejajar, sehingga proses penelusuran datanya lebih kompleks. Contoh dari struktur data non-linear adalah tree, graph, dan set.

//Beberapa faktor yang dapat mempengaruhi efisiensi suatu program algoritma antara lain:
//Waktu eksekusi: Lama waktu yang dibutuhkan program untuk menyelesaikan suatu tugas. Semakin sedikit waktu yang dibutuhkan, maka semakin efisien program tersebut.
//Penggunaan memori: Semakin sedikit memori yang digunakan program, maka semakin efisien program tersebut. Program yang memerlukan banyak memori cenderung lebih lambat dan kurang efisien.
//Kompleksitas algoritma: Semakin kompleks algoritma yang digunakan, semakin banyak waktu dan memori yang dibutuhkan oleh program. Oleh karena itu, penggunaan algoritma yang sederhana dan efisien dapat meningkatkan efisiensi program.
//Jenis bahasa pemrograman: Bahasa pemrograman tertentu mungkin lebih efisien daripada yang lain, tergantung pada kebutuhan program. Sebagai contoh, bahasa pemrograman C++ umumnya lebih efisien dalam menangani pemrosesan data numerik dibandingkan bahasa pemrograman Python.
//Penggunaan alat bantu: Penggunaan alat bantu seperti compiler, profiler, dan debugger dapat membantu meningkatkan efisiensi program dengan mengoptimalkan kode dan mengidentifikasi masalah kinerja.

//algoritma selection sort.
//Selection sort bekerja dengan mencari elemen terkecil dari data yang belum terurut dan menukar elemen tersebut dengan elemen pertama pada data yang belum terurut. Kemudian, algoritma akan mencari elemen terkecil dari sisa data yang belum terurut dan menukar elemen tersebut dengan elemen kedua pada data yang belum terurut, dan seterusnya hingga seluruh data terurut.
//Kelebihan dari selection sort adalah algoritma ini cukup sederhana dan mudah untuk diimplementasikan. Selain itu, algoritma selection sort juga sangat efektif untuk mengurutkan data yang ukurannya kecil, karena kompleksitas waktu yang dimilikinya adalah O(n^2). Oleh karena itu, jika kita memiliki data yang ukurannya kecil, penggunaan algoritma selection sort dapat menghasilkan kinerja yang lebih baik daripada algoritma lainnya. Namun, pada data dengan ukuran yang besar, algoritma ini cenderung lambat dan kurang efisien.

//algoritma dapat dikelompokkan menjadi dua kategori berdasarkan kompleksitas waktu yang dimilikinya, yaitu Quadratic dan Loglinear.
//Algoritma-algoritma Quadratic memiliki kompleksitas waktu O(n^2), yang berarti waktu eksekusi algoritma akan tumbuh seiring dengan kuadrat dari ukuran input data. Contoh algoritma Quadratic adalah:
//Bubble Sort
//Insertion Sort
//Selection Sort
//Sedangkan algoritma-algoritma Loglinear memiliki kompleksitas waktu O(n log n), yang berarti waktu eksekusi algoritma akan tumbuh seiring dengan logaritma dari ukuran input data yang diurutkan. Contoh algoritma Loglinear adalah:
//Merge Sort
//Quick Sort
//Heap Sort
//Perlu dicatat bahwa pengelompokan di atas hanyalah berdasarkan kompleksitas waktu yang dimilikinya, dan ada faktor-faktor lain seperti penggunaan memori dan kasus-kasus khusus tertentu yang perlu dipertimbangkan saat memilih algoritma yang tepat untuk suatu tugas tertentu.

#include <iostream>
using namespace std;

const int MAX = 36; // maksimal jumlah data sesuai aturan

// Prosedur input data
void inputData(int arr[], int& n) {
    cout << "Masukkan jumlah data (maksimum " << MAX << "): ";
    cin >> n;

    // Validasi jumlah data
    if (n > MAX) {
        cout << "Jumlah data melebihi batas maksimum!" << endl;
        exit(1); // keluar dari program dengan error code 1
    }

    cout << "Masukkan data:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> arr[i];
    }
}

// Prosedur selection sort
void selectionSort(int arr[], int n) {
    char initials[] = "HP"; // ganti dengan dua inisial nama

    for (int HP = 0; HP < n - 1; HP++) { // AN diganti dengan dua inisial nama
        int min_index = HP;
        for (int i = HP + 1; i < n; i++) {
            if (arr[i] < arr[min_index]) {
                min_index = i;
            }
        }
        if (min_index != HP) {
            swap(arr[HP], arr[min_index]);
        }
    }
}

// Prosedur untuk menampilkan hasil
void display(int arr[], int n) {
    cout << "Data terurut:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[MAX], n;
    inputData(arr, n);
    selectionSort(arr, n);
    display(arr, n);
    return 0;
}
