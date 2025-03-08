#include <iostream>
#include <emscripten.h>

// Function to log to the console
extern "C" {
    EMSCRIPTEN_KEEPALIVE
    void logName() {
        std::cout << "Mr Sharafdin" << std::endl;
    }
}
