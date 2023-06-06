# Arduino-Libary-Create
example of how to develop library for arduino



MotorControl.h (Header dosyası):

1. `MotorControl_h` ön işlemci komutu, tekrar tanımlamaları önler ve dosyanın birden fazla kez dahil edilmesini engeller.
2. `Arduino.h` kütüphanesi, Arduino işlevlerine erişim sağlar.
3. `MotorControl` sınıfı tanımlanır.
4. `public` erişim belirleyici, sınıfın dışından erişilebilen üyeleri tanımlar.
5. `MotorControl(int pin)` kurucu fonksiyon, MotorControl sınıfından bir nesne oluşturulduğunda çalışır.
6. `void Oku()` fonksiyonu, belirtilen pini HIGH (yüksek) yapar.
7. `void Yaz(int value)` fonksiyonu, belirtilen pini belirtilen değere (HIGH veya LOW) ayarlar.
8. `private` erişim belirleyici, sınıfın dışından erişilemeyen üyeleri tanımlar.
9. `_pin` değişkeni, motor kontrolü için kullanılacak pin numarasını tutar.

MotorControl.cpp (Kaynak dosyası):

1. `MotorControl.h` başlık dosyası dahil edilir.
2. `MotorControl::MotorControl(int pin)` fonksiyonu, MotorControl sınıfının kurucusunu tanımlar.
3. `_pin` değişkenine parametre olarak gelen pin numarası atanır.
4. `pinMode(_pin, OUTPUT)` işlevi, belirtilen pinin çıkış modunda ayarlanmasını sağlar.
5. `MotorControl::Oku()` fonksiyonu, belirtilen pini HIGH (yüksek) yapar.
6. `MotorControl::Yaz(int value)` fonksiyonu, belirtilen pini belirtilen değere (HIGH veya LOW) ayarlar.
7. `MotorControl::Yap()` fonksiyonu, önce `Oku()` fonksiyonunu çağırır, ardından 1 saniye bekler ve `Yaz(LOW)` fonksiyonunu çağırarak motoru durdurur.

Örnek kod:

1. `MotorControl.h` başlık dosyası dahil edilir.
2. `MotorControl` sınıfından `motor` nesnesi oluşturulur ve 13 numaralı pin kullanılacak şekilde başlatılır.
3. `setup()` fonksiyonu, Arduino başlatıldığında bir kez çalıştırılır. İhtiyaç duyulan ayarlamalar burada yapılabilir. Bu örnekte herhangi bir ayarlama yapılmamıştır.
4. `loop()` fonksiyonu, Arduino sürekli olarak çalıştığı sürece tekrarlanır.
5. `motor.Yaz(HIGH)` komutuyla motor çalıştırılır.
6. `delay(2000)` komutuyla 2 saniye beklenir.
7. `motor.Yaz(LOW)` komutuyla motor durdurulur.
8. `delay(2000)` komutuyla tekrar 2 saniye beklenir.
9. Bu işlem sürekli olarak tekrarlanır.

