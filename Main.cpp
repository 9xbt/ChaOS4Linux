#include "Kernel.h"

int main(void) 
{
    BeforeRun();
    while (true) {
        Run();
    }
    return 0;
}