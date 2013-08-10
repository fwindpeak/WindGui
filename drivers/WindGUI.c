/*
 * @�ļ�����WindGUI.c
 * @�汾��V0.0.1
 * @��飺WindGUI��һ���򵥵�Ƕ��ʽGUI�⣬�ṩһЩ���õĻ�ͼ������
 * 		ֻ���ṩ����������
 * @���ߣ�fwindcore (c)2013
 * @Log:
 * 2013/08/09 ��ʼ��д
 *
 */

#include "wdgui.h"
#include "lcd_driver.h"

/******************************************************************************************************
 *��ʼ������
 */
void wdgui_init(void)
{
    lcd_init();
}



/******************************************************************************************************
 * @�ײ��ͼ����
 */
/**
  * @brief  ����
  * @param  X:
  * @retval None
  */
void wd_point(wd_u16 x,wd_u16 y)
{
    lcd_set_point(x,y);
}


/**
  * @brief  ����
  * @param  X:
  * @retval None
  */
void wd_line(wd_u16 x0,wd_u16 y0,wd_u16 x1,wd_u16 y1,WD_COLOR color)
{

}
