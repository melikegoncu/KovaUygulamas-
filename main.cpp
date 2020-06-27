#include "Kova.hpp"
#include "Top.hpp"
#include "KovaKontrol.hpp"
#include<iostream>
#include<Windows.h>
using namespace std;
KovaKontrol* kontrol=new KovaKontrol();
int main()
 {
    kontrol->KovaSayisiAl();
    kontrol->kovaOlustur();
    kontrol->Renk();
    kontrol->Yazdir();
    int secenek,bir,iki;
    
     do{
     	        cout << endl << "Islemler" << endl;
		cout << "1. Toplari Yerlestir" << endl;
		cout << "2. Toplari Yoket" << endl;
		cout << "3. Kova Degistir" << endl;
		cout << "4. Toplari Degistir" << endl;
		cout << "5. Kovalari Tersten Yerlestir" << endl;
		cout << "6. Toplari Tersten Yerlestir" << endl;
		cout << "7. CIKIS" << endl;
		cin >> secenek;
        switch (secenek)
        {
        case 1:
                kontrol->topEkleme();
                kontrol->Yazdir();
        break;
        case 2:
                kontrol->TopSil();
                kontrol->Yazdir();
        break;
        case 3:
                cout<<"Ilk Degistirilecek Kova:"<<endl;
                cin>>bir;
                cout<<endl<<"Ikinci Degistirilecek Kova:"<<endl;
                cin>>iki;
                kontrol->KovaDegis(bir,iki);
                kontrol->Yazdir();
        break;
        case 4:
                cout<<"Ilk Degistirilecek Top:"<<endl;
                cin>>bir;
                cout<<"Ikinci Degistirilecek Top:"<<endl;
                cin>>iki;
                kontrol->TopDegis(bir,iki);
                kontrol->Yazdir();
        break;
        case 5:
                kontrol->TersTop();
                kontrol->TersKova();
                kontrol->Yazdir();
        break;
        case 6:
                kontrol->TersTop();
                kontrol->Yazdir();     
        case 7: break;
        default:cout << "Menü sayılarını kullanınız..!"<<endl;continue;
        }
        }
        while (secenek!=7);
	cin.get();
        delete kontrol;
        
     return 0;
 }