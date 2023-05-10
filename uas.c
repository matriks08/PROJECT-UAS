#include <stdio.h>

typedef struct data_buku
{
    char judul[60];
    char penerbit[60];
    char pengarang[60];
    int halaman;
    int tahun;
    int tersedia;
} buku_buku;

void menu();

int main()
{
  
}

void menu()
{
    printf("1. Tambahkan buku\n");
    printf("2. Cari buku\n");
    printf("3. Pinjam buku\n");
    printf("4. Kembalikan buku\n");
    printf("5. Keluar\n");
}

