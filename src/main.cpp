#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/adc.h"

int main() {
	stdio_init_all();
	adc_init();
	// GPIO26 is ADC 0
	adc_gpio_init(26);
	adc_select_input(0);

	int adc_value = 0;

	// Loop reading the adc and printing the result
	while (true) {
		adc_value = adc_read();
		printf("value: %d\n", adc_value);
		sleep_ms(100);
	}
	return 0;
}
