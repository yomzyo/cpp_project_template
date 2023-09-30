#include <spdlog/spdlog.h>

#include <cppProjectTemplate/lib.hpp>

int main(int argc, char** argv) {
  spdlog::info("Welcome to spdlog version {}.{}.{}!", SPDLOG_VER_MAJOR,
               SPDLOG_VER_MINOR, SPDLOG_VER_PATCH);

  spdlog::info("The output of the function is the following: {}",
               helloFromLibrary("APP"));

  return 0;
}