# C++ Logging

Enable log levels by using the `-D` flag within the C++ compiler
## Log levels

Lower log levels will include all high level logs.
- `DEBUG`, Create log lines using `DEBUG_LOG(x)`
- `INFO`, Create log lines using `INFO_LOG(x)`
- `WARN`, Create log lines using `WARN_LOG(x)`
- `ERROR`, Create log lines using `ERROR_LOG(x)`

## Assertions

Assertions will perform an action conditional on the provided assertion predicate failing.

To enable use the `-DASSERTIONS` flag on the C++ compiler

### Assertion functions

- `ASSERT(bool expectation, std::string throwString)`, Throws a logic error with the given throwString message if the expectation predicate fails
- `UNEXPECTED_ERROR_LOG(bool expectation, std::string logString)`, Logs an error if the expectation predicate fails. This will also be enabled if the 
  `ERROR` log level is enabled.
