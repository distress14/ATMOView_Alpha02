#ifndef SENSOR_H
#define SENSOR_H

class Sensor
{
private:
    const float posX = 30, posY = 30;    //Using const cause the position will be fixed once selected, and float (32bit) instead of double (64 bit)
    const int Identification;   //ID-Identification will not change once selected.
    const int SensorType;   //Needs to be 0-4 (max 5 Sensors). It will be the ID for the Sensor type choosed.  //TODO SANIFICATION of INPUT
    int LastUpdate;     // Keep tracking time of last update of the XML file (if used)
    float SensorValue;         //Actual value of the Sensor (Not used int cause I wanna the PRECISION)
    float SensorValueMax;    //If needed, a bottom value (es:temperature)
    float SensorValueMin;   //If needed, a maximum value (es:temperature)
    float LastSensorValue;    //It can be used to do the comparation PRE-ACTUAL in (+/-)%
    const bool FromXML;    //Bool const which tells me if the User choosed to use an XML file. 0: Not Used | 1: Used -> Do not start Simulation for that Sensor

public:
    Sensor();  //First Default-Constructor
    ~Sensor();   //First Destructor
    bool NewSensor(); //Adds 1 new Sensor to the SXSideSensor tab. Need to POP-UP an "alert" (New window) in which must be added ID - SensorType - FromXML. Remainings are optional
    bool DeleteSensor();   //Otherwise delete it. For now kept on bool type to check if everthing went ok  --> converting to void??
};


#endif // SENSOR_H
