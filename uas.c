#include <stdio.h>
#include <string.h>

struct bukuperpus;
void menu();
void tambahbuku();
int jumlah = 0;
void caribuku();
void pinjambuku();
void kembalikanbuku();

int main()
{

    int x;
    do
    {
        menu();
        printf("Silahkan pilih: ");
        scanf("%d", &x);
        printf("\n");

        if (x == 1)
        {
            tambahbuku();
        }
        else if (x == 2)
        {
            caribuku();
        }
        else if (x == 3)
        {
            pinjambuku();
        }
        else if (x == 4)
        {
            kembalikanbuku();
        }
        else if (x == 5)
        {
            printf("=====SAMPAI JUMPA=====\n");
        }
        else
        {
            printf("Silahkan pilih fitur diatas!\n");
        }

    } while (x != 5);

    return 0;
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

    printf("Jenis buku\t: ");
    scanf("%s", buku[jumlah].jenis);

    printf("Pengarang\t: ");
    scanf("%s", buku[jumlah].pengarang);

    printf("Penerbit\t: ");
    scanf("%s", buku[jumlah].penerbit);

    printf("Tahun terbit\t: ");
    scanf("%d", &buku[jumlah].tahun);

    printf("Jumlah halaman\t: ");
    scanf("%d", &buku[jumlah].halaman);

    buku[jumlah].tersedia = 1;
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
        printf("Tidak ditemukan buku dengan judul \"%s\"\n", judul);
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
                buku[i].tersedia = 0;
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

void kembalikanbuku()
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
            if (buku[i].tersedia == 0) // buku[i].tersedia = 0
            {
                buku[i].tersedia = 1;
                printf("Buku \"%s\" berhasil dikembalikan ke perpustakaan.\n", buku[i].judul);
            }
            else
            {
                printf("Buku tersebut sudah dikembalikan\n");
            }
            x = 1;
            break;
        }
        i++;
    }

    if (x == 0)
    {
        printf("Buku \"%s\" belum ditambahkan [Buku tidak ada didalam data Perpustakaan]\n", judul);
    }
}
