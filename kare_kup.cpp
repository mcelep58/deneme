#include<iostream>

using namespace std;

int main()
{
  int sayi,kare,kup;

cout<<"Bir sayih giriniz:";
cin>>sayi;

// kareyi hesaplıyoruz
kare = sayi * sayi;
kup = sayi * sayi *sayi; // kup = kare * sayi;

  cout<< "Girdiginiz sayi:"<<sayi<<endl;

  cout<< "karesi:"<<kare<<endl;

  cout<< "kupu:"<<kup<<endl;

    return 0;
}


