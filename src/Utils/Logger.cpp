#include "Logger.h"
#include <cstdio> 

void Utils::LogMessage(const char* format, ...) {
    va_list args;
    va_start(args, format);
    char buffer[512]; 
    vsnprintf(buffer, sizeof(buffer), format, args);
    va_end(args);


    std::ofstream log_file("C:\\Lohg.txt", std::ios::app);
    if (log_file.is_open()) {
        log_file << buffer << '\n';
        log_file.close();
    }
}