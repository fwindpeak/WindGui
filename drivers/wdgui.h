#ifndef __WDGUI_H__
#define __WGGUI_H__


#define WD_WIDTH		204
#define WD_HEIGHT		320



//基本类型定义
typedef signed   char                   wd_i8;      /**<  8bit integer type */
typedef signed   short                  wd_i16;     /**< 16bit integer type */
typedef signed   long                   wd_i32;     /**< 32bit integer type */
typedef unsigned char                   wd_u8;     /**<  8bit unsigned integer type */
typedef unsigned short                  wd_u16;    /**< 16bit unsigned integer type */
typedef unsigned long                   wd_u32;    /**< 32bit unsigned integer type */
typedef int                             wd_bool;      /**< boolean type */

typedef wd_u16							WD_COLOR;



void wdgui_init(void);
void wd_point(wd_u16 x,wd_u16 y);

#endif
