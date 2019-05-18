/**
 *******************************************************************************
 * @file       app.h
 * @version    V0.0.1   
 * @date       2019.5.18
 * @brief      This is a file for GUI engine's app.	
 *******************************************************************************
 * @copy
 *
 * 
 *******************************************************************************
 */ 

/*---------------------------- Include ---------------------------------------*/
#include "app.h"

P_GuiApp CreateApp(U8 *name)
{
    P_GuiApp *app;

    /* create application */
    app = GuiMalloc(sizeof(GuiApp));
    if (app == CoNULL)
        return CoNULL;

    //app->mq = CoCreateQueue

    //app->name = 
}