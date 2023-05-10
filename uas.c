#include <stdio.h>
#include <string.h>

struct bukuperpus
void menu();
void tambahbuku();
int jumlah = 0;
void caribuku();
void pinjambuku();

int main()
{
      int x;
      menu();
      printf("Silahkan pilih: ");
      scanf("%d", &x);
      printf("\n");
      if (x == 1)
        {
            tambahbuku();
        }
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
    // scanf(" %[^\n]s", buku[jumlah].judul);
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


void caribuku()
{
    char judul[60];
    int x = 0;

    printf("Silahkan cari buku: ");
    scanf("%s", judul);

    int i = 0;
    while (i < jumlah)
    {
        if (strcmp(buku[i].judul, judul) == 0)
        {
            printf("=======Buku Tersedia=======\n");
            printf("Judul buku\t: %s\n", buku[i].judul);
            printf("Jenis buku\t: %s\n", buku[i].pengarang);
            printf("Pengarang\t: %s\n", buku[i].pengarang);
            printf("Tahun terbit\t: %d\n", buku[i].tahun);
            printf("Penerbit\t: %s\n", buku[i].penerbit);
            printf("Jumlah halaman\t: %d\n", buku[i].halaman);
            printf("=======Buku Tersedia=======\n");
            x = 1;
            break;
        }
        i++;
    }

    if (x == 0)
    {
        printf("Buku %s tidak ditemukan\n", judul);
    }
}


void pinjambuku()
{
    char judul[60];
    int x = 0;

    printf("Judul buku: ");
    scanf("%s", judul);

    int i = 0;
    while (i < jumlah)
    {
        if (strcmp(buku[i].judul, judul) == 0)
        {
            if (buku[i].tersedia == 0)
            {
                printf("Buku \"%s\" sedang dipinjam.\n", buku[i].judul);
                printf("\n");
            }
            else
            {
                printf("Berhasil meminjam buku \"%s\".\n", buku[i].judul);
            }
            x = 1;
            break;
        }
        i++;
    }

    if (x == 0)
    {
        printf("Buku \"%s\" yang ingin anda pinjam tidak ditemukan\n", judul);
    }
}

