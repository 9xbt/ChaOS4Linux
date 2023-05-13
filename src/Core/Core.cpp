#include "iostream"
#include "../Plugs/Console.h"

void log(std::string text) {
    std::cout << text + "\n";
}

void clog(std::string text, ConsoleColor ForeColor) {
    std::cout << "\x1B[" << ForeColor << "m" << text << "\033[0m\t\t\n";
}

void write(std::string text) {
    std::cout << text;
}

void cwrite(std::string text, ConsoleColor ForeColor) {
    std::cout << text;
}
