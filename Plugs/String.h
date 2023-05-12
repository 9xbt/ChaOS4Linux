#include <iostream>
#include <string>
#include <algorithm>

class String {
    public:
        static std::string TrimStart(const std::string &s) {
            size_t start = s.find_first_not_of(" \n\r\t\f\v");
            return (start == std::string::npos) ? "" : s.substr(start);
        }

        static std::string TrimEnd(const std::string &s) {
            size_t end = s.find_last_not_of(" \n\r\t\f\v");
            return (end == std::string::npos) ? "" : s.substr(0, end + 1);
        }
 
        static std::string Trim(const std::string &s) {
            return TrimEnd(TrimStart(s));
        }

        static bool StartsWith(const std::string str, const std::string cmp) {
            if (str.rfind(cmp, 0) == 0) {
                return true;
            }
            else {
                return false;
            }
        }
};
