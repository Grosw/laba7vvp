#include "JsonService.h"
#include <fstream>
#include <iostream>
#include "json.hpp"

using nlohmann::json;

Weather JsonService::getWeather(std::string s) {
    std::ifstream fin(s);
    if (!fin) {
        throw std::runtime_error("Error opening file: " + s);
    }

    json j;
    try {
        j = json::parse(fin);
    } catch (const json::parse_error& e) {
        throw std::runtime_error("JSON parse error: " + std::string(e.what()));
    }

    std::string city = j["name"];
    double lon = j["coord"]["lon"];
    double lat = j["coord"]["lat"];
    double temperature = j["main"]["temp"];
    std::string weatherDescription = j["weather"][0]["description"];
    double windSpeed = j["wind"]["speed"];
    int clouds = j["clouds"]["all"];

    return Weather(city, lon, lat, temperature, weatherDescription, windSpeed, clouds);
}