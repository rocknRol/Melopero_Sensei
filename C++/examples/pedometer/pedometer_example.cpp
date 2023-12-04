#include <stdio.h>
#include "pico/stdlib.h"
#include "../../src/MeloperoSensei.hpp"

int main()
{

    MeloperoSensei sensei;
    char msg[128];

    sensei.setTextFont(FREE_MONO, SMALL);
    sensei.print(0, 0, "Initializing IMU...");
    sensei.presentScreen();

    sensei.imuInit();

    sensei.clearScreen(0, 0, 0);
    sensei.print(0, 0, "IMU Initalized");
    sensei.presentScreen();

    while (true)
    {
        sensei.clearScreen(0, 0, 0);
        sprintf(msg, "steps: %d", sensei.imuGetSteps());
        sensei.print(0, 20, msg);
        sensei.presentScreen();
    }
}
