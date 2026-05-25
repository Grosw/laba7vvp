#ifndef WEATHERSERVICE_XMLSERVICE_H
#define WEATHERSERVICE_XMLSERVICE_H

#include "Service.h"

class XmlService : public Service {
public:
    Weather getWeather(std::string s) override;
    virtual ~XmlService() = default;
};

#endif