#include <MotorControl.h>

MotorControl motor(13);  // 13 numaralı pini kontrol etmek için MotorControl sınıfından bir nesne oluşturulur

void setup() {
  // İhtiyaç duyulan ayarlamalar yapılabilir
}

void loop() {
  motor.Yaz(HIGH);  // Motoru çalıştırmak için "Yaz" fonksiyonu çağrılır
  delay(2000);     // 2 saniye beklenir
  motor.Yaz(LOW);  // Motoru durdurmak için "Yaz" fonksiyonu çağrılır
  delay(2000);     // 2 saniye beklenir
}
