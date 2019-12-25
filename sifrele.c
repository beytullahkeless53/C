#include <stdio.h>
#include <string.h>
 
#define limit 500
 
void sifrele(char[], char[]);
void sifreCoz(char[], char[]);
int bul(char[], char);
 
char metin[limit];
int alfabeBoyutu;
 
int main() {
 
    //Kendi alfabemizi olusturuyoruz.
    char alfabe[] = "abcdefghijklmnoprstuvyz0123456789ABCDEFGHIJKLMNOPRSTUVYZ.,!'^+-/*%&()=?#${[]}~<>| ";
    char sifre[] = "sifre1234";
    alfabeBoyutu = strlen(alfabe);
    strcpy(metin, "CKAYNAK.com'da konu ANLAtimi, ornek KodLAR ve ALGORiTMAlar BULABiLiRSiNiZ.");
 
    printf("******metinin ilk hali******\n%s\n", metin);
    sifrele(alfabe, sifre);
    printf("******metinin sifreli hali******\n%s\n", metin);
    sifreCoz(alfabe, sifre);
    printf("******metinin sifre cozulmus hali******\n%s\n", metin);
 
    return 0;
}
 
void sifrele(char alfabe[], char sifre[]) {
    int i, j = 0, metinHarfSirasi, sifreHarfSirasi;
    int metinBoyut = strlen(metin);
    int sifreBoyut = strlen(sifre);
 
    for (i = 0; i < metinBoyut; i++, j++) {
        if (j >= sifreBoyut)
            j = 0;
 
        metinHarfSirasi = bul(alfabe, metin[i]);
        sifreHarfSirasi = bul(alfabe, sifre[j]);
 
        if (metinHarfSirasi != -1 && sifreHarfSirasi != -1) {
 
            metinHarfSirasi = (metinHarfSirasi + sifreHarfSirasi) % alfabeBoyutu;
            metin[i] = alfabe[metinHarfSirasi];
        }
    }
 
}
 
void sifreCoz(char alfabe[], char sifre[]) {
    int i, j = 0, metinHarfSirasi, sifreHarfSirasi;
    int metinBoyut = strlen(metin);
    int sifreBoyut = strlen(sifre);
 
    for (i = 0; i < metinBoyut; i++, j++) {
        if (j >= sifreBoyut)
            j = 0;
 
        metinHarfSirasi = bul(alfabe, metin[i]);
        sifreHarfSirasi = bul(alfabe, sifre[j]);
 
        if (metinHarfSirasi != -1 && sifreHarfSirasi != -1) {
            metinHarfSirasi = (metinHarfSirasi - sifreHarfSirasi) % alfabeBoyutu;
 
            if (metinHarfSirasi < 0)
                metinHarfSirasi += alfabeBoyutu;
 
            metin[i] = alfabe[metinHarfSirasi];
        }
    }
 
}
 
int bul(char alfabe[], char arananHarf) {
 
    int i, sayac = -1;
 
    for (i = 0; i < alfabeBoyutu; i++) {
        if (arananHarf == alfabe[i])
            sayac = i;
    }
    return sayac;
}
