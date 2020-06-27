#ifndef KovaKontrol_hpp
#define KovaKontrol_hpp
#include "Kova.hpp"
#include "Top.hpp"

class KovaKontrol
{
    private:
    int KovaSay;
    char sekil[7][7];
    Kova *tempAdres;
    Kova** kova;
    Top *harf;
    public:
    KovaKontrol();
    void KovaSayisiAl();
    void kovaOlustur();
    void topEkleme();
    void TopSil();
    void KovaDegis(int a,int b);
    void TopDegis(int a,int b);
    void TersKova();
    void TersTop();
    void Renk();
    void Yazdir();
    
};

#endif