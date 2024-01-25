/**
  ******************************************************************************
  * @file		: btn_config.c
  * @author  	: AW		Adrian.Wojcik@put.poznan.pl
  * @version 	: 1.3.0
  * @date    	: Oct 19, 2022
  * @brief   	: Button & switch components configuration file
  *
  ******************************************************************************
  */

/* Private includes ----------------------------------------------------------*/
#include "btn.h"
#include "main.h"

/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Public variables ----------------------------------------------------------*/
BTN_GPIO_Handle_TypeDef husrbtn = BTN_GPIO_INIT_HANDLE(USER_Btn, BTN_PULL_DOWN);
//BTN_GPIO_Handle_TypeDef hbtn1 = BTN_GPIO_INIT_HANDLE(EXT1_Btn, BTN_PULL_UP);
//BTN_GPIO_Handle_TypeDef hbtn2 = BTN_GPIO_INIT_HANDLE(EXT2_Btn, BTN_PULL_UP);

/* Private function prototypes -----------------------------------------------*/

/* Public function prototypes ------------------------------------------------*/

/* Private functions ---------------------------------------------------------*/

/* Public functions ----------------------------------------------------------*/
