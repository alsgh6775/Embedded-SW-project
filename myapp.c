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
}

int main(void)
{
 func1();
 func2();
 process();
 post_procss();

}
