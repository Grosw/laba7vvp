#ifndef WEATHERSERVICE_JSONSERVICE_H
#define WEATHERSERVICE_JSONSERVICE_H

#include "Service.h"

class JsonService : public Service {
public:
    virtual Weather getWeather(std::string s) override;
    virtual ~JsonService() = default;
};

#endif //WEATHERSERVICE_JSONSERVICE_H