#include "stm32f0xx.h"

int main(void)
{
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN; 	// enable the clock to GPIOA

	GPIOA->MODER = 0x10000000;		// PA14 is output
	
	GPIOA->ODR = 0x4000;			// PA14 high

	while(1) {
		GPIOA->ODR ^= 0x4000;
	}

	for (;;);

}
