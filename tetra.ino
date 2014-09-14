#include <init.h>
#include <subroutine.h>
#include <uitask.h>
#include <slowtask.h>

#define UI_UPDATE_TIME 50
#define SLOW_UPDATE_TIME 200



void setup()
{
    init();    
}

void loop()
{
    
    uiTask(UI_UPDATE_TIME);
    
    slowTask(SLOW_UPDATE_TIME);
    
    subroutine();
}
