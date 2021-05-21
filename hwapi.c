#include <REG52.H>
#include "hwapi.h"

//INPUTS
sbit DOOR=P0^0;
sbit ENGINE=P0^1;
sbit KEY=P0^2;
sbit LIGHT=P0^3;



//OUTPUTS
sbit LIGHT_ALARM=P3^6;
sbit KEY_ALARM=P3^7;


int isDoorOpen(){
return DOOR==1;
}

int isKeyInPlace(){
return KEY==1;
}

int isEngineRunning(){
return ENGINE==1;
}

int isLightsOn(){
return LIGHT==1;
}

void setLightAlarmOn(){
 LIGHT_ALARM=0;
}


void setLightAlarmOff()
{
 LIGHT_ALARM=1;
}


void setKeyAlarmOn(){
KEY_ALARM=0;
}

void setKeyAlarmOff(){

 KEY_ALARM=1;

}











