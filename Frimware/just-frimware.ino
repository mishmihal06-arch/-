// ==================== ПИНЫ МОТОРОВ ====================
// Мотор 1 (левый)
#define M1_IN1 5
#define M1_IN2 6
#define M1_ENA 7

// Мотор 2 (правый)
#define M2_IN1 15
#define M2_IN2 16
#define M2_ENB 17

// Мотор 3 (задний) - ИЗМЕНЕНО: пин скорости теперь 9, а не 3!
#define M3_IN1 18
#define M3_IN2 8
#define M3_ENA 9  // <-- ВСТАВЬ СЮДА НОВЫЙ НОМЕР ПИНА, КУДА ПЕРЕСТАВИЛ ПРОВОД

// Скорость моторов (от 0 до 255)
#define SPEED 200 // Подняли мощность, чтобы преодолеть трение ковра

void setup() {
  Serial.begin(115200);
  delay(1000); // Ждем 1 секунду для стабилизации питания при включении
  Serial.println("Старт! Инициализация моторов...");
  
  // Настраиваем все пины как выходы
  pinMode(M1_IN1, OUTPUT); pinMode(M1_IN2, OUTPUT); pinMode(M1_ENA, OUTPUT);
  pinMode(M2_IN1, OUTPUT); pinMode(M2_IN2, OUTPUT); pinMode(M2_ENB, OUTPUT);
  pinMode(M3_IN1, OUTPUT); pinMode(M3_IN2, OUTPUT); pinMode(M3_ENA, OUTPUT);
  
  Serial.println("Поехали вперёд!");
  
  // Включаем все моторы вперёд
  digitalWrite(M1_IN1, HIGH); digitalWrite(M1_IN2, LOW); analogWrite(M1_ENA, SPEED);
  digitalWrite(M2_IN1, HIGH); digitalWrite(M2_IN2, LOW); analogWrite(M2_ENB, SPEED);
  digitalWrite(M3_IN1, HIGH); digitalWrite(M3_IN2, LOW); analogWrite(M3_ENA, SPEED);
  
  Serial.println("Команда на вращение отправлена.");
}

void loop() {
  // Ничего не делаем
}
