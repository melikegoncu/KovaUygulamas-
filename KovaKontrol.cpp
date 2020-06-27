#include "KovaKontrol.hpp"
#include "Top.hpp"
#include "Kova.hpp"
#include <iostream>
#include <Windows.h>
using namespace std;


KovaKontrol :: KovaKontrol()
{
    kova = new Kova*[KovaSay];
    harf=new Top(); 
}
void KovaKontrol::KovaSayisiAl()
{
     cout<<"Kova sayisi giriniz:"<<endl;
     cin>>KovaSay;
}

void KovaKontrol :: kovaOlustur()
{
    for(int i=0;i<KovaSay;i++)
    {
         kova[i] = new Kova();
         //(*(kova+i)) = new Kova();
     }
}

void KovaKontrol::topEkleme()
{
    for (int i = 0; i < KovaSay; i++)
    {
        kova[i]->topEkle();
    }
}
void KovaKontrol::TopSil()
{
for (int i = 0; i < KovaSay; i++)
{
    delete kova[i]->top1;
    kova[i]->top1=NULL;
}
}
void KovaKontrol::KovaDegis(int a,int b)
{
tempAdres=kova[a-1];
kova[a-1]=kova[b-1];
kova[b-1]=tempAdres;
}
void KovaKontrol::TopDegis(int a,int b)
{
harf=kova[a-1]->top1;
kova[a-1]->top1=kova[b-1]->top1;
kova[b-1]->top1=harf;
}
void KovaKontrol::TersKova()
{
    for (int i = 0; i < KovaSay/2; i++)
    {
        tempAdres=kova[i];
        kova[i]=kova[KovaSay-1-i];
        kova[KovaSay-1-i]=tempAdres;
    }
}
void KovaKontrol::TersTop()
{
    for (int i = 0; i < KovaSay/2; i++)
    {
        harf=kova[i]->top1;
        kova[i]->top1=kova[KovaSay-1-i]->top1;
        kova[KovaSay-1-i]->top1=harf;
    }
}
void KovaKontrol::Renk()
{
    for (int i = 0; i < KovaSay; i++)
    {
         kova[i]->renk=i+1;
    }
}
void KovaKontrol::Yazdir()
{
     for (int i = 0; i < KovaSay; i++)
     {
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),kova[i]->renk);
        if(kova[i]->top1 == 0)
        {
         cout<<"   .|.    "<<endl;
         cout<<"  .   .   "<<endl;
         cout<<" .     .  "<<endl;
         cout<<" #     #  "<<endl;
         cout<<" #  -  #  "<<endl;
         cout<<" #     #  "<<endl;
         cout<<" #######  "<<endl;
         cout<<"Kovanin Adresi"<< kova[i] << endl;
         cout << "Topun Adresi : " << kova[i]->top1 << endl;
        }
        else
        {
         cout<<"   .|.    "<<endl;
         cout<<"  .   .   "<<endl;
         cout<<" .     .  "<<endl;
         cout<<" #     #  "<<endl;
         cout<<" #  "<< kova[i]->top1->veri <<"  #  "<<endl;
         cout<<" #     #  "<<endl;
         cout<<" #######  "<<endl;
         cout<<"Kovanin Adresi"<< kova[i] << endl;
         cout << "Topun Adresi : " << kova[i]->top1 << endl;
        }         
     }
}