#ifndef LOGGING_H
#define LOGGING_H

#include <iostream>
#include <string>

namespace log {
inline void println(std::string message) {
    (void)(message);
#ifdef DEBUG
    std::cout << message << std::endl;
#endif
}
}

#endif
