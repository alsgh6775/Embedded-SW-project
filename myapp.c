#include <stdio.h>
#include "func1.h"
#include "func2.h"

void process()
{
 printf("PROCESS IS WORKING ALWAYS\n");
}

int main(void)
{
 func1();
 func2();
 process();

}
