#include <cppProjectTemplate/lib.hpp>

#include <sstream>

std::string helloFromLibrary(const std::string& name) {
    std::stringstream ss;
    ss << "Hello from the library, " << name << ".";
    return ss.str();
}