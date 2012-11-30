
#include <inttypes.h>
#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
  #include <pins_arduino.h>
#endif

class RN42_HIDRaw_Arduino {
public:
	RN42_HIDRaw_Arduino();
	void SendKeyboardRaw(char[], uint8_t);
	void SendKeyboardRawBlank();
	void SendGamepadRaw(char, char, char, char, uint8_t, uint8_t);
	void SendMouseRaw(uint8_t, uint8_t, uint8_t, uint8_t);
};