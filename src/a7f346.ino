
void setup() {
    Serial.begin(9600);
}

void loop() {
    int x1 = analogRead(1);
    int x2 = analogRead(2);
    int x3 = analogRead(3);
    Serial.print("   ");
    Serial.print(x1);
    Serial.print("   ");
    Serial.print(x2);
    Serial.print("   ");
    Serial.println(x3);

}