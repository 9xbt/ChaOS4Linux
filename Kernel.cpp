// Not finished! -xrc2

#include <iostream>
#include "Core/Core.h"
#include "Plugs/Console.h"
#include "Plugs/IO.h"
#include "Plugs/String.h"

std::string ver = "Version 1.1";
std::string copyright = "Copyright (c) 2023 ChaOS Software. All rights reserved.";

std::string username = "xrc2";

void BeforeRun() {
    Console::Clear();
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
        log(" help - Shows all functions\n");
    }
    else {
        clog("\n! Unknown command.\n", ConsoleColor::Red);
    }
}
