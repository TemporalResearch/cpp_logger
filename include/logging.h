#ifndef LOGGING_H
#define LOGGING_H

#include <stdexcept>
#include <iostream>

#if defined(DEBUG)
#define DEBUG_LOG(x) std::cout << "DEBUG: << x << std::endl
#else
#define DEBUG_LOG(x) {}
#endif

#if defined(INFO) || defined(DEBUG)
#define INFO_LOG(x) std::cout << "INFO: " << x << std::endl
#else
#define INFO_LOG(x) {}
#endif

#if defined(WARN) || defined(INFO) || defined(DEBUG)
#define WARN_LOG(x) std::cout << "WARN: " << x << std::endl
#else
#define WARN_LOG(x) {}
#endif

#if defined(ERROR) || defined(WARN) || defined(INFO) || defined(DEBUG)
#define ERROR_LOG(x) std::cout << "ERROR: " << x << std::endl
#else
#define ERROR_LOG(x) {}
#endif

#if defined(ASSERTIONS)
#define ASSERT(expected, throwString) if (!(expected)) throw std::logic_error(("Assertion failed:" + #expected + " " + throwString);
#else
#define ASSERT(e, t) {}
#endif

#if defined(ASSERTIONS) || defined(ERROR)
#define UNEXPECTED_ERROR_LOG(expected, logString) if (!(expected)) std::cout << "ASSERTION ERROR: " + #expected + " " + logString << std::endl;


#endif


