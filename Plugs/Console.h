#include <iostream>

#ifndef CONSOLECOLOR    // To make sure you don't declare the function more than once by including the header multiple times.
#define CONSOLECOLOR

enum ConsoleColor {
    Black = 30,
    Red = 31,
    Green = 32,
    Yellow = 33,
    Blue = 34,
    Magenta = 35,
    Cyan = 36,
    White = 37,
    BrightBlack = 90,
    BrightRed = 91,
    BrightGreen = 92,
    BrightYellow = 93,
    BrightBlue = 94,
    BrightMagenta = 95,
    BrightCyan = 96,
    BrightWhite = 97
};

class Console {
    public:
        static void Clear() {
            std::cout << "\033[2J\033[1;1H";
        }
};

#endif