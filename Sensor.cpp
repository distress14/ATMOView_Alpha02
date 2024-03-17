#include <iostream>
#include <math.h>
#include "Sensor.h"

int const MAX_XPOS = 50;
int const MAX_YPOS = 50;

bool InputSanification(float User_XPOS, float User_YPOS)
{
    if ((User_XPOS < MAX_XPOS) || (User_YPOS > MAX_YPOS)){ return 0;}  //Checks if the Max height/weight of the "map" is respected. Return 0 if OutOfBonds
    return 1;
};


bool Sensor::NewSensor()
{
    if (InputSanification(posX, posY) == 0){    //Calls the [TODO bool InputSanification function], which returns True if the Input is respected, 0 otherwise
        std::cout << "Something went wrong with the Input. Error: 001 " << std::endl;   //Error 001 - Errors will be "sequential", so I can track easly where the error is
        return 0;      //Exit the program. TODO --> Display Error on the "alert" window and recall a NEW "alert" window, asking gently if you can choose between 0-5
    }
    return 1;
};
