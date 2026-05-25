cmake_minimum_required(VERSION 4.1)
project(WeatherService)

set(CMAKE_CXX_STANDARD 20)

add_executable(WeatherService main.cpp
        Weather.cpp
        Weather.h
        Service.cpp
        Service.h
        JsonService.cpp
        JsonService.h
        XmlService.cpp
        XmlService.h
        pugixml.cpp)
