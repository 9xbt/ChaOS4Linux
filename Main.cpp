#include "Kernel.h"
#include "Core/Core.h"

int main(void) 
{
    try {
        BeforeRun();
        while (true) {
            Run();
        }
    } catch (...) {
        clog("\nAn error ocurred while running ChaOS2C++!\n", ConsoleColor::Red);
        return 1;
    }
}