#include<Time.h>
#include <Adafruit_NeoPixel.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int ledPin_1 = 26;
const int ledPin_2 = 27;
const int ledPin_3 = 51;
const int ledPin_4 = 29;
const int ledPin_5 = 39;
const int ledPin_6 = 48;
const int ledPin_7 = 41;
const int ledPin_8 = 33;
const int ledPin_9 = 34;
const int ledPin_10 = 35;
const int ledPin_11 = 36;
const int ledPin_12 = 37;
const int ledPin_13 = 42;
const int ledPin_14 = 32;
const int ledPin_15 = 49;
const int ledPin_16 = 43;
const int ledPin_17 = 50;
const int ledPin_18 = 47;
const int ledPin_19 = 30;
const int ledPin_20 = 31;
const int ledPin_21 = 38;
const int ledPin_22 = 40;
const int ledPin_23 = 28;
const int ledPin_24 = 46;
const int switch_1 = 2;
const int switch_2 = 3;
const int switch_3 = 4;
const int switch_4 = 5;
const int switch_5 = 6;
const int switch_6 = 7;
const int switch_7 = 8;
const int switch_8 = 9;
const int switch_9 = 10;
const int switch_10 = 11;
const int switch_11 = 12;
const int switch_12 = A7;
const int switch_13 = 14;
const int switch_14 = 15;
const int switch_15 = 16;
const int switch_16 = A4;
const int switch_17 = 18;
const int switch_18 = 19;
const int switch_19 = 20;
const int switch_20 = 21;
const int switch_21 = 22;
const int switch_22 = 23;
const int switch_23 = 24;
const int switch_24 = 25;
const int NOL = 4;
const int bright = 30;


