#include <Bounce2.h>
#include <Keyboard.h>

const int safeguard_pin = 16;

const int alegria_pin = 2;
const int tristeza_pin = 3;
const int felicia_pin = 4;
const int raiva_pin = 5;
const int nojo_pin = 6;
const int amor_pin = 7;

Bounce alegria_debouncer = Bounce();
Bounce tristeza_debouncer = Bounce();
Bounce felicia_debouncer = Bounce();
Bounce raiva_debouncer = Bounce();
Bounce nojo_debouncer = Bounce();
Bounce amor_debouncer = Bounce();

const int debouncerInterval = 5;

void setup()
{
  Serial.begin(115200);

  pinMode(alegria_pin, INPUT);
  pinMode(tristeza_pin, INPUT);
  pinMode(felicia_pin, INPUT);
  pinMode(raiva_pin, INPUT);
  pinMode(nojo_pin, INPUT);
  pinMode(amor_pin, INPUT);

  alegria_debouncer.attach(alegria_pin);
  tristeza_debouncer.attach(tristeza_pin);
  felicia_debouncer.attach(felicia_pin);
  raiva_debouncer.attach(raiva_pin);
  nojo_debouncer.attach(nojo_pin);
  amor_debouncer.attach(amor_pin);

  alegria_debouncer.interval(debouncerInterval);
  tristeza_debouncer.interval(debouncerInterval);
  felicia_debouncer.interval(debouncerInterval);
  raiva_debouncer.interval(debouncerInterval);
  nojo_debouncer.interval(debouncerInterval);
  amor_debouncer.interval(debouncerInterval);
}

void loop()
{
  if(digitalRead(safeguard_pin) == HIGH)
  {
    return;
  }

  alegria_debouncer.update();
  tristeza_debouncer.update();
  felicia_debouncer.update();
  raiva_debouncer.update();
  nojo_debouncer.update();
  amor_debouncer.update();

  /**********************************************************
  ALEGRIA ***************************************************
  **********************************************************/
  if (alegria_debouncer.rose())
  {
    Serial.println("Alegria rose!");
    Keyboard.begin();
    Keyboard.print("1");
    Keyboard.end();
  }

  /**********************************************************
  TRISTEZA **************************************************
  **********************************************************/
  if (tristeza_debouncer.rose())
  {
    Serial.println("Tristeza rose!");
    Keyboard.begin();
    Keyboard.print("2");
    Keyboard.end();
  }

  /**********************************************************
  FELICIA ***************************************************
  **********************************************************/
  if (felicia_debouncer.rose())
  {
    Serial.println("Felicia rose!");
    Keyboard.begin();
    Keyboard.print("3");
    Keyboard.end();
  }

  /**********************************************************
  RAIVA *****************************************************
  **********************************************************/
  if (raiva_debouncer.rose())
  {
    Serial.println("Raiva rose!");
    Keyboard.begin();
    Keyboard.print("4");
    Keyboard.end();
  }

  /**********************************************************
  NOJO ******************************************************
  **********************************************************/
  if (nojo_debouncer.rose())
  {
    Serial.println("Nojo rose!");
    Keyboard.begin();
    Keyboard.print("5");
    Keyboard.end();
  }

  /**********************************************************
  AMOR ******************************************************
  **********************************************************/
  if (amor_debouncer.rose())
  {
    Serial.println("Amor rose!");
    Keyboard.begin();
    Keyboard.print("6");
    Keyboard.end();
  }

}
