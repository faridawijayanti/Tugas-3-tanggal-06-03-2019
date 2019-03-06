#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
    struct data
    {
        char nama[20];
        int nim;
        int tugas;
        int kuis;
        int mid;
        int uas;
        float nilai_akhir;
    };struct data mahasiswa[20];

cout<<"-------------------------------------------------\n";
cout<<"Program Structur Menghitung Nilai Akhir Mahasiswa\n";
cout<<"----------------Farida Wijayanti-----------------\n";
cout<<"-------------------------------------------------\n";
int x,y;
cout<<"Masukan Banyak Data Mahasiswa : ";
cin>>y;
for(x=0;x<y;x++)
{
	cout<<"------------------------------\n";
    cout<<"Masukan Nama Mahasiswa : ";
    cin>>mahasiswa[x].nama;
    cout<<"Masukan NIM Mahasiswa  : ";
    cin>>mahasiswa[x].nim;
    cout<<"Masukan Nilai Tugas    : ";
    cin>>mahasiswa[x].tugas;
    cout<<"Masukan Nilai Kuis     : ";
    cin>>mahasiswa[x].kuis;
    cout<<"Masukan Nilai UTS      : ";
    cin>>mahasiswa[x].mid;
    cout<<"Masukan Nilai UAS      : ";
    cin>>mahasiswa[x].uas;
    cout<<endl;
}
	cout<<"-----------------Data Nilai Mahasiswa-----------------\n";
	cout<<endl<<endl;
for(x=0;x<y;x++)
{
    mahasiswa[x].nilai_akhir = (mahasiswa[x].tugas*10/100)+(mahasiswa[x].kuis*20/100)+(mahasiswa[x].mid*30/100)+(mahasiswa[x].uas*40/100);
	cout<<"Nama			= "<<mahasiswa[x].nama<<			"|\n";
	cout<<"NIM			= "<<mahasiswa[x].nim<<				"|\n";
	cout<<"Tugas			= "<<mahasiswa[x].tugas<<			"|\n";
	cout<<"Kuis			= "<<mahasiswa[x].kuis<<			"|\n";
	cout<<"UTS			= "<<mahasiswa[x].mid<<				"|\n";
	cout<<"UAS			= "<<mahasiswa[x].uas<<				"|\n";
	cout<<"Nilai Akhir		= "<<mahasiswa[x].nilai_akhir;
 mahasiswa[x].nilai_akhir=(mahasiswa[x].tugas*10/100)+(mahasiswa[x].kuis*20/100)+(mahasiswa[x].mid*30/100)+(mahasiswa[x].uas*40/100);
if (mahasiswa[x].nilai_akhir>=85)
    cout<<" (A)";
else if (mahasiswa[x].nilai_akhir>=70)
    cout<<" (B)";
else if (mahasiswa[x].nilai_akhir>=55)
    cout<<" (C)";
else if (mahasiswa[x].nilai_akhir>=40)
    cout<<" (D)";
else if (mahasiswa[x].nilai_akhir<=40)
    cout<<" (E)";
cout<<endl<<endl;
}
}
