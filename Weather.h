#include <string>
#include <iostream>
#ifndef WEATHERSERVICE_WEATHER_H
#define WEATHERSERVICE_WEATHER_H


class Weather
{
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
        std::cout << "Weather in " << city << " (Lat: " << lat << ", Lon: " << lon << "):" << std::endl;
        std::cout << "  Temperature: " << temperature << "°C" << std::endl;
        std::cout << "  Condition: " << weather << std::endl;
        std::cout << "  Wind Speed: " << windSpeed << " m/s" << std::endl;
        std::cout << "  Clouds: " << clouds << "%" << std::endl;
    }
};


#endif //WEATHERSERVICE_WEATHER_H