#include <stdio.h>
#include <stdlib.h>
#define buyuk_sabit_sayi 123456789

int main()
{
    // ---- 4 TEMEL VERİ TİPİ ----
    // char, int, double, float

    char harf = 'T'; // Değişkene tek satırda atama bu şekilde. Tipi değişken_ismi = değeri

    int sayi, sayi2;      // Diğer bir atama şekli. burada tip ve isimler yazılıyor
    sayi = 5, sayi2 = 10; // burada da isim = değer şeklinde atanabiliyor.

    double sayi_2 = 999.888;
    float sayi_3 = 7.5;

    // yazdırma olarak bir değişken yazdırırken char ise (%c), int ise (%d), float veya double ise (%f) kullanıyoruz.
    printf("Karakter: %c\n", harf);
    printf("Tam sayılar: %d\n\t%d\n", sayi, sayi2); // \n -> bir alt satıra geçmeye yarıyor, \t -> bir tab boşluk bırakmak için
    printf("Ondalıklı sayılar: %f\n\t%.2f\n", sayi_2, sayi_3);
    // bir ondalıklı sayının virgülden sonrası için kaç basamak istiyorsak yüzde ile f arasına (.basamak_sayisi) yazmak yeterli

    // SABİTLER (DEĞİŞMEZLER)
    // Değiştirilemeyen değerlerdir. Program boyunca sadece kullanılabilirler.

    // 1. yöntem
    const float PI = 3.141592;
    printf("\nSabit PI sayısı: %f\n", PI);

    // 2. yöntem - en üstte define ile başlayan satır
    printf("Sabit bir tam sayı: %d\n", buyuk_sabit_sayi);
}