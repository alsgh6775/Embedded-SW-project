#include <stdio.h>
#include "func1.h"
#include "func2.h"

void power_on()
{
 printf("power_on\n");
}

void power_off()
{
 printf("power_off\n");
}

int main(void)
{
 power_on();
 func1();
 func2();
 power_off();
}
