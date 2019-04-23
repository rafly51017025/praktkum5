#include<iostream.h>
#include<conio.h>
#include<stdlib>
#include<iomanip>

int main()
{
char hari;
cout<<"Pilihan : "<<endl;
cout<<"A = SENIN ";
cout<<"B = SELASA ";
cout<<"C = RABU ";
cout<<"D = KAMIS ";
cout<<"E = JUMAT ";
cout<<"F = SABTU "<<endl;
cout<<"G = AHAD "<<endl;
cout<<endl;
cout<<endl;
cout<<"Masukkan kode hari (A- G) : ";
cin>>hari;
if (hari=='a' ||hari=='A')
  cout<<"senin"<<endl;
else
if (hari=='b' ||hari=='B')
  cout<<"selasa"<<endl;
else
if (hari=='c' ||hari=='C')
  cout<<"rabu"<<endl;
else
if (hari=='d' ||hari=='D')
  cout<<"kamis"<<endl;
else
if (hari=='e' ||hari=='E')
  cout<<"jumat"<<endl;
else
if (hari=='f' ||hari=='F')
  cout<<"sabtu"<<endl;
else
if (hari=='g' ||hari=='G')
  cout<<"ahad"<<endl;
else
cout<<"maaf kode yang anda masukkan salah";
getch();
}
