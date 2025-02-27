// web projesi.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

using namespace std;

#include <iostream>
/*
int main() {
    // Değişken tanımlamaları
    std::string ad, soyad;
    int yas;
    float boy;
    char cinsiyet;

    // Kullanıcıdan bilgileri alma
    cout << "Adınızı giriniz: ";
    std::cin >> ad;

    cout << "Soyadınızı giriniz: ";
    cin >> soyad;

    cout << "Yaşınızı giriniz: ";
    cin >> yas;

    cout << "Boyunuzu giriniz (örneğin 1.75): ";
    cin >> boy;

    cout << "Cinsiyetinizi giriniz (E/K): ";
    cin >> cinsiyet;

    // Çıktıyı düzenli şekilde ekrana yazdırma
    cout << "\nBilgileriniz:\n";
    cout << "İsim: \t\"" << ad << " " << soyad << "\"\n";
    cout << "Yaş: \t" << yas << "\n";
    cout << "Boy: \t" << boy << "\n";
    cout << "Cinsiyet: \t" << cinsiyet << "\n";

    return 0;
}
*/
/*
int main()
{
    std::string urunAdi;
    int adet;
    float birimFiyat, toplamTutar;

    // Kullanıcıdan giriş al
    cout << "Ürün adını giriniz: ";
    cin >> urunAdi;

    cout << "Ürün adedini giriniz: ";
    cin >> adet;

    cout << "Birim fiyatını giriniz: ";
    cin >> birimFiyat;

    // Toplam tutarı hesapla
    toplamTutar = adet * birimFiyat;

    // Sonucu ekrana yazdır
    cout << "\nAlışveriş Özeti:\n";
    cout << "Ürün Adı\t: \"" << urunAdi << "\"\n";
    cout << "Adet\t\t: " << adet << "\n";
    cout << "Birim Fiyat\t: " << birimFiyat << " TL\n";
    cout << "Toplam Tutar\t: " << toplamTutar << " TL\n";

    return 0;
}
*/


int main()
{
    float celsius, fahrenheit;

    // Kullanıcıdan sıcaklık değerini al
    cout << "Celsius degerini giriniz: ";
    cin >> celsius;

    // Fahrenheit dönüşümü (Formül: F = C * 9/5 + 32)
    fahrenheit = celsius * 9 / 5 + 32;

    // Sonucu ekrana yazdır
    cout << "\nSıcaklık Dönüşümü:\n";
    cout << "Celsius\t\t: " << celsius << "°C\n";
    cout << "Fahrenheit\t: " << fahrenheit << "°F\n";
    cout << "Formül\t\t: \"F = C * 9/5 + 32\"\n";

    return 0;
}


// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
