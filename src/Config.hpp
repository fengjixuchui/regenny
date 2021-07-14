#pragma once

#include <string>
#include <deque>

#include <nlohmann/json.hpp>

struct Config {
    std::string font_file{};
    float font_size{16.0f};
    std::deque<std::string> file_history{};
};

void to_json(nlohmann::json& j, const Config& c);
void from_json(const nlohmann::json& j, Config& c);
