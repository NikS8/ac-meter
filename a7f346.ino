void setup() {
    Serial.begin(9600);
    pinMode( A1, INPUT );
    pinMode( A2, INPUT );
    pinMode( A3, INPUT );
  //  analogReference(INTERNAL);
    analogReference(DEFAULT);
}

void loop() {
    int x1 = readMean(1, 40);
    int x2 = readMean(2, 40);
    int x3 = readMean(3, 40);
 /*   Serial.print("   ");
    Serial.print(x1);
    Serial.print("   ");
    Serial.print(x2);
    Serial.print("   x3= ");
    Serial.print(x3);
    */
    float ac1 = 2.8e-08*x1*x1*x1+7.4e-06*x1*x1+0.00057*x1+0.1;
    float ac2 = 2.2e-08*x2*x2*x2+5e-06*x2*x2+0.0014*x2+0.06;
    float ac3 = 2.8e-08*x1*x1*x1+7.4e-06*x1*x1+0.00057*x1+0.1;
    Serial.print("   ");
    Serial.print(ac1);
    Serial.print("   ");
    Serial.print(ac2);
    Serial.print("   ");
    Serial.println(ac3);


}

// функция считывает аналоговый вход заданное количество раз
// и возвращает отфильтрованное значение
int readMean(int pin, int samples){
  // переменная для хранения суммы считанных значений
  int sum = 0;
  // чтение и складывание значений
  for (int i = 0; i < samples; i++){
    sum = sum + analogRead(pin);
  }
  // делим сумму значений на количество измерений
  sum = sum/samples;
  // возвращаем среднее значение
  return sum;
}