#include <stdio.h>
#include "func1.h"
#include "func2.h"

void process()
{
 printf("PROCESS IS WORKING ALWAYS\n");
}

void post_process()
{
 printf("this is new process\n");

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
 post_process();

 func1();
 func2();

 process();
 power_off();
}
