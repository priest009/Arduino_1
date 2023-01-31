#include <IRremote.h>

int RECV_PIN = 11; //
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int itsONled[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

#define code1 0xFFA25D  // 1
#define code2 0xFF629D  // 2
#define code3 0xFFE21D  // 3
#define code4 0xFF22DD  // 4
#define code5 0xFF02FD  // 5
#define code6 0xFFC23D  // 6
#define code7 0xFFE01F  // 7
#define code8 0xFFA857  // 8
#define code9 0xFF906F  // 9
#define code10 0xFF9867 // 0
#define code11 0xFF6897 // *

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
    Serial.begin(9600);  //
    irrecv.enableIRIn(); //
    pinMode(a, OUTPUT);
    pinMode(b, OUTPUT);
    pinMode(c, OUTPUT);
    pinMode(d, OUTPUT);
    pinMode(e, OUTPUT);
    pinMode(f, OUTPUT);
    pinMode(g, OUTPUT);
}

void loop()
{
    if (irrecv.decode(&results))
    {
        unsigned int value = results.value;
        switch (value)
        {
        case code1:
            if (itsONled[1] == 1)
            {
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                itsONled[1] = 0;
            }
            else
            {
                digitalWrite(b, HIGH);
                digitalWrite(c, HIGH);
                itsONled[1] = 1;
            }
            break;
        case code2:
            if (itsONled[2] == 1)
            {
                digitalWrite(a, LOW);
                digitalWrite(b, LOW);
                digitalWrite(g, LOW);
                digitalWrite(e, LOW);
                digitalWrite(d, LOW);
                itsONled[2] = 0;
            }
            else
            {
                digitalWrite(a, HIGH);
                digitalWrite(b, HIGH);
                digitalWrite(g, HIGH);
                digitalWrite(e, HIGH);
                digitalWrite(d, HIGH);
                itsONled[2] = 1;
            }
            break;
        case code3:
            if (itsONled[3] == 1)
            {
                digitalWrite(a, LOW);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, LOW);
                digitalWrite(g, LOW);
                itsONled[3] = 0;
            }
            else
            {
                digitalWrite(a, HIGH);
                digitalWrite(b, HIGH);
                digitalWrite(c, HIGH);
                digitalWrite(d, HIGH);
                digitalWrite(g, HIGH);
                itsONled[3] = 1;
            }
            break;
        case code4:
            if (itsONled[4] == 1)
            {
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(f, LOW);
                digitalWrite(g, LOW);
                itsONled[4] = 0;
            }
            else
            {
                digitalWrite(b, HIGH);
                digitalWrite(c, HIGH);
                digitalWrite(f, HIGH);
                digitalWrite(g, HIGH);
                itsONled[4] = 1;
            }
            break;
        case code5:
            if (itsONled[5] == 1)
            {
                digitalWrite(a, LOW);
                digitalWrite(f, LOW);
                digitalWrite(g, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, LOW);
                itsONled[5] = 0;
            }
            else
            {
                digitalWrite(a, HIGH);
                digitalWrite(f, HIGH);
                digitalWrite(g, HIGH);
                digitalWrite(c, HIGH);
                digitalWrite(d, HIGH);
                itsONled[5] = 1;
            }
            break;
        case code6:
            if (itsONled[6] == 1)
            {                         //
                digitalWrite(a, LOW); //
                digitalWrite(c, LOW);
                digitalWrite(d, LOW); //
                digitalWrite(e, LOW);
                digitalWrite(f, LOW); //
                digitalWrite(g, LOW);
                itsONled[6] = 0; //
            }
            else
            {                          //
                digitalWrite(a, HIGH); //
                digitalWrite(c, HIGH);
                digitalWrite(d, HIGH); //
                digitalWrite(e, HIGH);
                digitalWrite(f, HIGH); //
                digitalWrite(g, HIGH);
                itsONled[6] = 1; //
            }
            break;
        case code7:
            if (itsONled[7] == 1)
            { //
                digitalWrite(a, LOW);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                itsONled[7] = 0; //
            }
            else
            { //
                digitalWrite(a, HIGH);
                digitalWrite(b, HIGH); //
                digitalWrite(c, HIGH);
                itsONled[7] = 1; //
            }
            break;
        case code8:
            if (itsONled[8] == 1)
            {
                digitalWrite(a, LOW);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, LOW);
                digitalWrite(e, LOW);
                digitalWrite(f, LOW);
                digitalWrite(g, LOW);
                itsONled[8] = 0;
            }
            else
            {
                digitalWrite(a, HIGH);
                digitalWrite(b, HIGH);
                digitalWrite(c, HIGH);
                digitalWrite(d, HIGH);
                digitalWrite(e, HIGH);
                digitalWrite(f, HIGH);
                digitalWrite(g, HIGH);
                itsONled[8] = 1;
            }
            break;
        case code9:
            if (itsONled[9] == 1)
            {
                digitalWrite(a, LOW);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, LOW);
                digitalWrite(f, LOW);
                digitalWrite(g, LOW);
                itsONled[9] = 0;
            }
            else
            {
                digitalWrite(a, HIGH);
                digitalWrite(b, HIGH);
                digitalWrite(c, HIGH);
                digitalWrite(d, HIGH);
                digitalWrite(f, HIGH);
                digitalWrite(g, HIGH);
                itsONled[9] = 1;
            }
            break;
        case code10:
            if (itsONled[10] == 1)
            {
                digitalWrite(a, LOW);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, LOW);
                digitalWrite(e, LOW);
                digitalWrite(f, LOW);
                itsONled[10] = 0;
            }
            else
            {
                digitalWrite(a, HIGH);
                digitalWrite(b, HIGH);
                digitalWrite(c, HIGH);
                digitalWrite(d, HIGH);
                digitalWrite(e, HIGH);
                digitalWrite(f, HIGH);
                itsONled[10] = 1;
            }
            break;
        case code11:
            if (itsONled[11] == 1)
            {
                digitalWrite(a, LOW);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, LOW);
                digitalWrite(e, LOW);
                digitalWrite(f, LOW);
                digitalWrite(g, LOW);
                itsONled[11] = 0;
            }
            else
            {
                digitalWrite(a, HIGH);
                digitalWrite(b, HIGH);
                digitalWrite(c, HIGH);
                digitalWrite(d, HIGH);
                digitalWrite(e, HIGH);
                digitalWrite(f, HIGH);
                digitalWrite(g, LOW); // 0
                delay(1000);
                digitalWrite(a, LOW);
                digitalWrite(b, HIGH);
                digitalWrite(c, HIGH);
                digitalWrite(d, LOW);
                digitalWrite(e, LOW);
                digitalWrite(f, LOW);
                digitalWrite(g, LOW); // 1
                delay(1000);
                digitalWrite(a, HIGH);
                digitalWrite(b, HIGH);
                digitalWrite(c, LOW);
                digitalWrite(d, HIGH);
                digitalWrite(e, HIGH);
                digitalWrite(f, LOW);
                digitalWrite(g, HIGH); // 2
                delay(1000);
                digitalWrite(a, HIGH);
                digitalWrite(b, HIGH);
                digitalWrite(c, HIGH);
                digitalWrite(d, HIGH);
                digitalWrite(e, LOW);
                digitalWrite(f, LOW);
                digitalWrite(g, HIGH); // 3
                delay(1000);
                digitalWrite(a, LOW);
                digitalWrite(b, HIGH);
                digitalWrite(c, HIGH);
                digitalWrite(d, LOW);
                digitalWrite(e, LOW);
                digitalWrite(f, HIGH);
                digitalWrite(g, HIGH); // 4
                delay(1000);
                digitalWrite(a, HIGH);
                digitalWrite(b, LOW);
                digitalWrite(c, HIGH);
                digitalWrite(d, HIGH);
                digitalWrite(e, LOW);
                digitalWrite(f, HIGH);
                digitalWrite(g, HIGH); // 5
                delay(1000);
                digitalWrite(a, HIGH);
                digitalWrite(b, LOW);
                digitalWrite(c, HIGH);
                digitalWrite(d, HIGH);
                digitalWrite(e, HIGH);
                digitalWrite(f, HIGH);
                digitalWrite(g, HIGH); // 6
                delay(1000);
                digitalWrite(a, HIGH);
                digitalWrite(b, HIGH);
                digitalWrite(c, HIGH);
                digitalWrite(d, LOW);
                digitalWrite(e, LOW);
                digitalWrite(f, LOW);
                digitalWrite(g, LOW); // 7
                delay(1000);
                digitalWrite(a, HIGH);
                digitalWrite(b, HIGH);
                digitalWrite(c, HIGH);
                digitalWrite(d, HIGH);
                digitalWrite(e, HIGH);
                digitalWrite(f, HIGH);
                digitalWrite(g, HIGH); // 8
                delay(1000);
                digitalWrite(a, HIGH);
                digitalWrite(b, HIGH);
                digitalWrite(c, HIGH);
                digitalWrite(d, HIGH);
                digitalWrite(e, LOW);
                digitalWrite(f, HIGH);
                digitalWrite(g, HIGH); // 9
                delay(1000);
                itsONled[11] = 1;
            }
            break;
        }
        Serial.println(value); // you can comment this line
        irrecv.resume();       // Receive the next value
    }
}
