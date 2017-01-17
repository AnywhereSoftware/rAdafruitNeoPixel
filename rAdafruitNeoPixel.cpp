#include "B4RDefines.h"
namespace B4R {
	void B4RAdafruitNeoPixel::Initialize(UInt NumberOfLEDs, Byte PinNumber, UInt LEDType) {
		pixel = new(be) Adafruit_NeoPixel(NumberOfLEDs, PinNumber, LEDType);
		pixel->begin();
	}
	void B4RAdafruitNeoPixel::SetPixelColor(UInt N, Byte R, Byte G, Byte B) {
		pixel->setPixelColor(N, R, G, B);
	}
	void B4RAdafruitNeoPixel::SetPixelColor2(UInt N, Byte R, Byte G, Byte B, Byte W) {
		pixel->setPixelColor(N, R, G, B, W);
	
	}
	void B4RAdafruitNeoPixel::SetBrightness (Byte Level) {
		pixel->setBrightness(Level);
	}
	void B4RAdafruitNeoPixel::Show() {
		pixel->show();
	}
	void B4RAdafruitNeoPixel::Clear() {
		pixel->clear();
	}
}