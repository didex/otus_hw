#include <memory>
#include "lib.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"


int main() {
    std::shared_ptr<spdlog::logger> logger = spdlog::stdout_color_mt("console");
    spdlog::set_default_logger(logger);
    spdlog::set_pattern("%v");

    spdlog::info("build {}", version());
    spdlog::info("Hello, World!");

    spdlog::shutdown();

    return 0;
}