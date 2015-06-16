#include <stdint.h>
#include <stdbool.h>
#include <string.h>
typedef bool boolean;

#include "binary.h"

#define abs(x) ((x) >= 0 ? (x) : -(x))
#define min(x, y) ( (x) > (y) ? (y) : (x))
#define max(x, y) ( (x) > (y) ? (x) : (y))

#include <avr/delay.h>
#define delayMicroseconds(x) _delay_us((x))
#define delay(x) { \
  uint32_t __d = 0; \
  for(; __d < (x); __d++) \
    _delay_ms(1); \
}
