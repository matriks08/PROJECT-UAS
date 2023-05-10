#include <stdio.h>
#include <string.h>

struct bukuperpus
void menu();
void tambahbuku();
int jumlah = 0;

int main()
{
  
}

struct bukuperpus
{
    char judul[60];
    char penerbit[60];
    char pengarang[60];
    char jenis[60];
    int halaman;
    int tahun;
    int tersedia;
};

struct bukuperpus buku[60];

void menu()
{
    printf("\n=====FITUR PERPUSTAKAAN====\n");
    printf("Fitur:\n");
    printf("1. Tambahkan buku\n");
    printf("2. Cari buku\n");
    printf("3. Pinjam buku\n");
    printf("4. Kembalikan buku\n");
    printf("5. Exit\n");
}

void tambahbuku()
{
    printf("Untuk menambahkan data buku, masukan:\n");
    printf("Judul buku\t: ");
    scanf("%s", buku[jumlah].judul);
    // scanf("%[^\n]s", buku[jumlah].judul);
    printf("Jenis buku\t: ");
    scanf("%s", buku[jumlah].jenis);
    printf("Pengarang\t: ");
    scanf("%s", buku[jumlah].pengarang);
    printf("Penerbit\t: ");
    scanf("%s", buku[jumlah].penerbit);
    printf("Tahun terbit\t: ");
    scanf("%d", &buku[jumlah].tahun);
    buku[jumlah].tersedia = 1;
    printf("Jumlah halaman\t: ");
    scanf("%d", &buku[jumlah].halaman);
    ++jumlah;

    printf("=====Terimakasih telah menambahkan buku=====\n");
}

