
#include <cal_gpio_key.h>


/**********************************************************************
 * 函数名称： KAL_GPIOKkeyInit
 * 功能描述： 内核抽象层的GPIO按键初始化函数, 内核不一样时请修改此函数
 * 输入参数： 无
 * 输出参数： 无
 * 返 回 值： 无
 * 修改日期       版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2021/09/24	     V1.0	  韦东山	      创建
 ***********************************************************************/
void KAL_GPIOKkeyInit(void)
{
	/* 对于裸机: 注册中断 */
	CAL_GPIOKkeyInit();

	/* 对于RTOS: 创建任务 */
}


