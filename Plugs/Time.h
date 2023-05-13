#include <iostream>
#include <ctime>

#ifndef TIME_H
#define TIME_H

class Time {
    public:
        static int Minutes() {
            time_t now = time(0);
            tm* ltm = localtime(&now);
            return ltm->tm_min;
        }
        static int Hours() {
            time_t now = time(0);
            tm* ltm = localtime(&now);
            return ltm->tm_hour;
        }
};

#endif