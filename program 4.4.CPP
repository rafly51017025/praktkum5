#include<iostream.h>
#include<conio.h>

main(){
int bil;

cout<<"Masukkan Bilangan yang akan di cek = ";
cin>>bil;

if (bil > 0)
 cout<<bil<<"adalah bilangan positif";
else if (bil < 0)
 cout<<bil<<"adalah bilangan negatif";
else
 cout<<"Anda menginputkan bilangan Nol (0)";
 getch();}