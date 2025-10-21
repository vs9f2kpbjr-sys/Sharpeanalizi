#include <stdlib.h>
#include <stdio.h>

int main(void) {
    
    //Kullanıcıdan alınacak değişkenler
    double getiri, risksizfaiz, standartsapma;
    double sharpeorani ;
    
    //Yatırım getirisi bilgisini alma
    printf ("Lütfen yatırımın getirisini (örneğin 0.30 for %%30 gibi.) giriniz: ");
    scanf ( "%lf", &getiri );
    
    //Yatırımın risksiz faiz oranı bilgisini alma
    printf("Lütfen yatırımın risksizfaiz oranını (örneğin 0.3 for %%30 gibi.) giriniz: ");
    scanf ("%lf", &risksizfaiz);
    
    //Yatırımın standartsapmasını alma giriniz")
    printf ("Lütfen yatırımın standart sapmasini (örneğin 0.14 for %%14 gibi.) giriniz: ");
    scanf ("%lf", &standartsapma );
    
    //Standart sapma "0" olamaz. Bu bir hata durumudur.
    if (standartsapma == 0 ) {
        printf ("HATA:Standartsapma 0 olamaz. ");
        return 1; // Hata kodu ile çıkış.
    }
    //Sharpe oranı formülü: (Getiri-Risksiz Faiz) / (Standart Sapma)
    sharpeorani= (getiri-risksizfaiz) / standartsapma ;
    
    printf("\n--- Sharpe Analiz Sonucu ---\n");
    printf("Sharpeorani: %.4f\n", sharpeorani);
    
    //Sharpeoranini değerlendirme ve ekrana yazma
    if (sharpeorani >= 3) {
        printf("Değerlendirme: Mükemmelbir performans! \n");
    } else if (sharpeorani >= 2) {
        printf ("Değerlendirme: Çok iyi bir performans! \n");
    }else if (sharpeorani >= 1) {
        printf ("Değerlendirme: İyi bir performans! \n");
    }else {
        printf ("Değerlendirme: Kabul edilebilir veya düşük bir performans! \n");
    }
    printf ("----------------------------\n");
    return 0;
    //Başarılı çıkış
}
    
    
    
    
    
    

