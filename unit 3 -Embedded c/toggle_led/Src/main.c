
#include <stdint.h>

#define RCC_BASE 0X40021000
#define GPIO_PORTA 0X40010800

#define RCC_ENB *((volatile uint32_t*) (RCC_BASE + 0x18))
#define GPIOA_CRH *((volatile uint32_t*) (GPIO_PORTA + 0x04))
#define GPIOA_ODR *((volatile uint32_t*) (GPIO_PORTA + 0x0C))


int main(void)
{
    /* Loop forever */

RCC_ENB |= (1<<2);
GPIOA_CRH &= 0XFF0FFFFF;
GPIOA_CRH |= 0X00200000;
while(1){
GPIOA_ODR |= 1<<13;
for(int i =0 ; i<5000 ; i++);
GPIOA_ODR &= ~(1<<13);
for(int i =0 ; i<5000 ; i++);
}

return 0;
}
