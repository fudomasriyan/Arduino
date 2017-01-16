# Arduino
#include<avr/io.h>
#include<util/delay.h>

unsigned char channel=0;
void setup()
{
  Serial.begin(9600);
  ADMUX |=(1<<REFS0);//|channel;
  //ADMUX |=(1<<ADLAR);
  ADCSRA |=(1<<ADEN)|(1<<ADATE)|(1<<ADPS0)|(1<<ADPS1)|(1<<ADPS2);
  //ADCSRA |=(1<<ADEN);
  //ADCSRA |=(1<<ADPS1)|(1<<ADPS2);
  ADCSRA |=(1<<ADSC);
}
void loop()
  {
    unsigned int suhu;
    unsigned int nilaiadc;
    float temperature;
    nilaiadc = int ADC;
    temperature = float (nilaiadc)/1023;
    temperature = temperature*500;
    suhu = temperature*1;
    //Serial.println(temperature);
    //Serial.println(nilaiadc);
    Serial.println(suhu);
    ADCSRA |=(1<<ADSC);
    delay(2000);
  }
