#ifndef WEATHERSERVICE_SERVICE_H
#define WEATHERSERVICE_SERVICE_H

#include <string>
#include "Weather.h"

class Service {
public:
    virtual Weather getWeather(std::string s) = 0;
    virtual ~Service() = default;
};

#endif //WEATHERSERVICE_SERVICE_H