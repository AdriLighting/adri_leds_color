#ifndef ADRI_LEDS_COLORS_H
	#define ADRI_LEDS_COLORS_H
	#include <arduino.h>

	// #if LED_LIB==FASTLED
		#include <FastLED.h>
	// #endif

	struct RgbColor {uint8_t R; uint8_t G; uint8_t B; };
	struct HsvColor {uint8_t h; uint8_t s; uint8_t v; };

	extern String LampeColor_string;

	RgbColor hsv2rgb (uint8_t h, uint8_t s, uint8_t v, int pix_nbr);
	HsvColor rgb2hsv(unsigned char r, unsigned char  g, unsigned char  b);

	String RGBToString(RgbColor c) ;
	// #if LED_LIB==FASTLED
		String 	RGBtoString(CRGB c);
		CRGB 	parsecolor(String Val);
		CRGB 	Wheel(byte WheelPos);
		CRGB 	hsv2rgb(uint8_t h, uint8_t s, uint8_t v);
		void 	rgb2hsv(CRGB c, uint8_t * h, uint8_t * s, uint8_t * v)  ;

	// #endif

	uint8_t randomColor();

	uint8_t randomColor(int min, int max);

	uint8_t WheelPos(int pos);

	uint32_t hsv2_32(uint8_t h, uint8_t s, uint8_t v);
	uint32_t rgb2_32(RgbColor c1);

	extern boolean 	fx_doubleColor;
	extern int 		fx_doubleColor_pos;

	int* splitColor(String Val);


	CRGB parsecolorEx(String Val);
#endif

		// LampeColor_string = "rgb(" + red + ", " + green + ", " + blue + ")";
