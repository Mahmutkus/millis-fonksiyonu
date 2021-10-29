unsigned long SimdikiZaman = 0;
unsigned long OncekiZaman = 0;
int aralik = 999;

void setup() 
{

}

void loop() 
{
     SimdikiZaman = millis();
  if  (SimdikiZaman - OncekiZaman > aralik)
   {
       OncekiZaman = SimdikiZaman;
       ^^örnek Serial.print("BASINÇ ");  Serial.print(bmp.readPressure()); Serial.print(" Pa");   Serial.print("  ");
 }
}
