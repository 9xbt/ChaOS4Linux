// Not finished! -xrc2

#include <iostream>
#include "Core/Core.h"
#include "Plugs/Console.h"
#include "Plugs/IO.h"
#include "Plugs/String.h"
#include "Plugs/Time.h"

std::string ver = "PT-1";
std::string copyright = "Copyright (c) 2023 ChaOS Software. All rights reserved.";

std::string username = "xrc2";

void BeforeRun() {
    Console::Clear();
    write("\033[1m");
    log("Boot successful!");
    clog("  ______   __                   ______    ______  \n /      \\ |  \\                 /      \\  /      \\ \n|  $$$$$$\\| $$____    ______  |  $$$$$$\\|  $$$$$$\\\n| $$   \\$$| $$    \\  |      \\ | $$  | $$| $$___\\$$\n| $$      | $$$$$$$\\  \\$$$$$$\\| $$  | $$ \\$$    \\ \n| $$   __ | $$  | $$ /      $$| $$  | $$ _\\$$$$$$\\\n| $$__/  \\| $$  | $$|  $$$$$$$| $$__/ $$|  \\__| $$\n \\$$    $$| $$  | $$ \\$$    $$ \\$$    $$ \\$$    $$\n  \\$$$$$$  \\$$   \\$$  \\$$$$$$$  \\$$$$$$   \\$$$$$$ ", ConsoleColor::Green);
    log("\n" + ver + "\n" + copyright + "\nType \"help\" to get started!\n");
}

void Run() {
    write(username + " (" + IO::GetCurrentDirectory() + ") ");
    std::string input;
    std::getline(std::cin, input);
    input = String::Trim(input);

    if (String::StartsWith(input, "help")) {
        clog("\nFunctions:", ConsoleColor::Green);
        log(" help - Shows all functions");
        log(" credits - Shows all of the wonderful people that make ChaOS work");
        log(" cls/clear - Clears the screen");
        log(" time - Tells you the time\n");
    }

    else if (String::StartsWith(input, "credits")) {
        clog("\nChaOS2C++ " + ver, ConsoleColor::Green);
        clog(" ekeleze - Creator", ConsoleColor::BrightYellow);
        clog(" xrc2 - Contributor\n", ConsoleColor::BrightYellow);
    }

    else if (String::StartsWith(input, "clear")) {
        Console::Clear();
    }

    else if (String::StartsWith(input, "time")) {
        clog("\nCurrent time is " + std::to_string(Time::Minutes()) + ":" + std::to_string(Time::Hours()) + "\n", ConsoleColor::BrightYellow);
    }

    else if (String::StartsWith(input, "echo")) {
        std::string thingtosay = String::Substring(input, "echo ");
        log(thingtosay);
    }

    else {
        clog("\n! Unavailable command.\n", ConsoleColor::Red);
        Console::Beep();
    }
}
