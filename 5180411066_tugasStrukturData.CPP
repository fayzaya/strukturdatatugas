#include <conio.h>
#include <iostream.h>
#include <dos.h>
#include <stdio.h>
main() {
mulai:
clrscr();
int pil;
cout<<"--------Menu----------\n";
cout<<" 1. Input Data Mahasiswa       \n";
cout<<" 2. Tampil Berdasarkan Nilai Rata-Rata Tertinggi               \n";
cout<<" 3. Pencarian Berdasarkan NIM  \n";
cout<<"----------------------\n";
cout<<"Masukan Pilihan anda[1..4]= ";cin>>pil;
switch (pil) {
case 1:
clrscr();

 char nama[50];
 char jurusan[20];
 char nim[20];
 char jl[50];
 int nilaihar1,nilaihar2,nilaihar3;
 float rata;


 cout<<"Nama\t\t: ";cin>>nama;
 cout<<"NIM\t\t: ";cin>>nim;
 cout<<"Jenis Kelamin\t\t: ";cin>>jl;
 cout<<"Jurusan\t\t: ";cin>>jurusan;
 cout<<"Nilai Harian1\t\t: ";cin>>nilaihar1;
 cout<<"Nilai Harian2\t\t: ";cin>>nilaihar2;
 cout<<"Nilai Harian3\t\t: ";cin>>nilaihar3;
 rata=(nilaihar1+nilaihar2+nilaihar3)/3;
 cout<<"Rata-Rata Nlai\t: "<<rata;
getch();
goto mulai;
case 2:
clrscr();
    int i;
    struct
    {
         char nama[50];
 			char jurusan[20];
 			char nim[20];
 			char jl[50];
 			int nilaihar1,nilaihar2,nilaihar3;
 			float rata;
    }
    mhs[5];

    for(i=1;i<=3;i++)
    {
        cout<<"Nama\t\t: ";
        cin>>mhs[i].nama;
        cout<<"NIM\t\t: ";
        cin>>mhs[i].nim;
        cout<<"Jenis Kelamin\t\t: ";
        cin>>mhs[i].jl;
        cout<<"Jurusan\t\t: ";
        cin>>mhs[i].jurusan;
        cout<<"Nilai Harian1\t\t: ";
        cin>>mhs[i].nilaihar1;
        cout<<"Nilai Harian2\t\t: ";
        cin>>mhs[i].nilaihar2;
        cout<<"Nilai Harian3\t\t: ";
        cin>>mhs[i].nilaihar3;
        rata=(nilaihar1+nilaihar2+nilaihar3)/3;
        cout<<"Rata-Rata Nlai\t: "<<mhs[i].rata;

        cout<<endl;
    }
    cout<<endl;
    cout<<"data Mahasiswa"<<endl;

    for(i=1;i<=3;i++)
    {
        cout<<"Data Ke - "<<i<<endl;
        cout<<"Nama\t\t: "<<mhs[i].nama;
        cout<<"NIM\t\t: "<<mhs[i].nim;
        cout<<"Jenis Kelamin\t\t: "<<mhs[i].jl;
        cout<<"Jurusan\t\t: "<<mhs[i].jurusan;
        cout<<"Nilai Harian1\t\t: "<<mhs[i].nilaihar1;
        cout<<"Nilai Harian2\t\t: "<<mhs[i].nilaihar2;
        cout<<"Nilai Harian3\t\t: "<<mhs[i].nilaihar3;
        rata=(nilaihar1+nilaihar2+nilaihar3)/3;
        cout<<"Rata-Rata Nlai\t: "<<mhs[i].rata;
        cout<<endl;
    }
getch();
goto mulai;
case 3:
clrscr();

    int a;
    struct
    {
        char nim[11];
        char nama[15];
        int umur;
    }
    mhsw[5];

    for(a=1;a<=3;a++)
    {
        cout<<"Masukan NIM = ";
        cin>>mhsw[a].nim;
        cout<<"Masukan Nama = ";
        cin>>mhsw[a].nama;
        cout<<"Masukan Umur = ";
        cin>>mhsw[a].umur;

        cout<<endl;
    }
    cout<<endl;
    cout<<"data Mahasiswa"<<endl;

    for(a=1;a<=3;a++)
    {
        cout<<"Data Ke - "<<a<<endl;
        cout<<"NIM = "<<mhsw[a].nim<<endl;
        cout<<"Nama = "<<mhsw[a].nama<<endl;
        cout<<"Umur = "<<mhsw[a].umur<<endl;
        cout<<endl;
    }
getch();
goto mulai;
clrscr();
default: cout<<"\n Tidak Ada Pilihan Tersebut, Silahkan Masukan Pilihan Yang Benar";
getch();
goto mulai;
}
getch();
return 0;
}

