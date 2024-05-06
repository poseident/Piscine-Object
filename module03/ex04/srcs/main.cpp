#include "../includes/ILogger.hpp"
#include "../includes/FileLogger.hpp"
#include "../includes/StreamLogger.hpp"

#include <vector>
#include <time.h>

int main() {
    FileLogger fileLogger("log.txt");
    FileLogger fileLogger2("log2.txt", 1);
    FileLogger fileLogger3("log3.txt", "thats_a_header");

    StreamLogger streamLogger(std::cout);
    StreamLogger streamLogger2(std::cout, 1);
    StreamLogger streamLogger3(std::cout, "thats_a_header");

    std::vector<std::string> messages;
    messages.push_back("Message 1");
    messages.push_back("Message 2");
    messages.push_back("Message 3");
    messages.push_back("Another message");
    messages.push_back("One more message");
    
    std::vector<ILogger *> test;
    test.push_back(&fileLogger);
    test.push_back(&fileLogger2);
    test.push_back(&fileLogger3);
    test.push_back(&streamLogger);
    test.push_back(&streamLogger2);
    test.push_back(&streamLogger3);

    std::vector<std::string>::iterator it;
    std::vector<ILogger *>::iterator it2;
    for (it = messages.begin(); it != messages.end(); ++it) {
        for (it2 = test.begin(); it2 != test.end(); ++it2) {
            (*it2)->write(*it);
        }
    }

    return 0;
}