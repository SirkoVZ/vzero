#ifndef WIFI_PLUGIN_H
#define WIFI_PLUGIN_H

#include <Arduino.h>
#include <ArduinoJson.h>

#include "SimplePlugin.h"


class WifiPlugin : public Plugin {
public:
  WifiPlugin();
  String getName() override;
  int8_t getSensors() override;
  int8_t getSensorByAddr(const char* addr_c) override;
  bool getAddr(char* addr_c, int8_t sensor) override;
  bool getUuid(char* uuid_c, int8_t sensor) override;
  bool setUuid(const char* uuid_c, int8_t sensor) override;
  float getValue(int8_t sensor) override;
  // void getPluginJson(JsonObject* json) override;
  void getSensorJson(JsonObject* json, int8_t sensor) override;
  void loop() override;

private:
  int8_t devs;
  DeviceStructSingle devices;
};

#endif
