#include "../includes/ILogger.hpp"
#include "../includes/FileLogger.hpp"
#include "../includes/StreamLogger.hpp"

#include <vector>

int main() {
    FileLogger fileLogger("log.txt", "");
    StreamLogger streamLogger(std::cout, "");

    std::vector<std::string> messages = {
        "Message 1",
        "Message 2",
        "Message 3",
        "Another message",
        "One more message"
    };

    std::vector<ILogger *> test;
    test.push_back(&fileLogger);
    test.push_back(&streamLogger);

    std::vector<std::string>::iterator it;
    for (it = messages.begin(); it != messages.end(); ++it) {
        fileLogger.write(*it);
        streamLogger.write(*it);
    }

    return 0;
}