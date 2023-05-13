#include <iostream>
#include <unistd.h>

class IO {
    public:
        static std::string GetCurrentDirectory() {
            char buffer[FILENAME_MAX];
            getcwd( buffer, FILENAME_MAX );
            std::string result(buffer);
            return result;
        }
};