/*
 * @文件名：WindGUI.c
 * @版本：V0.0.1
 * @简介：WindGUI，一个简单的嵌入式GUI库，提供一些常用的绘图函数。
 * 		只需提供两个函数，
 * @作者：fwindcore (c)2013
 * @Log:
 * 2013/08/09 开始编写
 *
 */

#include "wdgui.h"
#include "lcd_driver.h"

/******************************************************************************************************
 *初始化函数
 */
void wdgui_init(void)
{
    lcd_init();
}



/******************************************************************************************************
 * @底层绘图函数
 */
/**
  * @brief  画点
  * @param  X:
  * @retval None
  */
void wd_point(wd_u16 x,wd_u16 y)
{
    lcd_set_point(x,y);
}


/**
  * @brief  画线
  * @param  X:
  * @retval None
  */
void wd_line(wd_u16 x0,wd_u16 y0,wd_u16 x1,wd_u16 y1,WD_COLOR color)
{

}
