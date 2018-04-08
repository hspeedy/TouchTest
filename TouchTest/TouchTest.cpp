// Do not remove the include below
#include "TouchTest.h"
#include "Arduino.h"

#include "SPI.h"
#include "TFT_eSPI.h"

TFT_eSPI tft = TFT_eSPI();

//The setup function is called once at startup of the sketch
void setup()
{
	Serial.begin(115200);
	tft.init();
	// Set the rotation before we calibrate
	tft.setRotation(1);

	// clear screen
	tft.fillScreen(TFT_BLUE);

}

// The loop function is called in an endless loop
void loop()
{
	uint16_t x, y;

	if (tft.getTouch(&x, &y)) {
		Serial.println("Touch: ");
		Serial.print("  X: ");
		Serial.println(x);
		Serial.print("  X: ");
		Serial.println(y);
	}
}

