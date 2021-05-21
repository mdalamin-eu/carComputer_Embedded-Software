
#pragma NOEXTEND
#include "hwapi.h"



void main(){
while(1)
	
if(isDoorOpen() && isLightsOn()&& ! isEngineRunning()){
setLightAlarmOn();
setKeyAlarmOff();
}
else if(isKeyInPlace()&& isDoorOpen()&& ! isEngineRunning())
{
setLightAlarmOff();
 setKeyAlarmOn();

}else if( isKeyInPlace()&&isDoorOpen() && isLightsOn()&& ! isEngineRunning() ){

setLightAlarmOn();
setKeyAlarmOn();

}

else{
setLightAlarmOff();
	setKeyAlarmOff();
}
}