/**
 *******************************************************************************
 * @file       screen.h
 * @version    V0.0.1
 * @date       2019.9.17
 * @brief      This is a file for refresh screen.	
 *******************************************************************************
 */ 

#ifndef _COGUI_SCREEN_H
#define _COGUI_SCREEN_H

#define COGUI_SCREEN_NODE_FLAG(n)           ((n)->flag)        

#define COGUI_SCREEN_NODE_FLAG_VAILD        0x001
#define COGUI_SCREEN_NODE_FLAG_FILLED       0x004
#define COGUI_SCREEN_NODE_FLAG_SHAPE_MASK   0x038    /* B0011 1000*/
#define COGUI_SCREEN_NODE_FLAG_RECT         0x008
#define COGUI_SCREEN_NODE_FLAG_CIRCLE       0x010
#define COGUI_SCREEN_NODE_FLAG_TRIANGLE     0x020
#define COGUI_SCREEN_NODE_FLAG_HEADER       0x040

#define COGUI_ENABLE_SCREEN_NODE(n)         COGUI_SCREEN_NODE_FLAG(n) |= COGUI_SCREEN_NODE_FLAG_VAILD
#define COGUI_DISABLE_SCREEN_NODE(n)        COGUI_SCREEN_NODE_FLAG(n) &= ~COGUI_SCREEN_NODE_FLAG_VAILD
#define COGUI_SCREEN_NODE_IS_ENABLE(n)      (COGUI_SCREEN_NODE_FLAG(n) & COGUI_SCREEN_NODE_FLAG_VAILD)

#define COGUI_FILLED_SCREEN_NODE(n)         COGUI_SCREEN_NODE_FLAG(n) |= COGUI_SCREEN_NODE_FLAG_FILLED
#define COGUI_UNFILLED_SCREEN_NODE(n)       COGUI_SCREEN_NODE_FLAG(n) &= ~COGUI_SCREEN_NODE_FLAG_FILLED
#define COGUI_SCREEN_NODE_IS_FILLED(n)      (COGUI_SCREEN_NODE_FLAG(n) & COGUI_SCREEN_NODE_FLAG_FILLED)

#define COGUI_SCREEN_NODE_TYPE_RESET(n)     COGUI_SCREEN_NODE_FLAG(n) &= ~COGUI_SCREEN_NODE_FLAG_SHAPE_MASK
#define COGUI_SCREEN_NODE_TYPE_RECT(n)      COGUI_SCREEN_NODE_FLAG(n) |= COGUI_SCREEN_NODE_FLAG_RECT
#define COGUI_SCREEN_NODE_TYPE_CIRCLE(n)    COGUI_SCREEN_NODE_FLAG(n) |= COGUI_SCREEN_NODE_FLAG_CIRCLE
#define COGUI_SCREEN_NODE_TYPE_TRIANGLE(n)  COGUI_SCREEN_NODE_FLAG(n) |= COGUI_SCREEN_NODE_FLAG_TRIANGLE

#define COGUI_SCREEN_NODE_HEADER(n)         COGUI_SCREEN_NODE_FLAG(n) |= COGUI_SCREEN_NODE_FLAG_HEADER
#define COGUI_SCREEN_NODE_IS_HEADER(n)      (COGUI_SCREEN_NODE_FLAG(n) & COGUI_SCREEN_NODE_FLAG_HEADER)

#define COGUI_SCREEN_NODE_SET_COLOR(n, c)   (n)->color = (c)


struct cogui_screen {
    union shape {
        cogui_rect_t     r;
        //struct circle   c;
        //struct triangle t;
    };

    S32 flag;
    
    cogui_color_t color;

    S32 node_id;
    cogui_app_t *owner

    cogui_list_t list;
};
typedef cogui_screen cogui_screen_t;

void init_screen_list(void);
cogui_screen_t * init_screen_node(cogui_app_t *owner);

#endif /* _COGUI_SCREEN_H */
