#include<avr/io.h>

int main() {
  DDRE |= 0xff;
  DDRD &= 0x00;
  PORTD |= 0xff;

  while(1) {
    DDRE = ~PIND;
  }
}
