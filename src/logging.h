#ifndef LOGGING_H
#define LOGGING_H

#include <iostream>

#if defined(DEBUG)
#define DEBUG_LOG(x) std::cout << x << std::endl
#else
#define DEBUG_LOG(x) {}
#endif

#if defined(INFO) || defined(DEBUG)
#define INFO_LOG(x) std::cout << x << std::endl
#else
#define INFO_LOG(x) {}
#endif

#if defined(ERROR) || defined(INFO) || defined(DEBUG)
#define ERROR_LOG(x) std::cout << x << std::endl
#else
#define ERROR_LOG(x) {}
#endif
#endif