Adafruit_NeoPixel pixels_1 = Adafruit_NeoPixel(NOL, ledPin_1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_2 = Adafruit_NeoPixel(NOL, ledPin_2, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_3 = Adafruit_NeoPixel(NOL, ledPin_3, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_4 = Adafruit_NeoPixel(NOL, ledPin_4, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_5 = Adafruit_NeoPixel(NOL, ledPin_5, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_6 = Adafruit_NeoPixel(NOL, ledPin_6, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_7 = Adafruit_NeoPixel(NOL, ledPin_7, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_8 = Adafruit_NeoPixel(NOL, ledPin_8, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_9 = Adafruit_NeoPixel(NOL, ledPin_9, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_10 = Adafruit_NeoPixel(NOL, ledPin_10, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_11 = Adafruit_NeoPixel(NOL, ledPin_11, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_12 = Adafruit_NeoPixel(NOL, ledPin_12, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_13 = Adafruit_NeoPixel(NOL, ledPin_13, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_14 = Adafruit_NeoPixel(NOL, ledPin_14, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_15 = Adafruit_NeoPixel(NOL, ledPin_15, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_16 = Adafruit_NeoPixel(NOL, ledPin_16, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_17 = Adafruit_NeoPixel(NOL, ledPin_17, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_18 = Adafruit_NeoPixel(NOL, ledPin_18, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_19 = Adafruit_NeoPixel(NOL, ledPin_19, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_20 = Adafruit_NeoPixel(NOL, ledPin_20, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_21 = Adafruit_NeoPixel(NOL, ledPin_21, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_22 = Adafruit_NeoPixel(NOL, ledPin_22, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_23 = Adafruit_NeoPixel(NOL, ledPin_23, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_24 = Adafruit_NeoPixel(NOL, ledPin_24, NEO_GRB + NEO_KHZ800);

int red = 0;
int green = 0;
int blue = 0;
void setup() 
{
  lcd.begin();
  lcd.backlight();
  Serial.begin(9600);
  pixels_1.begin();
  pixels_1.setBrightness(bright);
  pixels_2.begin();
  pixels_2.setBrightness(bright);
  pixels_3.begin();
  pixels_3.setBrightness(bright);
  pixels_4.begin();
  pixels_4.setBrightness(bright);
  pixels_5.begin();
  pixels_5.setBrightness(bright);
  pixels_6.begin();
  pixels_6.setBrightness(bright);
  pixels_7.begin();
  pixels_7.setBrightness(bright);
  pixels_8.begin();
  pixels_8.setBrightness(bright);
  pixels_9.begin();
  pixels_9.setBrightness(bright);
  pixels_10.begin();
  pixels_10.setBrightness(bright);
  pixels_11.begin();
  pixels_11.setBrightness(bright);
  pixels_12.begin();
  pixels_12.setBrightness(bright);
  pixels_13.begin();
  pixels_13.setBrightness(bright);
  pixels_14.begin();
  pixels_14.setBrightness(bright);
  pixels_15.begin();
  pixels_15.setBrightness(bright);
  pixels_16.begin();
  pixels_16.setBrightness(bright);
  pixels_17.begin();
  pixels_17.setBrightness(bright);
  pixels_18.begin();
  pixels_18.setBrightness(bright);
  pixels_19.begin();
  pixels_19.setBrightness(bright);
  pixels_20.begin();
  pixels_20.setBrightness(bright);
  pixels_21.begin();
  pixels_21.setBrightness(bright);
  pixels_22.begin();
  pixels_22.setBrightness(bright);
  pixels_23.begin();
  pixels_23.setBrightness(bright);
  pixels_24.begin();
  pixels_24.setBrightness(bright);
  pinMode(switch_1,INPUT); 
  pinMode(switch_2,INPUT); 
  pinMode(switch_3,INPUT); 
  pinMode(switch_4,INPUT);
  pinMode(switch_5,INPUT); 
  pinMode(switch_6,INPUT); 
  pinMode(switch_7,INPUT); 
  pinMode(switch_8,INPUT);
  pinMode(switch_9,INPUT); 
  pinMode(switch_10,INPUT);
  pinMode(switch_11,INPUT); 
  pinMode(switch_12,INPUT);
  pinMode(switch_13,INPUT); 
  pinMode(switch_14,INPUT); 
  pinMode(switch_15,INPUT); 
  pinMode(switch_16,INPUT);
  pinMode(switch_17,INPUT); 
  pinMode(switch_18,INPUT); 
  pinMode(switch_19,INPUT); 
  pinMode(switch_20,INPUT);
  pinMode(switch_21,INPUT); 
  pinMode(switch_22,INPUT);
  pinMode(switch_23,INPUT); 
  pinMode(switch_24,INPUT);
  lcd.print("it works");
}
int l1=0;
int l2=0;
int l3=0;
int l4=0;
int l5=0;
int l6=0;
int l7=0;
int l8=0;
int l9=0;
int l10=0;
int l11=0;
int l12=0;
int l13=0;
int l14=0;
int l15=0;
int l16=0;
int l17=0;
int l18=0;
int l19=0;
int l20=0;
int l21=0;
int l22=0;
int l23=0;
int l24=0;
int score=0;
void loop() 
{
  l1=l2=l3=l4=l5=l6=l7=l8=l9=l10=l11=l12=l13=l14=l15=l16=l17=l18=l19=l20=l21=l22=l23=l24=0;
  for(int i=0;i<NOL;i++)
  {
    pixels_1.setPixelColor(i, pixels_1.Color(255,0,0)); 
    pixels_1.show();
    pixels_2.setPixelColor(i, pixels_2.Color(255,0,0)); 
    pixels_2.show();
    pixels_3.setPixelColor(i, pixels_3.Color(255,0,0)); 
    pixels_3.show();
    pixels_4.setPixelColor(i, pixels_4.Color(255,0,0)); 
    pixels_4.show();  
    pixels_5.setPixelColor(i, pixels_5.Color(255,0,0)); 
    pixels_5.show();
    pixels_6.setPixelColor(i, pixels_6.Color(255,0,0)); 
    pixels_6.show();
    pixels_7.setPixelColor(i, pixels_7.Color(255,0,0)); 
    pixels_7.show();
    pixels_8.setPixelColor(i, pixels_8.Color(255,0,0)); 
    pixels_8.show();  
    pixels_9.setPixelColor(i, pixels_9.Color(255,0,0)); 
    pixels_9.show();
    pixels_10.setPixelColor(i, pixels_10.Color(255,0,0)); 
    pixels_10.show();
    pixels_11.setPixelColor(i, pixels_11.Color(255,0,0)); 
    pixels_11.show();
    pixels_12.setPixelColor(i, pixels_12.Color(255,0,0)); 
    pixels_12.show();
    pixels_13.setPixelColor(i, pixels_13.Color(255,0,0)); 
    pixels_13.show();
    pixels_14.setPixelColor(i, pixels_14.Color(255,0,0)); 
    pixels_14.show();
    pixels_15.setPixelColor(i, pixels_15.Color(255,0,0)); 
    pixels_15.show();
    pixels_16.setPixelColor(i, pixels_16.Color(255,0,0)); 
    pixels_16.show();  
    pixels_17.setPixelColor(i, pixels_17.Color(255,0,0)); 
    pixels_17.show();
    pixels_18.setPixelColor(i, pixels_18.Color(255,0,0)); 
    pixels_18.show();
    pixels_19.setPixelColor(i, pixels_19.Color(255,0,0)); 
    pixels_19.show();
    pixels_20.setPixelColor(i, pixels_20.Color(255,0,0)); 
    pixels_20.show();  
    pixels_21.setPixelColor(i, pixels_21.Color(255,0,0)); 
    pixels_21.show();
    pixels_22.setPixelColor(i, pixels_22.Color(255,0,0)); 
    pixels_22.show();
    pixels_23.setPixelColor(i, pixels_23.Color(255,0,0)); 
    pixels_23.show();
    pixels_24.setPixelColor(i, pixels_24.Color(255,0,0)); 
    pixels_24.show();
  }  
  lcd.clear();
  lcd.print("Press a button to");
  lcd.setCursor(0,1);
  lcd.print("start");
  int s1=digitalRead(switch_1);
  int s2=digitalRead(switch_2);
  int s3=digitalRead(switch_3);
  int s4=digitalRead(switch_4);
  int s5=digitalRead(switch_5);
  int s6=digitalRead(switch_6);
  int s7=digitalRead(switch_7);
  int s8=digitalRead(switch_8);
  int s9=digitalRead(switch_9);
  int s10=digitalRead(switch_10);
  int s11=digitalRead(switch_11);
  int s12=digitalRead(switch_12);
  int s13=digitalRead(switch_13);
  int s14=digitalRead(switch_14);
  int s15=digitalRead(switch_15);
  int s16=digitalRead(switch_16);
  int s17=digitalRead(switch_17);
  int s18=digitalRead(switch_18);
  int s19=digitalRead(switch_19);
  int s20=digitalRead(switch_20);
  int s21=digitalRead(switch_21);
  int s22=digitalRead(switch_22);
  int s23=digitalRead(switch_23);
  int s24=digitalRead(switch_24); 
  int t;
  do
  {
    delay(100);
    s1=digitalRead(switch_1);
    s2=digitalRead(switch_2);
    s3=digitalRead(switch_3);
    s4=digitalRead(switch_4);
    s5=digitalRead(switch_5);
    s6=digitalRead(switch_6);
    s7=digitalRead(switch_7);
    s8=digitalRead(switch_8);
    s9=digitalRead(switch_9);
    s10=digitalRead(switch_10);
    s11=digitalRead(switch_11);
    s12=digitalRead(switch_12);
    s13=digitalRead(switch_13);
    s14=digitalRead(switch_14);
    s15=digitalRead(switch_15);
    s16=digitalRead(switch_16);
    s17=digitalRead(switch_17);
    s18=digitalRead(switch_18);
    s19=digitalRead(switch_19);
    s20=digitalRead(switch_20);
    s21=digitalRead(switch_21);
    s22=digitalRead(switch_22);
    s23=digitalRead(switch_23);
    s24=digitalRead(switch_24);
    t=s1+s2+s3+s4+s5+s6+s7+s8+s9+s10+s11+s12+s13+s14+s15+s16+s17+s18+s19+s21+s22+s23+s24;
  }while(t>22);
  lcd.clear();
  lcd.print("Welcome to Mat!");
  lcd.setCursor(0,1);
  lcd.print("Select a mode:");
  for(int i=0;i<NOL;i++)
  {
     pixels_4.setPixelColor(i, pixels_4.Color(0,255,0)); 
     pixels_4.show();
     pixels_21.setPixelColor(i, pixels_21.Color(0,0,255)); 
     pixels_21.show();
  }
  lcd.clear();
  lcd.print("1)Tapping(green)");
  lcd.setCursor(0,1);
  lcd.print("2)Burpees(blue)");
  do
  {
    delay(100);  
    s4=digitalRead(switch_3);
    s21=digitalRead(switch_22);
  }while(s4+s21==2);
  for(int i=0;i<NOL;i++)
  {
     pixels_4.setPixelColor(i, pixels_4.Color(0,0,0)); 
     pixels_4.show();
     pixels_21.setPixelColor(i, pixels_21.Color(0,0,0)); 
     pixels_21.show();
  }
  delay(1000);
  if(s21==0)
  { 
    delay(100);
    int found=0;
    lcd.print("Press the highes");
    lcd.setCursor(0,1);
    lcd.print("button you reach");
    do
    {
      s1=digitalRead(switch_1);
      s2=digitalRead(switch_2);
      s3=digitalRead(switch_3);
      s4=digitalRead(switch_4);
      s5=digitalRead(switch_5);
      s6=digitalRead(switch_6);
      s7=digitalRead(switch_7);
      s8=digitalRead(switch_8);
      s9=digitalRead(switch_9);
      s10=digitalRead(switch_10);
      s11=digitalRead(switch_11);
      s12=digitalRead(switch_12);
      s13=digitalRead(switch_13);
      s14=digitalRead(switch_14);
      s15=digitalRead(switch_15);
      s16=digitalRead(switch_16);
      s17=digitalRead(switch_17);
      s18=digitalRead(switch_18);
      s19=digitalRead(switch_19);
      s20=digitalRead(switch_20);
      s21=digitalRead(switch_21);
      s22=digitalRead(switch_22);
      s23=digitalRead(switch_23);
      s24=digitalRead(switch_24);
      delay(100);
    }while(s1+s2+s3+s4+s5+s6+s7+s8+s9+s10+s11+s12+s13+s14+s15+s16+s17+s18+s19+s20+s21+s22+s23+s24==23);
      if(s1+s2+s3+s4+s5+s6+s7+s8+s9+s10+s11+s12==11)
        if(s1+s2+s3+s4+s5+s6==5)
          if(s1+s2+s3==2)
            if(!s1)
              found=1;
            else if(!s2)
              found=2;
            else
              found=3;
          else 
            if(!s4)
              found=4;
            else if(!s5)
              found=5;
            else
              found=6;
        else
          if(s7+s8+s9==2)
            if(!s7)
              found=7;
            else if(!s8)
              found=8;
            else
              found=9;
          else 
            if(s10)
              found=10;
            else if(s11)
              found=11;
            else
              found=12;
      else
        if(s13+s14+s15+s16+s17+s18)
          if(s13+s14+s15)
            if(s13)
              found=13;
            else if(s14)
              found=14;
            else
              found=15;
          else 
            if(s16)
              found=16;
            else if(s17)
              found=17;
            else
              found=18;
        else
          if(s19+20+s21)
            if(s19)
              found=19;
            else if(s20)
              found=20;
            else
              found=21;
          else 
            if(s22)
              found=22;
            else if(s23)
              found=23;
            else
              found=24;               
    lcd.clear();
    lcd.print("The game begins");
    lcd.setCursor(0,1);
    lcd.print("in 3,");
    delay(1000);
    lcd.print(" 2,");
    delay(1000);
    lcd.print(" 1..");
    delay(1000);
    unsigned long startTime = millis();
    int score=0;
    if(found==12||found==1||found==13||found==24)
    {
      do
      { 
        do
        { 
          delay(100);
          for(int i=0;i<NOL;i++)
          {
            pixels_1.setPixelColor(i, pixels_1.Color(0,255,0)); 
            pixels_1.show();
            pixels_24.setPixelColor(i, pixels_24.Color(0,255,0)); 
            pixels_24.show();
          } 
          s1=digitalRead(switch_1);
          s24=digitalRead(switch_24);
        }while((s1||s24)&&(((millis()-startTime)/1000<60*2)));
        for(int i=0;i<NOL;i++)
          {
            pixels_1.setPixelColor(i, pixels_1.Color(0,0,0)); 
            pixels_1.show();
            pixels_24.setPixelColor(i, pixels_24.Color(0,0,0)); 
            pixels_24.show();
          } 
        do
        { 
          delay(100);
          for(int i=0;i<NOL;i++)
          {
            pixels_6.setPixelColor(i, pixels_6.Color(0,255,0)); 
            pixels_6.show();
            pixels_19.setPixelColor(i, pixels_19.Color(0,255,0)); 
            pixels_19.show();
          } 
          s6=digitalRead(switch_6);
          s19=digitalRead(switch_19);
        }while((s6||s19)&&(((millis()-startTime)/1000<60*2)));
        for(int i=0;i<NOL;i++)
          {
            pixels_6.setPixelColor(i, pixels_6.Color(0,0,0)); 
            pixels_6.show();
            pixels_19.setPixelColor(i, pixels_19.Color(0,0,0)); 
            pixels_19.show();
          } 
      }while(((millis()-startTime)/1000)<60*2);          
    }
    else if(found==11||found==2||found==14||found==23)
    {
      do
      { 
        do
        { 
          delay(100);
          for(int i=0;i<NOL;i++)
          {
            pixels_2.setPixelColor(i, pixels_2.Color(0,255,0)); 
            pixels_2.show();
            pixels_23.setPixelColor(i, pixels_23.Color(0,255,0)); 
            pixels_23.show();
          } 
          s2=digitalRead(switch_2);
          s23=digitalRead(switch_23);
        }while((s2||s23)&&(((millis()-startTime)/1000<60*2)));
        for(int i=0;i<NOL;i++)
          {
            pixels_2.setPixelColor(i, pixels_2.Color(0,0,0)); 
            pixels_2.show();
            pixels_23.setPixelColor(i, pixels_23.Color(0,0,0)); 
            pixels_23.show();
          } 
        do
        { 
          delay(100);
          for(int i=0;i<NOL;i++)
          {
            pixels_6.setPixelColor(i, pixels_6.Color(0,255,0)); 
            pixels_6.show();
            pixels_19.setPixelColor(i, pixels_19.Color(0,255,0)); 
            pixels_19.show();
          } 
          s6=digitalRead(switch_6);
          s19=digitalRead(switch_19);
        }while((s6||s19)&&(((millis()-startTime)/1000<60*2)));
        for(int i=0;i<NOL;i++)
          {
            pixels_6.setPixelColor(i, pixels_6.Color(0,0,0)); 
            pixels_6.show();
            pixels_19.setPixelColor(i, pixels_19.Color(0,0,0)); 
            pixels_19.show();
          } 
      }while(((millis()-startTime)/1000)<60*2);           
    }
    else if(found==10||found==3||found==15||found==22)
    {
      do
      { 
        do
        { 
          delay(100);
          for(int i=0;i<NOL;i++)
          {
            pixels_3.setPixelColor(i, pixels_3.Color(0,255,0)); 
            pixels_3.show();
            pixels_22.setPixelColor(i, pixels_22.Color(0,255,0)); 
            pixels_22.show();
          } 
          s3=digitalRead(switch_3);
          s22=digitalRead(switch_22);
        }while((s3||s22)&&(((millis()-startTime)/1000<60*2)));
        for(int i=0;i<NOL;i++)
          {
            pixels_3.setPixelColor(i, pixels_3.Color(0,0,0)); 
            pixels_3.show();
            pixels_22.setPixelColor(i, pixels_22.Color(0,0,0)); 
            pixels_22.show();
          } 
        do
        { 
          delay(100);
          for(int i=0;i<NOL;i++)
          {
            pixels_6.setPixelColor(i, pixels_6.Color(0,255,0)); 
            pixels_6.show();
            pixels_19.setPixelColor(i, pixels_19.Color(0,255,0)); 
            pixels_19.show();
          } 
          s6=digitalRead(switch_6);
          s19=digitalRead(switch_19);
        }while((s6||s19)&&(((millis()-startTime)/1000<60*2)));
        for(int i=0;i<NOL;i++)
          {
            pixels_6.setPixelColor(i, pixels_6.Color(0,0,0)); 
            pixels_6.show();
            pixels_19.setPixelColor(i, pixels_19.Color(0,0,0)); 
            pixels_19.show();
          } 
      }while(((millis()-startTime)/1000)<60*2);        
    }
    else if(found==9||found==4||found==16||found==21)
    {
      do
      { 
        do
        { 
          delay(100);
          for(int i=0;i<NOL;i++)
          {
            pixels_4.setPixelColor(i, pixels_4.Color(0,255,0)); 
            pixels_4.show();
            pixels_21.setPixelColor(i, pixels_21.Color(0,255,0)); 
            pixels_21.show();
          } 
          s4=digitalRead(switch_4);
          s22=digitalRead(switch_22);
        }while((s4||s21)&&(((millis()-startTime)/1000<60*2)));
        for(int i=0;i<NOL;i++)
          {
            pixels_4.setPixelColor(i, pixels_4.Color(0,0,0)); 
            pixels_4.show();
            pixels_21.setPixelColor(i, pixels_21.Color(0,0,0)); 
            pixels_21.show();
          } 
        do
        { 
          delay(100);
          for(int i=0;i<NOL;i++)
          {
            pixels_6.setPixelColor(i, pixels_6.Color(0,255,0)); 
            pixels_6.show();
            pixels_19.setPixelColor(i, pixels_19.Color(0,255,0)); 
            pixels_19.show();
          } 
          s6=digitalRead(switch_6);
          s19=digitalRead(switch_19);
        }while((s6||s19)&&(((millis()-startTime)/1000<60*2)));
        for(int i=0;i<NOL;i++)
          {
            pixels_6.setPixelColor(i, pixels_6.Color(0,0,0)); 
            pixels_6.show();
            pixels_19.setPixelColor(i, pixels_19.Color(0,0,0)); 
            pixels_19.show();
          } 
      }while(((millis()-startTime)/1000)<60*2);  
    }   
    }
    else if(s3==0)
    {
    delay(100);
    int found=0;
    lcd.print("Press the highes");
    lcd.setCursor(0,1);
    lcd.print("button you reach");
    do
    {
      int s1=digitalRead(switch_1);
      int s2=digitalRead(switch_2);
      int s3=digitalRead(switch_3);
      int s4=digitalRead(switch_4);
      int s5=digitalRead(switch_5);
      int s6=digitalRead(switch_6);
      int s7=digitalRead(switch_7);
      int s8=digitalRead(switch_8);
      int s9=digitalRead(switch_9);
      int s10=digitalRead(switch_10);
      int s11=digitalRead(switch_11);
      int s12=digitalRead(switch_12);
      int s13=digitalRead(switch_13);
      int s14=digitalRead(switch_14);
      int s15=digitalRead(switch_15);
      int s16=digitalRead(switch_16);
      int s17=digitalRead(switch_17);
      int s18=digitalRead(switch_18);
      int s19=digitalRead(switch_19);
      int s20=digitalRead(switch_20);
      int s21=digitalRead(switch_21);
      int s22=digitalRead(switch_22);
      int s23=digitalRead(switch_23);
      int s24=digitalRead(switch_24);
      delay(100);
    }while(s1+s2+s3+s4+s5+s6+s7+s8+s9+s10+s11+s12+s13+s14+s15+s16+s17+s18+s19+s20+s21+s22+s23+s24==24);
      if(s1+s2+s3+s4+s5+s6+s7+s8+s9+s10+s11+s12)
        if(s1+s2+s3+s4+s5+s6)
          if(s1+s2+s3)
            if(s1)
              found=1;
            else if(s2)
              found=2;
            else
              found=3;
          else 
            if(s4)
              found=4;
            else if(s5)
              found=5;
            else
              found=6;
        else
          if(s7+s8+s9)
            if(s7)
              found=7;
            else if(s8)
              found=8;
            else
              found=9;
          else 
            if(s10)
              found=10;
            else if(s11)
              found=11;
            else
              found=12;
      else
        if(s13+s14+s15+s16+s17+s18)
          if(s13+s14+s15)
            if(s13)
              found=13;
            else if(s14)
              found=14;
            else
              found=15;
          else 
            if(s16)
              found=16;
            else if(s17)
              found=17;
            else
              found=18;
        else
          if(s19+20+s21)
            if(s19)
              found=19;
            else if(s20)
              found=20;
            else
              found=21;
          else 
            if(s22)
              found=22;
            else if(s23)
              found=23;
            else
              found=24;  
    lcd.clear();
    lcd.print("The game begins");
    lcd.setCursor(0,1);
    lcd.print("in 3,");
    delay(1000);
    lcd.print(" 2,");
    delay(1000);
    lcd.print(" 1..");
    delay(1000);
    unsigned long startTime = millis();
    int score=0;
    if(found==1||found==12||found==13||found==24)
    {
    do
    { 
    delay(100);
    s1=digitalRead(switch_1);
    s2=digitalRead(switch_2);
    s3=digitalRead(switch_3);
    s4=digitalRead(switch_4);
    s5=digitalRead(switch_5);
    s6=digitalRead(switch_6);
    s7=digitalRead(switch_7);
    s8=digitalRead(switch_8);
    s9=digitalRead(switch_9);
    s10=digitalRead(switch_10);
    s11=digitalRead(switch_11);
    s12=digitalRead(switch_12);
    s13=digitalRead(switch_13);
    s14=digitalRead(switch_14);
    s15=digitalRead(switch_15);
    s16=digitalRead(switch_16);
    s17=digitalRead(switch_17);
    s18=digitalRead(switch_18);
    s19=digitalRead(switch_19);
    s20=digitalRead(switch_20);
    s21=digitalRead(switch_21);
    s22=digitalRead(switch_22);
    s23=digitalRead(switch_23);
    s24=digitalRead(switch_24);
    if((l1+l2+l3+l4+l5+l6+l7+l8+l9+l10+l11+l12+l13+l14+l15+l16+l17+l18+l19+l20+l21+l22+l23+l24)==0)
    {
     score++;
     int ran=random(24)+1;
     lcd.clear();
     lcd.print("     Points");
     lcd.setCursor(0,1);
     lcd.print("       ");
     lcd.print(score-1);
     if(ran==1)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_1.setPixelColor(i, pixels_1.Color(0,255,0));
          pixels_1.show();
        }
        l1=1;
      }
      else if(ran==2)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_2.setPixelColor(i, pixels_2.Color(0,255,0)); 
          pixels_2.show();
        }
        l2=1;
      }
      else if(ran==3)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_3.setPixelColor(i, pixels_3.Color(255,0,255)); 
          pixels_3.show();
        }
        l3=1;
      }
      else if(ran==4)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_4.setPixelColor(i, pixels_4.Color(0,255,0)); 
          pixels_4.show();
        }
        l4=1;
      }
      else if(ran==5)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_5.setPixelColor(i, pixels_5.Color(0,255,0)); 
          pixels_5.show();
        }
        l5=1;
      }
      else if(ran==6)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_6.setPixelColor(i, pixels_6.Color(0,255,0)); 
          pixels_6.show();
        }
        l6=1;
      }
      else if(ran==7)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_7.setPixelColor(i, pixels_7.Color(255,255,255)); 
          pixels_7.show();
        }
        l7=1;
      }
      else if(ran==8)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_8.setPixelColor(i, pixels_8.Color(0,0,255)); 
          pixels_8.show();
        }
        l8=1;
      }
      else if(ran==9)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_9.setPixelColor(i, pixels_9.Color(0,255,0)); 
          pixels_9.show();
        }
        l9=1;
      }
      else if(ran==10)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_10.setPixelColor(i, pixels_10.Color(0,255,0)); 
          pixels_10.show();
        }
        l10=1;
      }
      else if(ran==11)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_11.setPixelColor(i, pixels_11.Color(0,255,0)); 
          pixels_11.show();
        }
        l11=1;
      }
      else if(ran==12)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_12.setPixelColor(i, pixels_12.Color(0,255,0)); 
          pixels_12.show();
        }
        l12=1;
      }
      if(ran==13)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_13.setPixelColor(i, pixels_13.Color(0,255,0));
          pixels_13.show();
        }
        l13=1;
      }
      else if(ran==14)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_14.setPixelColor(i, pixels_14.Color(0,255,0)); 
          pixels_14.show();
        }
        l14=1;
      }
      else if(ran==15)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_15.setPixelColor(i, pixels_15.Color(255,0,255)); 
          pixels_15.show();
        }
        l15=1;
      }
      else if(ran==16)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_16.setPixelColor(i, pixels_16.Color(0,255,0)); 
          pixels_16.show();
        }
        l16=1;
      }
      else if(ran==17)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_17.setPixelColor(i, pixels_17.Color(0,255,0)); 
          pixels_17.show();
        }
        l17=1;
      }
      else if(ran==18)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_18.setPixelColor(i, pixels_18.Color(0,255,0)); 
          pixels_18.show();
        }
        l18=1;
      }
      else if(ran==19)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_19.setPixelColor(i, pixels_19.Color(255,255,255)); 
          pixels_19.show();
        }
        l19=1;
      }
      else if(ran==20)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_20.setPixelColor(i, pixels_20.Color(0,0,255)); 
          pixels_20.show();
        }
        l20=1;
      }
      else if(ran==21)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_21.setPixelColor(i, pixels_21.Color(0,255,0)); 
          pixels_21.show();
        }
        l21=1;
      }
      else if(ran==22)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_22.setPixelColor(i, pixels_22.Color(0,255,0)); 
          pixels_22.show();
        }
        l22=1;
      }
      else if(ran==23)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_23.setPixelColor(i, pixels_23.Color(0,255,0)); 
          pixels_23.show();
        }
        l23=1;
      }
      else if(ran==24)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_24.setPixelColor(i, pixels_24.Color(0,255,0)); 
          pixels_24.show();
        }
        l24=1;
      }
    }
      if(s1==0)
      {
        l1=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_1.setPixelColor(i, pixels_1.Color(0,0,0)); 
          pixels_1.show();
        }
      }
      if(s2==0)
      {
        l2=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_2.setPixelColor(i, pixels_2.Color(0,0,0)); 
          pixels_2.show();      
        }
      }
      if(s3==0)
      { 
        l3=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_3.setPixelColor(i, pixels_3.Color(0,0,0)); 
          pixels_3.show();
        }
      }
      if(s4==0)
      { 
        l4=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_4.setPixelColor(i, pixels_4.Color(0,0,0)); 
          pixels_4.show();
        }
      }
      if(s5==0)
      {
        l5=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_5.setPixelColor(i, pixels_5.Color(0,0,0)); 
          pixels_5.show();
        }
      }
      if(s6==0)
      {
        l6=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_6.setPixelColor(i, pixels_6.Color(0,0,0)); 
          pixels_6.show();      
        }
      }
      if(s7==0)
      { 
        l7=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_7.setPixelColor(i, pixels_7.Color(0,0,0)); 
          pixels_7.show();
        }
      }
      if(s8==0)
      { 
        l8=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_8.setPixelColor(i, pixels_8.Color(0,0,0)); 
          pixels_8.show();
        }
      }
      if(s9==0)
      { 
        l9=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_9.setPixelColor(i, pixels_9.Color(0,0,0)); 
          pixels_9.show();
        }
      }
      if(s10==0)
      { 
        l10=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_10.setPixelColor(i, pixels_10.Color(0,0,0)); 
          pixels_10.show();
        }
      }
      if(s11==0)
      { 
        l11=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_11.setPixelColor(i, pixels_11.Color(0,0,0)); 
          pixels_11.show();
        }
      }
      if(s12==0)
      { 
        l12=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_12.setPixelColor(i, pixels_12.Color(0,0,0)); 
          pixels_12.show();
        }
      }
      if(s13==0)
      {
        l13=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_13.setPixelColor(i, pixels_13.Color(0,0,0)); 
          pixels_13.show();
        }
      }
      if(s14==0)
      {
        l14=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_14.setPixelColor(i, pixels_14.Color(0,0,0)); 
          pixels_14.show();      
        }
      }
      if(s15==0)
      { 
        l15=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_15.setPixelColor(i, pixels_15.Color(0,0,0)); 
          pixels_15.show();
        }
      }
      if(s16==0)
      { 
        l16=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_16.setPixelColor(i, pixels_16.Color(0,0,0)); 
          pixels_16.show();
        }
      }
      if(s17==0)
      {
        l17=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_17.setPixelColor(i, pixels_17.Color(0,0,0)); 
          pixels_17.show();
        }
      }
      if(s18==0)
      {
        l18=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_18.setPixelColor(i, pixels_18.Color(0,0,0)); 
          pixels_18.show();      
        }
      }
      if(s19==0)
      { 
        l19=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_19.setPixelColor(i, pixels_19.Color(0,0,0)); 
          pixels_19.show();
        }
      }
      if(s20==0)
      { 
        l20=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_20.setPixelColor(i, pixels_20.Color(0,0,0)); 
          pixels_20.show();
        }
      }
      if(s21==0)
      { 
        l21=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_21.setPixelColor(i, pixels_21.Color(0,0,0)); 
          pixels_21.show();
        }
      }
      if(s22==0)
      { 
        l22=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_22.setPixelColor(i, pixels_22.Color(0,0,0)); 
          pixels_22.show();
        }
      }
      if(s23==0)
      { 
        l23=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_23.setPixelColor(i, pixels_23.Color(0,0,0)); 
          pixels_23.show();
        }
      }
      if(s24==0)
      { 
        l24=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_24.setPixelColor(i, pixels_24.Color(0,0,0)); 
          pixels_24.show();
        }
      }
    }while(((millis()-startTime)/1000)<60*2);
    }
    else if(found==2||found==11||found==14||found==23)
    {
    do
    { 
    delay(100);
    s1=digitalRead(switch_1);
    s2=digitalRead(switch_2);
    s3=digitalRead(switch_3);
    s4=digitalRead(switch_4);
    s5=digitalRead(switch_5);
    s6=digitalRead(switch_6);
    s7=digitalRead(switch_7);
    s8=digitalRead(switch_8);
    s9=digitalRead(switch_9);
    s10=digitalRead(switch_10);
    s11=digitalRead(switch_11);
    s12=digitalRead(switch_12);
    s13=digitalRead(switch_13);
    s14=digitalRead(switch_14);
    s15=digitalRead(switch_15);
    s16=digitalRead(switch_16);
    s17=digitalRead(switch_17);
    s18=digitalRead(switch_18);
    s19=digitalRead(switch_19);
    s20=digitalRead(switch_20);
    s21=digitalRead(switch_21);
    s22=digitalRead(switch_22);
    s23=digitalRead(switch_23);
    s24=digitalRead(switch_24);
    if((l2+l3+l4+l5+l6+l7+l8+l9+l10+l11+l14+l15+l16+l17+l18+l19+l20+l21+l22+l23)==0)
    {
     score++;
     int ran=random(20)+1;
     lcd.clear();
     lcd.print("     Points");
     lcd.setCursor(0,1);
     lcd.print("       ");
     lcd.print(score-1);
     if(ran==1)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_2.setPixelColor(i, pixels_2.Color(0,255,0)); 
          pixels_2.show();
        }
        l2=1;
      }
      else if(ran==2)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_3.setPixelColor(i, pixels_3.Color(255,0,255)); 
          pixels_3.show();
        }
        l3=1;
      }
      else if(ran==3)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_4.setPixelColor(i, pixels_4.Color(0,255,0)); 
          pixels_4.show();
        }
        l4=1;
      }
      else if(ran==4)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_5.setPixelColor(i, pixels_5.Color(0,255,0)); 
          pixels_5.show();
        }
        l5=1;
      }
      else if(ran==5)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_6.setPixelColor(i, pixels_6.Color(0,255,0)); 
          pixels_6.show();
        }
        l6=1;
      }
      else if(ran==6)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_7.setPixelColor(i, pixels_7.Color(255,255,255)); 
          pixels_7.show();
        }
        l7=1;
      }
      else if(ran==7)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_8.setPixelColor(i, pixels_8.Color(0,0,255)); 
          pixels_8.show();
        }
        l8=1;
      }
      else if(ran==8)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_9.setPixelColor(i, pixels_9.Color(0,255,0)); 
          pixels_9.show();
        }
        l9=1;
      }
      else if(ran==9)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_10.setPixelColor(i, pixels_10.Color(0,255,0)); 
          pixels_10.show();
        }
        l10=1;
      }
      else if(ran==10)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_11.setPixelColor(i, pixels_11.Color(0,255,0)); 
          pixels_11.show();
        }
        l11=1;
      }
      
      else if(ran==11)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_14.setPixelColor(i, pixels_14.Color(0,255,0)); 
          pixels_14.show();
        }
        l14=1;
      }
      else if(ran==12)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_15.setPixelColor(i, pixels_15.Color(255,0,255)); 
          pixels_15.show();
        }
        l15=1;
      }
      else if(ran==13)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_16.setPixelColor(i, pixels_16.Color(0,255,0)); 
          pixels_16.show();
        }
        l16=1;
      }
      else if(ran==14)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_17.setPixelColor(i, pixels_17.Color(0,255,0)); 
          pixels_17.show();
        }
        l17=1;
      }
      else if(ran==15)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_18.setPixelColor(i, pixels_18.Color(0,255,0)); 
          pixels_18.show();
        }
        l18=1;
      }
      else if(ran==16)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_19.setPixelColor(i, pixels_19.Color(255,255,255)); 
          pixels_19.show();
        }
        l19=1;
      }
      else if(ran==17)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_20.setPixelColor(i, pixels_20.Color(0,0,255)); 
          pixels_20.show();
        }
        l20=1;
      }
      else if(ran==18)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_21.setPixelColor(i, pixels_21.Color(0,255,0)); 
          pixels_21.show();
        }
        l21=1;
      }
      else if(ran==19)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_22.setPixelColor(i, pixels_22.Color(0,255,0)); 
          pixels_22.show();
        }
        l22=1;
      }
      else if(ran==20)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_23.setPixelColor(i, pixels_23.Color(0,255,0)); 
          pixels_23.show();
        }
        l23=1;
      }
    }
      if(s1==0)
      {
        l1=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_1.setPixelColor(i, pixels_1.Color(0,0,0)); 
          pixels_1.show();
        }
      }
      if(s2==0)
      {
        l2=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_2.setPixelColor(i, pixels_2.Color(0,0,0)); 
          pixels_2.show();      
        }
      }
      if(s3==0)
      { 
        l3=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_3.setPixelColor(i, pixels_3.Color(0,0,0)); 
          pixels_3.show();
        }
      }
      if(s4==0)
      { 
        l4=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_4.setPixelColor(i, pixels_4.Color(0,0,0)); 
          pixels_4.show();
        }
      }
      if(s5==0)
      {
        l5=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_5.setPixelColor(i, pixels_5.Color(0,0,0)); 
          pixels_5.show();
        }
      }
      if(s6==0)
      {
        l6=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_6.setPixelColor(i, pixels_6.Color(0,0,0)); 
          pixels_6.show();      
        }
      }
      if(s7==0)
      { 
        l7=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_7.setPixelColor(i, pixels_7.Color(0,0,0)); 
          pixels_7.show();
        }
      }
      if(s8==0)
      { 
        l8=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_8.setPixelColor(i, pixels_8.Color(0,0,0)); 
          pixels_8.show();
        }
      }
      if(s9==0)
      { 
        l9=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_9.setPixelColor(i, pixels_9.Color(0,0,0)); 
          pixels_9.show();
        }
      }
      if(s10==0)
      { 
        l10=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_10.setPixelColor(i, pixels_10.Color(0,0,0)); 
          pixels_10.show();
        }
      }
      if(s11==0)
      { 
        l11=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_11.setPixelColor(i, pixels_11.Color(0,0,0)); 
          pixels_11.show();
        }
      }
      if(s12==0)
      { 
        l12=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_12.setPixelColor(i, pixels_12.Color(0,0,0)); 
          pixels_12.show();
        }
      }
      if(s13==0)
      {
        l13=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_13.setPixelColor(i, pixels_13.Color(0,0,0)); 
          pixels_13.show();
        }
      }
      if(s14==0)
      {
        l14=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_14.setPixelColor(i, pixels_14.Color(0,0,0)); 
          pixels_14.show();      
        }
      }
      if(s15==0)
      { 
        l15=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_15.setPixelColor(i, pixels_15.Color(0,0,0)); 
          pixels_15.show();
        }
      }
      if(s16==0)
      { 
        l16=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_16.setPixelColor(i, pixels_16.Color(0,0,0)); 
          pixels_16.show();
        }
      }
      if(s17==0)
      {
        l17=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_17.setPixelColor(i, pixels_17.Color(0,0,0)); 
          pixels_17.show();
        }
      }
      if(s18==0)
      {
        l18=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_18.setPixelColor(i, pixels_18.Color(0,0,0)); 
          pixels_18.show();      
        }
      }
      if(s19==0)
      { 
        l19=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_19.setPixelColor(i, pixels_19.Color(0,0,0)); 
          pixels_19.show();
        }
      }
      if(s20==0)
      { 
        l20=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_20.setPixelColor(i, pixels_20.Color(0,0,0)); 
          pixels_20.show();
        }
      }
      if(s21==0)
      { 
        l21=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_21.setPixelColor(i, pixels_21.Color(0,0,0)); 
          pixels_21.show();
        }
      }
      if(s22==0)
      { 
        l22=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_22.setPixelColor(i, pixels_22.Color(0,0,0)); 
          pixels_22.show();
        }
      }
      if(s23==0)
      { 
        l23=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_23.setPixelColor(i, pixels_23.Color(0,0,0)); 
          pixels_23.show();
        }
      }
      if(s24==0)
      { 
        l24=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_24.setPixelColor(i, pixels_24.Color(0,0,0)); 
          pixels_24.show();
        }
      }
    }while(((millis()-startTime)/1000)<60*2);
    }
    else if(found==3||found==10||found==15||found==22)
    {
    do
    { 
    delay(100);
    s1=digitalRead(switch_1);
    s2=digitalRead(switch_2);
    s3=digitalRead(switch_3);
    s4=digitalRead(switch_4);
    s5=digitalRead(switch_5);
    s6=digitalRead(switch_6);
    s7=digitalRead(switch_7);
    s8=digitalRead(switch_8);
    s9=digitalRead(switch_9);
    s10=digitalRead(switch_10);
    s11=digitalRead(switch_11);
    s12=digitalRead(switch_12);
    s13=digitalRead(switch_13);
    s14=digitalRead(switch_14);
    s15=digitalRead(switch_15);
    s16=digitalRead(switch_16);
    s17=digitalRead(switch_17);
    s18=digitalRead(switch_18);
    s19=digitalRead(switch_19);
    s20=digitalRead(switch_20);
    s21=digitalRead(switch_21);
    s22=digitalRead(switch_22);
    s23=digitalRead(switch_23);
    s24=digitalRead(switch_24);
    if((l2+l3+l4+l5+l6+l7+l8+l9+l10+l11+l14+l15+l16+l17+l18+l19+l20+l21+l22+l23)==0)
    {
     score++;
     int ran=random(16)+1;
     lcd.clear();
     lcd.print("     Points");
     lcd.setCursor(0,1);
     lcd.print("       ");
     lcd.print(score-1);
      if(ran==1)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_3.setPixelColor(i, pixels_3.Color(255,0,255)); 
          pixels_3.show();
        }
        l3=1;
      }
      else if(ran==2)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_4.setPixelColor(i, pixels_4.Color(0,255,0)); 
          pixels_4.show();
        }
        l4=1;
      }
      else if(ran==3)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_5.setPixelColor(i, pixels_5.Color(0,255,0)); 
          pixels_5.show();
        }
        l5=1;
      }
      else if(ran==4)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_6.setPixelColor(i, pixels_6.Color(0,255,0)); 
          pixels_6.show();
        }
        l6=1;
      }
      else if(ran==5)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_7.setPixelColor(i, pixels_7.Color(255,255,255)); 
          pixels_7.show();
        }
        l7=1;
      }
      else if(ran==6)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_8.setPixelColor(i, pixels_8.Color(0,0,255)); 
          pixels_8.show();
        }
        l8=1;
      }
      else if(ran==7)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_9.setPixelColor(i, pixels_9.Color(0,255,0)); 
          pixels_9.show();
        }
        l9=1;
      }
      else if(ran==8)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_10.setPixelColor(i, pixels_10.Color(0,255,0)); 
          pixels_10.show();
        }
        l10=1;
      }
      else if(ran==9)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_15.setPixelColor(i, pixels_15.Color(255,0,255)); 
          pixels_15.show();
        }
        l15=1;
      }
      else if(ran==10)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_16.setPixelColor(i, pixels_16.Color(0,255,0)); 
          pixels_16.show();
        }
        l16=1;
      }
      else if(ran==11)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_17.setPixelColor(i, pixels_17.Color(0,255,0)); 
          pixels_17.show();
        }
        l17=1;
      }
      else if(ran==12)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_18.setPixelColor(i, pixels_18.Color(0,255,0)); 
          pixels_18.show();
        }
        l18=1;
      }
      else if(ran==13)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_19.setPixelColor(i, pixels_19.Color(255,255,255)); 
          pixels_19.show();
        }
        l19=1;
      }
      else if(ran==14)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_20.setPixelColor(i, pixels_20.Color(0,0,255)); 
          pixels_20.show();
        }
        l20=1;
      }
      else if(ran==15)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_21.setPixelColor(i, pixels_21.Color(0,255,0)); 
          pixels_21.show();
        }
        l21=1;
      }
      else if(ran==16)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_22.setPixelColor(i, pixels_22.Color(0,255,0)); 
          pixels_22.show();
        }
        l22=1;
      }
    }
      if(s1==0)
      {
        l1=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_1.setPixelColor(i, pixels_1.Color(0,0,0)); 
          pixels_1.show();
        }
      }
      if(s2==0)
      {
        l2=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_2.setPixelColor(i, pixels_2.Color(0,0,0)); 
          pixels_2.show();      
        }
      }
      if(s3==0)
      { 
        l3=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_3.setPixelColor(i, pixels_3.Color(0,0,0)); 
          pixels_3.show();
        }
      }
      if(s4==0)
      { 
        l4=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_4.setPixelColor(i, pixels_4.Color(0,0,0)); 
          pixels_4.show();
        }
      }
      if(s5==0)
      {
        l5=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_5.setPixelColor(i, pixels_5.Color(0,0,0)); 
          pixels_5.show();
        }
      }
      if(s6==0)
      {
        l6=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_6.setPixelColor(i, pixels_6.Color(0,0,0)); 
          pixels_6.show();      
        }
      }
      if(s7==0)
      { 
        l7=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_7.setPixelColor(i, pixels_7.Color(0,0,0)); 
          pixels_7.show();
        }
      }
      if(s8==0)
      { 
        l8=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_8.setPixelColor(i, pixels_8.Color(0,0,0)); 
          pixels_8.show();
        }
      }
      if(s9==0)
      { 
        l9=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_9.setPixelColor(i, pixels_9.Color(0,0,0)); 
          pixels_9.show();
        }
      }
      if(s10==0)
      { 
        l10=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_10.setPixelColor(i, pixels_10.Color(0,0,0)); 
          pixels_10.show();
        }
      }
      if(s11==0)
      { 
        l11=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_11.setPixelColor(i, pixels_11.Color(0,0,0)); 
          pixels_11.show();
        }
      }
      if(s12==0)
      { 
        l12=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_12.setPixelColor(i, pixels_12.Color(0,0,0)); 
          pixels_12.show();
        }
      }
      if(s13==0)
      {
        l13=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_13.setPixelColor(i, pixels_13.Color(0,0,0)); 
          pixels_13.show();
        }
      }
      if(s14==0)
      {
        l14=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_14.setPixelColor(i, pixels_14.Color(0,0,0)); 
          pixels_14.show();      
        }
      }
      if(s15==0)
      { 
        l15=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_15.setPixelColor(i, pixels_15.Color(0,0,0)); 
          pixels_15.show();
        }
      }
      if(s16==0)
      { 
        l16=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_16.setPixelColor(i, pixels_16.Color(0,0,0)); 
          pixels_16.show();
        }
      }
      if(s17==0)
      {
        l17=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_17.setPixelColor(i, pixels_17.Color(0,0,0)); 
          pixels_17.show();
        }
      }
      if(s18==0)
      {
        l18=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_18.setPixelColor(i, pixels_18.Color(0,0,0)); 
          pixels_18.show();      
        }
      }
      if(s19==0)
      { 
        l19=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_19.setPixelColor(i, pixels_19.Color(0,0,0)); 
          pixels_19.show();
        }
      }
      if(s20==0)
      { 
        l20=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_20.setPixelColor(i, pixels_20.Color(0,0,0)); 
          pixels_20.show();
        }
      }
      if(s21==0)
      { 
        l21=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_21.setPixelColor(i, pixels_21.Color(0,0,0)); 
          pixels_21.show();
        }
      }
      if(s22==0)
      { 
        l22=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_22.setPixelColor(i, pixels_22.Color(0,0,0)); 
          pixels_22.show();
        }
      }
      if(s23==0)
      { 
        l23=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_23.setPixelColor(i, pixels_23.Color(0,0,0)); 
          pixels_23.show();
        }
      }
      if(s24==0)
      { 
        l24=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_24.setPixelColor(i, pixels_24.Color(0,0,0)); 
          pixels_24.show();
        }
      }
    }while(((millis()-startTime)/1000)<60*2);
    }
    else if(found==4||found==9||found==16||found==21)
    {
    do
    { 
    delay(100);
    s1=digitalRead(switch_1);
    s2=digitalRead(switch_2);
    s3=digitalRead(switch_3);
    s4=digitalRead(switch_4);
    s5=digitalRead(switch_5);
    s6=digitalRead(switch_6);
    s7=digitalRead(switch_7);
    s8=digitalRead(switch_8);
    s9=digitalRead(switch_9);
    s10=digitalRead(switch_10);
    s11=digitalRead(switch_11);
    s12=digitalRead(switch_12);
    s13=digitalRead(switch_13);
    s14=digitalRead(switch_14);
    s15=digitalRead(switch_15);
    s16=digitalRead(switch_16);
    s17=digitalRead(switch_17);
    s18=digitalRead(switch_18);
    s19=digitalRead(switch_19);
    s20=digitalRead(switch_20);
    s21=digitalRead(switch_21);
    s22=digitalRead(switch_22);
    s23=digitalRead(switch_23);
    s24=digitalRead(switch_24);
    if((l2+l3+l4+l5+l6+l7+l8+l9+l10+l11+l14+l15+l16+l17+l18+l19+l20+l21+l22+l23)==0)
    {
     score++;
     int ran=random(12)+1;
     lcd.clear();
     lcd.print("     Points");
     lcd.setCursor(0,1);
     lcd.print("       ");
     lcd.print(score-1);
     if(ran==1)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_4.setPixelColor(i, pixels_4.Color(0,255,0)); 
          pixels_4.show();
        }
        l4=1;
      }
      else if(ran==2)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_5.setPixelColor(i, pixels_5.Color(0,255,0)); 
          pixels_5.show();
        }
        l5=1;
      }
      else if(ran==3)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_6.setPixelColor(i, pixels_6.Color(0,255,0)); 
          pixels_6.show();
        }
        l6=1;
      }
      else if(ran==4)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_7.setPixelColor(i, pixels_7.Color(255,255,255)); 
          pixels_7.show();
        }
        l7=1;
      }
      else if(ran==5)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_8.setPixelColor(i, pixels_8.Color(0,0,255)); 
          pixels_8.show();
        }
        l8=1;
      }
      else if(ran==6)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_9.setPixelColor(i, pixels_9.Color(0,255,0)); 
          pixels_9.show();
        }
        l9=1;
      }
      else if(ran==7)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_16.setPixelColor(i, pixels_16.Color(0,255,0)); 
          pixels_16.show();
        }
        l16=1;
      }
      else if(ran==8)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_17.setPixelColor(i, pixels_17.Color(0,255,0)); 
          pixels_17.show();
        }
        l17=1;
      }
      else if(ran==9)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_18.setPixelColor(i, pixels_18.Color(0,255,0)); 
          pixels_18.show();
        }
        l18=1;
      }
      else if(ran==10)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_19.setPixelColor(i, pixels_19.Color(255,255,255)); 
          pixels_19.show();
        }
        l19=1;
      }
      else if(ran==11)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_20.setPixelColor(i, pixels_20.Color(0,0,255)); 
          pixels_20.show();
        }
        l20=1;
      }
      else if(ran==12)
      {
        for(int i=0;i<NOL;i++)
        {
          pixels_21.setPixelColor(i, pixels_21.Color(0,255,0)); 
          pixels_21.show();
        }
        l21=1;
      }
    }
      if(s1==0)
      {
        l1=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_1.setPixelColor(i, pixels_1.Color(0,0,0)); 
          pixels_1.show();
        }
      }
      if(s2==0)
      {
        l2=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_2.setPixelColor(i, pixels_2.Color(0,0,0)); 
          pixels_2.show();      
        }
      }
      if(s3==0)
      { 
        l3=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_3.setPixelColor(i, pixels_3.Color(0,0,0)); 
          pixels_3.show();
        }
      }
      if(s4==0)
      { 
        l4=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_4.setPixelColor(i, pixels_4.Color(0,0,0)); 
          pixels_4.show();
        }
      }
      if(s5==0)
      {
        l5=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_5.setPixelColor(i, pixels_5.Color(0,0,0)); 
          pixels_5.show();
        }
      }
      if(s6==0)
      {
        l6=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_6.setPixelColor(i, pixels_6.Color(0,0,0)); 
          pixels_6.show();      
        }
      }
      if(s7==0)
      { 
        l7=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_7.setPixelColor(i, pixels_7.Color(0,0,0)); 
          pixels_7.show();
        }
      }
      if(s8==0)
      { 
        l8=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_8.setPixelColor(i, pixels_8.Color(0,0,0)); 
          pixels_8.show();
        }
      }
      if(s9==0)
      { 
        l9=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_9.setPixelColor(i, pixels_9.Color(0,0,0)); 
          pixels_9.show();
        }
      }
      if(s10==0)
      { 
        l10=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_10.setPixelColor(i, pixels_10.Color(0,0,0)); 
          pixels_10.show();
        }
      }
      if(s11==0)
      { 
        l11=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_11.setPixelColor(i, pixels_11.Color(0,0,0)); 
          pixels_11.show();
        }
      }
      if(s12==0)
      { 
        l12=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_12.setPixelColor(i, pixels_12.Color(0,0,0)); 
          pixels_12.show();
        }
      }
      if(s13==0)
      {
        l13=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_13.setPixelColor(i, pixels_13.Color(0,0,0)); 
          pixels_13.show();
        }
      }
      if(s14==0)
      {
        l14=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_14.setPixelColor(i, pixels_14.Color(0,0,0)); 
          pixels_14.show();      
        }
      }
      if(s15==0)
      { 
        l15=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_15.setPixelColor(i, pixels_15.Color(0,0,0)); 
          pixels_15.show();
        }
      }
      if(s16==0)
      { 
        l16=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_16.setPixelColor(i, pixels_16.Color(0,0,0)); 
          pixels_16.show();
        }
      }
      if(s17==0)
      {
        l17=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_17.setPixelColor(i, pixels_17.Color(0,0,0)); 
          pixels_17.show();
        }
      }
      if(s18==0)
      {
        l18=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_18.setPixelColor(i, pixels_18.Color(0,0,0)); 
          pixels_18.show();      
        }
      }
      if(s19==0)
      { 
        l19=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_19.setPixelColor(i, pixels_19.Color(0,0,0)); 
          pixels_19.show();
        }
      }
      if(s20==0)
      { 
        l20=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_20.setPixelColor(i, pixels_20.Color(0,0,0)); 
          pixels_20.show();
        }
      }
      if(s21==0)
      { 
        l21=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_21.setPixelColor(i, pixels_21.Color(0,0,0)); 
          pixels_21.show();
        }
      }
      if(s22==0)
      { 
        l22=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_22.setPixelColor(i, pixels_22.Color(0,0,0)); 
          pixels_22.show();
        }
      }
      if(s23==0)
      { 
        l23=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_23.setPixelColor(i, pixels_23.Color(0,0,0)); 
          pixels_23.show();
        }
      }
      if(s24==0)
      { 
        l24=0;
        for(int i=0;i<NOL;i++)
        {
          pixels_24.setPixelColor(i, pixels_24.Color(0,0,0)); 
          pixels_24.show();
        }
      }
    }while(((millis()-startTime)/1000)<60*2);
    }
    Serial.print("Game Over");
    Serial.print("Final Score:");
    --score;
    Serial.print(score);
    for(int i=0;i<NOL;i++)
  {
    pixels_1.setPixelColor(i, pixels_1.Color(255,0,0)); 
    pixels_1.show();
    pixels_2.setPixelColor(i, pixels_2.Color(255,0,0)); 
    pixels_2.show();
    pixels_3.setPixelColor(i, pixels_3.Color(255,0,0)); 
    pixels_3.show();
    pixels_4.setPixelColor(i, pixels_4.Color(255,0,0)); 
    pixels_4.show();  
    pixels_5.setPixelColor(i, pixels_5.Color(255,0,0)); 
    pixels_5.show();
    pixels_6.setPixelColor(i, pixels_6.Color(255,0,0)); 
    pixels_6.show();
    pixels_7.setPixelColor(i, pixels_7.Color(255,0,0)); 
    pixels_7.show();
    pixels_8.setPixelColor(i, pixels_8.Color(255,0,0)); 
    pixels_8.show();  
    pixels_9.setPixelColor(i, pixels_9.Color(255,0,0)); 
    pixels_9.show();
    pixels_10.setPixelColor(i, pixels_10.Color(255,0,0)); 
    pixels_10.show();
    pixels_11.setPixelColor(i, pixels_11.Color(255,0,0)); 
    pixels_11.show();
    pixels_12.setPixelColor(i, pixels_12.Color(255,0,0)); 
    pixels_12.show();
    pixels_13.setPixelColor(i, pixels_13.Color(255,0,0)); 
    pixels_13.show();
    pixels_14.setPixelColor(i, pixels_14.Color(255,0,0)); 
    pixels_14.show();
    pixels_15.setPixelColor(i, pixels_15.Color(255,0,0)); 
    pixels_15.show();
    pixels_16.setPixelColor(i, pixels_16.Color(255,0,0)); 
    pixels_16.show();  
    pixels_17.setPixelColor(i, pixels_17.Color(255,0,0)); 
    pixels_17.show();
    pixels_18.setPixelColor(i, pixels_18.Color(255,0,0)); 
    pixels_18.show();
    pixels_19.setPixelColor(i, pixels_19.Color(255,0,0)); 
    pixels_19.show();
    pixels_20.setPixelColor(i, pixels_20.Color(255,0,0)); 
    pixels_20.show();  
    pixels_21.setPixelColor(i, pixels_21.Color(255,0,0)); 
    pixels_21.show();
    pixels_22.setPixelColor(i, pixels_22.Color(255,0,0)); 
    pixels_22.show();
    pixels_23.setPixelColor(i, pixels_23.Color(255,0,0)); 
    pixels_23.show();
    pixels_24.setPixelColor(i, pixels_24.Color(255,0,0)); 
    pixels_24.show();
  }
  delay(1000);
  for(int i=0;i<NOL;i++)
  {
    pixels_1.setPixelColor(i, pixels_1.Color(0,0,0)); 
    pixels_1.show();
    pixels_2.setPixelColor(i, pixels_2.Color(0,0,0)); 
    pixels_2.show();
    pixels_3.setPixelColor(i, pixels_3.Color(0,0,0)); 
    pixels_3.show();
    pixels_4.setPixelColor(i, pixels_4.Color(0,0,0)); 
    pixels_4.show();  
    pixels_5.setPixelColor(i, pixels_5.Color(0,0,0)); 
    pixels_5.show();
    pixels_6.setPixelColor(i, pixels_6.Color(0,0,0)); 
    pixels_6.show();
    pixels_7.setPixelColor(i, pixels_7.Color(0,0,0)); 
    pixels_7.show();
    pixels_8.setPixelColor(i, pixels_8.Color(0,0,0)); 
    pixels_8.show();  
    pixels_9.setPixelColor(i, pixels_9.Color(0,0,0)); 
    pixels_9.show();
    pixels_10.setPixelColor(i, pixels_10.Color(0,0,0)); 
    pixels_10.show();
    pixels_11.setPixelColor(i, pixels_11.Color(0,0,0)); 
    pixels_11.show();
    pixels_12.setPixelColor(i, pixels_12.Color(0,0,0)); 
    pixels_12.show();
    pixels_13.setPixelColor(i, pixels_13.Color(0,0,0)); 
    pixels_13.show();
    pixels_14.setPixelColor(i, pixels_14.Color(0,0,0)); 
    pixels_14.show();
    pixels_15.setPixelColor(i, pixels_15.Color(0,0,0)); 
    pixels_15.show();
    pixels_16.setPixelColor(i, pixels_16.Color(0,0,0)); 
    pixels_16.show();  
    pixels_17.setPixelColor(i, pixels_17.Color(0,0,0)); 
    pixels_17.show();
    pixels_18.setPixelColor(i, pixels_18.Color(0,0,0)); 
    pixels_18.show();
    pixels_19.setPixelColor(i, pixels_19.Color(0,0,0)); 
    pixels_19.show();
    pixels_20.setPixelColor(i, pixels_20.Color(0,0,0)); 
    pixels_20.show();  
    pixels_21.setPixelColor(i, pixels_21.Color(0,0,0)); 
    pixels_21.show();
    pixels_22.setPixelColor(i, pixels_22.Color(0,0,0)); 
    pixels_22.show();
    pixels_23.setPixelColor(i, pixels_23.Color(0,0,0)); 
    pixels_23.show();
    pixels_24.setPixelColor(i, pixels_24.Color(0,0,0)); 
    pixels_24.show();
  } 
  delay(1000);
  for(int i=0;i<NOL;i++)
  {
    pixels_1.setPixelColor(i, pixels_1.Color(255,0,0)); 
    pixels_1.show();
    pixels_2.setPixelColor(i, pixels_2.Color(255,0,0)); 
    pixels_2.show();
    pixels_3.setPixelColor(i, pixels_3.Color(255,0,0)); 
    pixels_3.show();
    pixels_4.setPixelColor(i, pixels_4.Color(255,0,0)); 
    pixels_4.show();  
    pixels_5.setPixelColor(i, pixels_5.Color(255,0,0)); 
    pixels_5.show();
    pixels_6.setPixelColor(i, pixels_6.Color(255,0,0)); 
    pixels_6.show();
    pixels_7.setPixelColor(i, pixels_7.Color(255,0,0)); 
    pixels_7.show();
    pixels_8.setPixelColor(i, pixels_8.Color(255,0,0)); 
    pixels_8.show();  
    pixels_9.setPixelColor(i, pixels_9.Color(255,0,0)); 
    pixels_9.show();
    pixels_10.setPixelColor(i, pixels_10.Color(255,0,0)); 
    pixels_10.show();
    pixels_11.setPixelColor(i, pixels_11.Color(255,0,0)); 
    pixels_11.show();
    pixels_12.setPixelColor(i, pixels_12.Color(255,0,0)); 
    pixels_12.show();
    pixels_13.setPixelColor(i, pixels_13.Color(255,0,0)); 
    pixels_13.show();
    pixels_14.setPixelColor(i, pixels_14.Color(255,0,0)); 
    pixels_14.show();
    pixels_15.setPixelColor(i, pixels_15.Color(255,0,0)); 
    pixels_15.show();
    pixels_16.setPixelColor(i, pixels_16.Color(255,0,0)); 
    pixels_16.show();  
    pixels_17.setPixelColor(i, pixels_17.Color(255,0,0)); 
    pixels_17.show();
    pixels_18.setPixelColor(i, pixels_18.Color(255,0,0)); 
    pixels_18.show();
    pixels_19.setPixelColor(i, pixels_19.Color(255,0,0)); 
    pixels_19.show();
    pixels_20.setPixelColor(i, pixels_20.Color(255,0,0)); 
    pixels_20.show();  
    pixels_21.setPixelColor(i, pixels_21.Color(255,0,0)); 
    pixels_21.show();
    pixels_22.setPixelColor(i, pixels_22.Color(255,0,0)); 
    pixels_22.show();
    pixels_23.setPixelColor(i, pixels_23.Color(255,0,0)); 
    pixels_23.show();
    pixels_24.setPixelColor(i, pixels_24.Color(255,0,0)); 
    pixels_24.show();
  }
  delay(1000);
  for(int i=0;i<NOL;i++)
  {
    pixels_1.setPixelColor(i, pixels_1.Color(0,0,0)); 
    pixels_1.show();
    pixels_2.setPixelColor(i, pixels_2.Color(0,0,0)); 
    pixels_2.show();
    pixels_3.setPixelColor(i, pixels_3.Color(0,0,0)); 
    pixels_3.show();
    pixels_4.setPixelColor(i, pixels_4.Color(0,0,0)); 
    pixels_4.show();  
    pixels_5.setPixelColor(i, pixels_5.Color(0,0,0)); 
    pixels_5.show();
    pixels_6.setPixelColor(i, pixels_6.Color(0,0,0)); 
    pixels_6.show();
    pixels_7.setPixelColor(i, pixels_7.Color(0,0,0)); 
    pixels_7.show();
    pixels_8.setPixelColor(i, pixels_8.Color(0,0,0)); 
    pixels_8.show();  
    pixels_9.setPixelColor(i, pixels_9.Color(0,0,0)); 
    pixels_9.show();
    pixels_10.setPixelColor(i, pixels_10.Color(0,0,0)); 
    pixels_10.show();
    pixels_11.setPixelColor(i, pixels_11.Color(0,0,0)); 
    pixels_11.show();
    pixels_12.setPixelColor(i, pixels_12.Color(0,0,0)); 
    pixels_12.show();
    pixels_13.setPixelColor(i, pixels_13.Color(0,0,0)); 
    pixels_13.show();
    pixels_14.setPixelColor(i, pixels_14.Color(0,0,0)); 
    pixels_14.show();
    pixels_15.setPixelColor(i, pixels_15.Color(0,0,0)); 
    pixels_15.show();
    pixels_16.setPixelColor(i, pixels_16.Color(0,0,0)); 
    pixels_16.show();  
    pixels_17.setPixelColor(i, pixels_17.Color(0,0,0)); 
    pixels_17.show();
    pixels_18.setPixelColor(i, pixels_18.Color(0,0,0)); 
    pixels_18.show();
    pixels_19.setPixelColor(i, pixels_19.Color(0,0,0)); 
    pixels_19.show();
    pixels_20.setPixelColor(i, pixels_20.Color(0,0,0)); 
    pixels_20.show();  
    pixels_21.setPixelColor(i, pixels_21.Color(0,0,0)); 
    pixels_21.show();
    pixels_22.setPixelColor(i, pixels_22.Color(0,0,0)); 
    pixels_22.show();
    pixels_23.setPixelColor(i, pixels_23.Color(0,0,0)); 
    pixels_23.show();
    pixels_24.setPixelColor(i, pixels_24.Color(0,0,0)); 
    pixels_24.show();
  } 
  delay(1000);
  for(int i=0;i<NOL;i++)
  {
    pixels_1.setPixelColor(i, pixels_1.Color(255,0,0)); 
    pixels_1.show();
    pixels_2.setPixelColor(i, pixels_2.Color(255,0,0)); 
    pixels_2.show();
    pixels_3.setPixelColor(i, pixels_3.Color(255,0,0)); 
    pixels_3.show();
    pixels_4.setPixelColor(i, pixels_4.Color(255,0,0)); 
    pixels_4.show();  
    pixels_5.setPixelColor(i, pixels_5.Color(255,0,0)); 
    pixels_5.show();
    pixels_6.setPixelColor(i, pixels_6.Color(255,0,0)); 
    pixels_6.show();
    pixels_7.setPixelColor(i, pixels_7.Color(255,0,0)); 
    pixels_7.show();
    pixels_8.setPixelColor(i, pixels_8.Color(255,0,0)); 
    pixels_8.show();  
    pixels_9.setPixelColor(i, pixels_9.Color(255,0,0)); 
    pixels_9.show();
    pixels_10.setPixelColor(i, pixels_10.Color(255,0,0)); 
    pixels_10.show();
    pixels_11.setPixelColor(i, pixels_11.Color(255,0,0)); 
    pixels_11.show();
    pixels_12.setPixelColor(i, pixels_12.Color(255,0,0)); 
    pixels_12.show();
    pixels_13.setPixelColor(i, pixels_13.Color(255,0,0)); 
    pixels_13.show();
    pixels_14.setPixelColor(i, pixels_14.Color(255,0,0)); 
    pixels_14.show();
    pixels_15.setPixelColor(i, pixels_15.Color(255,0,0)); 
    pixels_15.show();
    pixels_16.setPixelColor(i, pixels_16.Color(255,0,0)); 
    pixels_16.show();  
    pixels_17.setPixelColor(i, pixels_17.Color(255,0,0)); 
    pixels_17.show();
    pixels_18.setPixelColor(i, pixels_18.Color(255,0,0)); 
    pixels_18.show();
    pixels_19.setPixelColor(i, pixels_19.Color(255,0,0)); 
    pixels_19.show();
    pixels_20.setPixelColor(i, pixels_20.Color(255,0,0)); 
    pixels_20.show();  
    pixels_21.setPixelColor(i, pixels_21.Color(255,0,0)); 
    pixels_21.show();
    pixels_22.setPixelColor(i, pixels_22.Color(255,0,0)); 
    pixels_22.show();
    pixels_23.setPixelColor(i, pixels_23.Color(255,0,0)); 
    pixels_23.show();
    pixels_24.setPixelColor(i, pixels_24.Color(255,0,0)); 
    pixels_24.show();
  }
  delay(1000);
  for(int i=0;i<NOL;i++)
  {
    pixels_1.setPixelColor(i, pixels_1.Color(0,0,0)); 
    pixels_1.show();
    pixels_2.setPixelColor(i, pixels_2.Color(0,0,0)); 
    pixels_2.show();
    pixels_3.setPixelColor(i, pixels_3.Color(0,0,0)); 
    pixels_3.show();
    pixels_4.setPixelColor(i, pixels_4.Color(0,0,0)); 
    pixels_4.show();  
    pixels_5.setPixelColor(i, pixels_5.Color(0,0,0)); 
    pixels_5.show();
    pixels_6.setPixelColor(i, pixels_6.Color(0,0,0)); 
    pixels_6.show();
    pixels_7.setPixelColor(i, pixels_7.Color(0,0,0)); 
    pixels_7.show();
    pixels_8.setPixelColor(i, pixels_8.Color(0,0,0)); 
    pixels_8.show();  
    pixels_9.setPixelColor(i, pixels_9.Color(0,0,0)); 
    pixels_9.show();
    pixels_10.setPixelColor(i, pixels_10.Color(0,0,0)); 
    pixels_10.show();
    pixels_11.setPixelColor(i, pixels_11.Color(0,0,0)); 
    pixels_11.show();
    pixels_12.setPixelColor(i, pixels_12.Color(0,0,0)); 
    pixels_12.show();
    pixels_13.setPixelColor(i, pixels_13.Color(0,0,0)); 
    pixels_13.show();
    pixels_14.setPixelColor(i, pixels_14.Color(0,0,0)); 
    pixels_14.show();
    pixels_15.setPixelColor(i, pixels_15.Color(0,0,0)); 
    pixels_15.show();
    pixels_16.setPixelColor(i, pixels_16.Color(0,0,0)); 
    pixels_16.show();  
    pixels_17.setPixelColor(i, pixels_17.Color(0,0,0)); 
    pixels_17.show();
    pixels_18.setPixelColor(i, pixels_18.Color(0,0,0)); 
    pixels_18.show();
    pixels_19.setPixelColor(i, pixels_19.Color(0,0,0)); 
    pixels_19.show();
    pixels_20.setPixelColor(i, pixels_20.Color(0,0,0)); 
    pixels_20.show();  
    pixels_21.setPixelColor(i, pixels_21.Color(0,0,0)); 
    pixels_21.show();
    pixels_22.setPixelColor(i, pixels_22.Color(0,0,0)); 
    pixels_22.show();
    pixels_23.setPixelColor(i, pixels_23.Color(0,0,0)); 
    pixels_23.show();
    pixels_24.setPixelColor(i, pixels_24.Color(0,0,0)); 
    pixels_24.show();
  } 
  delay(1000);
  for(int i=0;i<NOL;i++)
  {
    pixels_1.setPixelColor(i, pixels_1.Color(255,0,0)); 
    pixels_1.show();
    pixels_2.setPixelColor(i, pixels_2.Color(255,0,0)); 
    pixels_2.show();
    pixels_3.setPixelColor(i, pixels_3.Color(255,0,0)); 
    pixels_3.show();
    pixels_4.setPixelColor(i, pixels_4.Color(255,0,0)); 
    pixels_4.show();  
    pixels_5.setPixelColor(i, pixels_5.Color(255,0,0)); 
    pixels_5.show();
    pixels_6.setPixelColor(i, pixels_6.Color(255,0,0)); 
    pixels_6.show();
    pixels_7.setPixelColor(i, pixels_7.Color(255,0,0)); 
    pixels_7.show();
    pixels_8.setPixelColor(i, pixels_8.Color(255,0,0)); 
    pixels_8.show();  
    pixels_9.setPixelColor(i, pixels_9.Color(255,0,0)); 
    pixels_9.show();
    pixels_10.setPixelColor(i, pixels_10.Color(255,0,0)); 
    pixels_10.show();
    pixels_11.setPixelColor(i, pixels_11.Color(255,0,0)); 
    pixels_11.show();
    pixels_12.setPixelColor(i, pixels_12.Color(255,0,0)); 
    pixels_12.show();
    pixels_13.setPixelColor(i, pixels_13.Color(255,0,0)); 
    pixels_13.show();
    pixels_14.setPixelColor(i, pixels_14.Color(255,0,0)); 
    pixels_14.show();
    pixels_15.setPixelColor(i, pixels_15.Color(255,0,0)); 
    pixels_15.show();
    pixels_16.setPixelColor(i, pixels_16.Color(255,0,0)); 
    pixels_16.show();  
    pixels_17.setPixelColor(i, pixels_17.Color(255,0,0)); 
    pixels_17.show();
    pixels_18.setPixelColor(i, pixels_18.Color(255,0,0)); 
    pixels_18.show();
    pixels_19.setPixelColor(i, pixels_19.Color(255,0,0)); 
    pixels_19.show();
    pixels_20.setPixelColor(i, pixels_20.Color(255,0,0)); 
    pixels_20.show();  
    pixels_21.setPixelColor(i, pixels_21.Color(255,0,0)); 
    pixels_21.show();
    pixels_22.setPixelColor(i, pixels_22.Color(255,0,0)); 
    pixels_22.show();
    pixels_23.setPixelColor(i, pixels_23.Color(255,0,0)); 
    pixels_23.show();
    pixels_24.setPixelColor(i, pixels_24.Color(255,0,0)); 
    pixels_24.show();
  }
  delay(1000);
  for(int i=0;i<NOL;i++)
  {
    pixels_1.setPixelColor(i, pixels_1.Color(0,0,0)); 
    pixels_1.show();
    pixels_2.setPixelColor(i, pixels_2.Color(0,0,0)); 
    pixels_2.show();
    pixels_3.setPixelColor(i, pixels_3.Color(0,0,0)); 
    pixels_3.show();
    pixels_4.setPixelColor(i, pixels_4.Color(0,0,0)); 
    pixels_4.show();  
    pixels_5.setPixelColor(i, pixels_5.Color(0,0,0)); 
    pixels_5.show();
    pixels_6.setPixelColor(i, pixels_6.Color(0,0,0)); 
    pixels_6.show();
    pixels_7.setPixelColor(i, pixels_7.Color(0,0,0)); 
    pixels_7.show();
    pixels_8.setPixelColor(i, pixels_8.Color(0,0,0)); 
    pixels_8.show();  
    pixels_9.setPixelColor(i, pixels_9.Color(0,0,0)); 
    pixels_9.show();
    pixels_10.setPixelColor(i, pixels_10.Color(0,0,0)); 
    pixels_10.show();
    pixels_11.setPixelColor(i, pixels_11.Color(0,0,0)); 
    pixels_11.show();
    pixels_12.setPixelColor(i, pixels_12.Color(0,0,0)); 
    pixels_12.show();
    pixels_13.setPixelColor(i, pixels_13.Color(0,0,0)); 
    pixels_13.show();
    pixels_14.setPixelColor(i, pixels_14.Color(0,0,0)); 
    pixels_14.show();
    pixels_15.setPixelColor(i, pixels_15.Color(0,0,0)); 
    pixels_15.show();
    pixels_16.setPixelColor(i, pixels_16.Color(0,0,0)); 
    pixels_16.show();  
    pixels_17.setPixelColor(i, pixels_17.Color(0,0,0)); 
    pixels_17.show();
    pixels_18.setPixelColor(i, pixels_18.Color(0,0,0)); 
    pixels_18.show();
    pixels_19.setPixelColor(i, pixels_19.Color(0,0,0)); 
    pixels_19.show();
    pixels_20.setPixelColor(i, pixels_20.Color(0,0,0)); 
    pixels_20.show();  
    pixels_21.setPixelColor(i, pixels_21.Color(0,0,0)); 
    pixels_21.show();
    pixels_22.setPixelColor(i, pixels_22.Color(0,0,0)); 
    pixels_22.show();
    pixels_23.setPixelColor(i, pixels_23.Color(0,0,0)); 
    pixels_23.show();
    pixels_24.setPixelColor(i, pixels_24.Color(0,0,0)); 
    pixels_24.show();
  } 
  delay(1000);for(int i=0;i<NOL;i++)
  {
    pixels_1.setPixelColor(i, pixels_1.Color(255,0,0)); 
    pixels_1.show();
    pixels_2.setPixelColor(i, pixels_2.Color(255,0,0)); 
    pixels_2.show();
    pixels_3.setPixelColor(i, pixels_3.Color(255,0,0)); 
    pixels_3.show();
    pixels_4.setPixelColor(i, pixels_4.Color(255,0,0)); 
    pixels_4.show();  
    pixels_5.setPixelColor(i, pixels_5.Color(255,0,0)); 
    pixels_5.show();
    pixels_6.setPixelColor(i, pixels_6.Color(255,0,0)); 
    pixels_6.show();
    pixels_7.setPixelColor(i, pixels_7.Color(255,0,0)); 
    pixels_7.show();
    pixels_8.setPixelColor(i, pixels_8.Color(255,0,0)); 
    pixels_8.show();  
    pixels_9.setPixelColor(i, pixels_9.Color(255,0,0)); 
    pixels_9.show();
    pixels_10.setPixelColor(i, pixels_10.Color(255,0,0)); 
    pixels_10.show();
    pixels_11.setPixelColor(i, pixels_11.Color(255,0,0)); 
    pixels_11.show();
    pixels_12.setPixelColor(i, pixels_12.Color(255,0,0)); 
    pixels_12.show();
    pixels_13.setPixelColor(i, pixels_13.Color(255,0,0)); 
    pixels_13.show();
    pixels_14.setPixelColor(i, pixels_14.Color(255,0,0)); 
    pixels_14.show();
    pixels_15.setPixelColor(i, pixels_15.Color(255,0,0)); 
    pixels_15.show();
    pixels_16.setPixelColor(i, pixels_16.Color(255,0,0)); 
    pixels_16.show();  
    pixels_17.setPixelColor(i, pixels_17.Color(255,0,0)); 
    pixels_17.show();
    pixels_18.setPixelColor(i, pixels_18.Color(255,0,0)); 
    pixels_18.show();
    pixels_19.setPixelColor(i, pixels_19.Color(255,0,0)); 
    pixels_19.show();
    pixels_20.setPixelColor(i, pixels_20.Color(255,0,0)); 
    pixels_20.show();  
    pixels_21.setPixelColor(i, pixels_21.Color(255,0,0)); 
    pixels_21.show();
    pixels_22.setPixelColor(i, pixels_22.Color(255,0,0)); 
    pixels_22.show();
    pixels_23.setPixelColor(i, pixels_23.Color(255,0,0)); 
    pixels_23.show();
    pixels_24.setPixelColor(i, pixels_24.Color(255,0,0)); 
    pixels_24.show();
  }
  delay(1000);
  for(int i=0;i<NOL;i++)
  {
    pixels_1.setPixelColor(i, pixels_1.Color(0,0,0)); 
    pixels_1.show();
    pixels_2.setPixelColor(i, pixels_2.Color(0,0,0)); 
    pixels_2.show();
    pixels_3.setPixelColor(i, pixels_3.Color(0,0,0)); 
    pixels_3.show();
    pixels_4.setPixelColor(i, pixels_4.Color(0,0,0)); 
    pixels_4.show();  
    pixels_5.setPixelColor(i, pixels_5.Color(0,0,0)); 
    pixels_5.show();
    pixels_6.setPixelColor(i, pixels_6.Color(0,0,0)); 
    pixels_6.show();
    pixels_7.setPixelColor(i, pixels_7.Color(0,0,0)); 
    pixels_7.show();
    pixels_8.setPixelColor(i, pixels_8.Color(0,0,0)); 
    pixels_8.show();  
    pixels_9.setPixelColor(i, pixels_9.Color(0,0,0)); 
    pixels_9.show();
    pixels_10.setPixelColor(i, pixels_10.Color(0,0,0)); 
    pixels_10.show();
    pixels_11.setPixelColor(i, pixels_11.Color(0,0,0)); 
    pixels_11.show();
    pixels_12.setPixelColor(i, pixels_12.Color(0,0,0)); 
    pixels_12.show();
    pixels_13.setPixelColor(i, pixels_13.Color(0,0,0)); 
    pixels_13.show();
    pixels_14.setPixelColor(i, pixels_14.Color(0,0,0)); 
    pixels_14.show();
    pixels_15.setPixelColor(i, pixels_15.Color(0,0,0)); 
    pixels_15.show();
    pixels_16.setPixelColor(i, pixels_16.Color(0,0,0)); 
    pixels_16.show();  
    pixels_17.setPixelColor(i, pixels_17.Color(0,0,0)); 
    pixels_17.show();
    pixels_18.setPixelColor(i, pixels_18.Color(0,0,0)); 
    pixels_18.show();
    pixels_19.setPixelColor(i, pixels_19.Color(0,0,0)); 
    pixels_19.show();
    pixels_20.setPixelColor(i, pixels_20.Color(0,0,0)); 
    pixels_20.show();  
    pixels_21.setPixelColor(i, pixels_21.Color(0,0,0)); 
    pixels_21.show();
    pixels_22.setPixelColor(i, pixels_22.Color(0,0,0)); 
    pixels_22.show();
    pixels_23.setPixelColor(i, pixels_23.Color(0,0,0)); 
    pixels_23.show();
    pixels_24.setPixelColor(i, pixels_24.Color(0,0,0)); 
    pixels_24.show();
  } 
  delay(1000);    
  }
}
