
 // ESP32 Hello World Serial Print
void setup() 
{
  Serial.begin(115200);
}
 
void loop() 
{
  Serial.println("Hello World!");
  delay(1000);
}