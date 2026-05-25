#ifndef WEATHERSERVICE_WEATHER_H
#define WEATHERSERVICE_WEATHER_H

#include <string>
#include <iostream>

class Weather {
public:
    std::string city;
    double lon;
    double lat;
    double temperature;
    std::string weather;
    double windSpeed;
    int clouds;

    Weather(std::string city, double lon, double lat, double temperature,
            std::string weather, double windSpeed, int clouds)
        : city(city), lon(lon), lat(lat), temperature(temperature),
          weather(weather), windSpeed(windSpeed), clouds(clouds) {}

    void printWeatherDescription() const {
        std::cout << "Погода в " << city << " (широта: " << lat << ", долгота: " << lon << "):" << std::endl;
        std::cout << "  Температура: " << temperature << " °C" << std::endl;
        std::cout << "  Описание: " << weather << std::endl;
        std::cout << "  Скорость ветра: " << windSpeed << " м/с" << std::endl;
        std::cout << "  Облачность: " << clouds << "%" << std::endl;
    }
};

#endif //WEATHERSERVICE_WEATHER_H
