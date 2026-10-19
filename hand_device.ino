#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);



const int pin_pressure = A0;
int pressure = 0;
int threshold=90;
int count=0;
bool wasPressed=false;

void setup() {
  Serial.begin(9600);
  delay(500);
  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
     // Show initial display buffer contents on the screen --
  display.clearDisplay();
  display.display();
  
  }
}

void loop() {
 int pressure = analogRead(pin_pressure);
int pressurepercent=map(pressure,0,1023,0,100);
bool isPressed= pressurepercent>threshold;
if(isPressed && !wasPressed){
  count++;
}
wasPressed=isPressed;

  Serial.println(pressurepercent);
  Serial.println(count);
  delay(100);
  display.clearDisplay();
  // Draw text
  display.setTextSize(3);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 9);

  display.print("P: ");
  display.print(pressurepercent);
  display.println("%");
display.print("C: ");
display.print(count);
  // Send buffer to screen
  display.display();

  delay(100);
}
