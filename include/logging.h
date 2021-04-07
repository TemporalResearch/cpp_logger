#ifndef LOGGING_H
#define LOGGING_H

    #include <stdexcept>
    #include <iostream>

    #if defined(TRACE)
        #define TRACE_LOG(x) std::cout << "TRACE '" << __FILE__ << "': " << x << std::endl
    #else
        #define TRACE_LOG(x) {}
    #endif

#if defined(DEBUG)
        #define DEBUG_LOG(x) std::cout << "DEBUG '" << __FILE__ << "': " << x << std::endl
    #else
        #define DEBUG_LOG(x) {}
    #endif

    #if defined(INFO) || defined(DEBUG)
        #define INFO_LOG(x) std::cout << "INFO '" << __FILE__ << "': " << x << std::endl
    #else
        #define INFO_LOG(x) {}
    #endif

    #if defined(WARN) || defined(INFO) || defined(DEBUG)
        #define WARN_LOG(x) std::cout << "WARN '" << __FILE__ << "': " << x << std::endl
    #else
        #define WARN_LOG(x) {}
    #endif

    #if defined(ERROR) || defined(WARN) || defined(INFO) || defined(DEBUG)
        #define ERROR_LOG(x) std::cout << "ERROR '" << __FILE__ << "': " << x << std::endl
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
    #else
        #define UNEXPECTED_ERROR_LOG(e, l) {}
    #endif

#endif


