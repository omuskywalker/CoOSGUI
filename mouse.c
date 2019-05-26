/**
 *******************************************************************************
 * @file       mouse.c
 * @version    V0.0.1   
 * @date       2019.5.23
 * @brief      The mouse action for gui engine.	
 *******************************************************************************
 * @copy
 *
 * 
 *******************************************************************************
 */ 

/*---------------------------- Include ---------------------------------------*/
#include "GuiMouse.h"

/*---------------------------- Variable Define -------------------------------*/
struct gui_cursor *_cursor;

void MouseInit();

void MouseSetPos(S32 x, S32 y)
{
    /* move current cursor */
    _cursor->cx = x;
    _cursor->cy = y;
}

void MouseMoveTo(S32 x,S32 y)
{
    
}