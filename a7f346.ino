void setup() {
    Serial.begin(9600);
    pinMode( A1, INPUT );
    pinMode( A2, INPUT );
    pinMode( A3, INPUT );
  //  analogReference(INTERNAL);
    analogReference(DEFAULT);
}

void loop() {
    int x1 = analogRead(1);
    int x2 = analogRead(2);
    int x3 = analogRead(3);
 /*   Serial.print("   ");
    Serial.print(x1);
    Serial.print("   ");
    Serial.print(x2);
    Serial.print("   x3= ");
    Serial.print(x3);
    */
    float ac1 = 2.4E-08*x1*x1*x1+6e-06*x1*x1+0.001*x1+0.08;
    float ac2 = 2.4E-08*x2*x2*x2+6e-06*x2*x2+0.001*x2+0.08;
    float ac3 = 2.4E-08*x3*x3*x3+6e-06*x3*x3+0.001*x3+0.08;
    Serial.print("   ");
    Serial.print(ac1);
    Serial.print("   ");
    Serial.print(ac2);
    Serial.print("   ");
    Serial.println(ac3);

}