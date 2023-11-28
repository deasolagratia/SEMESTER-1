#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//int merupakan tipe data bilangan bulat, atau yang tidak
//mencakup komponen pecahan


//int data, merupakan tipe data untuk menyimpan input. Fungsinya untuk menyimpan
//data-data pengeluaran yang dimasukkan oleh user dan disimpan
int data()
{
    //FILE *fp digunakan untuk membuat file, fungsi FILE dilanjutkan 
    //pointer nama variable file tersebut
    FILE *fp;
    system("cls");

    char nama[80];
    char hari[80];
    int tanggal, bulan, tahun;
    float pengeluaran;

    //fp = fopen("Pengeluaran.txt", "a"); untuk membuka file

    //fungsi "a" buka untuk ditambahkan
    fp = fopen("Pengeluaran.txt", "a");

        //fungsi printf untuk menampilkan sebuah karakter
        //atau lebih menjadi sebuah kalimat

        //fungsi scanf untuk memasukkan tipe data

        //%s menampilkan nilai string

        //%d menampilkan nilai angka
        printf("Nama: ");
        scanf("%s", &nama);
        printf("Hari: ");
        scanf("%s", &hari);
        printf("Tanggal: ");
        scanf("%d", &tanggal);
        printf("Bulan: ");
        scanf("%d", &bulan);
        printf("Tahun: ");
        scanf("%d", &tahun);
        printf("Pengeluaran: ");
        scanf("%f", &pengeluaran);

        //fungsi fprintf untuk menulis string yang diformat 
        fprintf(fp, "%s %s %d %d %d %f", nama, hari, tanggal, bulan, tahun, pengeluaran);

        //fungsi fclose untuk menutup file yang sudah tidak diproses lagi
        fclose(fp);

    return 0;
}

    int perhari()
    {
        FILE *fp;
        system("cls");

        char nama[80];
        char hari[80];
        int Tanggal, Bulan, Tahun;
        int tanggal, bulan, tahun;
        float pengeluaran, total = 0;

        fp = fopen("Pengeluaran.txt", "r");

        printf("Nama : ");
        scanf("%s", &nama);
        printf("Tanggal: ");
        scanf("%d", &tanggal);
        printf("Bulan: ");
        scanf("%d", &bulan);
        printf("Tahun: ");
        scanf("%d", &tahun);

        while (fscanf(fp, "%s %s %d %d %d %f",  &nama, &hari, &Tanggal, &Bulan, &Tahun, &pengeluaran) != EOF)
        {
            if (tanggal == Tanggal && bulan == Bulan && tahun == Tahun)
            {
                //total + total = pengeluaran
                 total += pengeluaran;
            }
        }

        printf("TOTAL : %f", total);

        fclose(fp);

        return 0;
    }

    int perbulan()
    {
        FILE *fp;
        system("cls");
        
        char nama[80];
        char hari[80];
        int Bulan, Tahun;
        int tanggal, bulan, tahun;
        float pengeluaran, total = 0;

        fp = fopen("Pengeluaran.txt", "r");
        
        printf("Nama: ");
        scanf("%s", &nama);
        printf("Bulan: ");
        scanf("%d", &Bulan);
        printf("Tahun: ");
        scanf("%d", &Tahun);

        while (fscanf(fp, "%s %s %d %d %d %f", &nama, &hari, &tanggal, &bulan, &tahun, &pengeluaran) != EOF)
        {
            if ( bulan == Bulan && tahun == Tahun)
            {
                total += pengeluaran;
            }
        }
        printf("TOTAL PERBULAN : %f", total);

        fclose(fp);

        return 0;
    }

    int pertahun()
    {
        FILE *fp;
        system("cls");

        char nama[80];
        char hari[80];
        int Tahun;
        int tanggal, bulan, tahun;
        float pengeluaran, total = 0;

        fp = fopen("Pengeluaran.txt", "r");

        printf("Nama: ");
        scanf("%s", &nama);
        printf("Tahun: ");
        scanf("%d", &Tahun);

        while (fscanf(fp, "%s %s %d %d %d %f", &nama, &hari, &tanggal, &bulan, &tahun, &pengeluaran) != EOF)
        {
            if ( tahun == Tahun)
            {
                total += pengeluaran;
            }
        }
        printf("TOTAL PERTAHUN %f", total);

        fclose(fp);

        return 0;

    } 

int main()
{
    int pilih, pilih1, pilih2;

    do
    {
    	menu:
        printf("1. Masukkan data\n");
        printf("2. Hitung Pengeluaran\n");
        printf("3. Data Pengeluaran\n");
        printf("0. Selesai\n");

        printf("Select One :");
        scanf("%d", &pilih);

        //Swicth case adalah percabangan kode program dimana fungsinya 
        //membandingkan isi sebuah variabel dengan beberapa nilai
        switch (pilih)
        {
        case 1:
            data();
            fflush(stdin);
            break;

        case 2:
            do
            {
                printf("1. Perhari\n");
                printf("2. Perbulan\n");
                printf("3. Pertahun\n");
                printf("0. Selesai\n");
                printf("Select One : ");
                scanf("%d", &pilih1);

                switch (pilih1)
                {
                case 1:
                    perhari();
                    break;
                case 2:
                    perbulan();
                    break;
                case 3:
                    pertahun();
                    break;
                case 0:
                    goto menu;
                    break;
                default:
                    printf("Invalid\n");
                    break;
                }
            } 

            //while untuk mengulang statement sebanyak satu kali, lalu statement 
            //didalam while dicek apakah benar. Jika benar, akann diulang kembali.
            while (pilih != 0);

            //fungsi fflush(stdin); untuk membersihkan buffer
            fflush(stdin);
            break;

        case 3:
        	
            {
                printf("1. Perhari\n");
                printf("2. Perbulan\n");
                printf("3. Pertahun\n");
                printf("0. Selesai\n");
                printf("Select One : ");
                scanf("%d", &pilih2);

                switch (pilih2)
                {
                case 1:
                    perhari();
                    break;
                case 2:
                    perbulan();
                    break;
                case 3:
                    pertahun();
                    break;
                case 0:
                    goto menu;
                    break;
                default:
                    printf("Invalid\n");
                    break;
                }
            } 
            while (pilih != 0);
            fflush(stdin);
            break;

        case 0:
            printf("Selesai\n");
            exit(0);

        default:
            printf("Invalid\n");
            break;

        }
    } 
    while (pilih != 0);

    return 0;
}

