#include "JsonService.h"
#include "XmlService.h"
#include "Weather.h"
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    JsonService js;
    Weather wj = js.getWeather("weather.json");
    wj.printWeatherDescription();

    XmlService xs;
    Weather wx = xs.getWeather("weather.xml");
    wx.printWeatherDescription();

    return 0;
}
