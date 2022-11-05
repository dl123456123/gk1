/*
 * dis7SEG.c
 *
 *  Created on: Nov 6, 2022
 *      Author: HP
 */
#include "dis7SEG.h"

void Display7SEG( int counter){
  switch (counter ){
  case 0:
    HAL_GPIO_WritePin(GPIOB , LED_0_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_1_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_2_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_3_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_4_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_5_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_6_Pin , GPIO_PIN_SET);
    break;
  case 1:
    HAL_GPIO_WritePin(GPIOB , LED_0_Pin , GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB , LED_1_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_2_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_3_Pin , GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB , LED_4_Pin , GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB , LED_5_Pin , GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB , LED_6_Pin , GPIO_PIN_SET);
    break;
  case 2:
    HAL_GPIO_WritePin(GPIOB , LED_0_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_1_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_2_Pin , GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB , LED_3_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_4_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_5_Pin , GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB , LED_6_Pin , GPIO_PIN_RESET);
    break;
  case 3:
    HAL_GPIO_WritePin(GPIOB , LED_0_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_1_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_2_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_3_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_4_Pin , GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB , LED_5_Pin , GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB , LED_6_Pin , GPIO_PIN_RESET);
    break;
  case 4:
    HAL_GPIO_WritePin(GPIOB , LED_0_Pin , GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB , LED_1_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_2_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_3_Pin , GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB , LED_4_Pin , GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB , LED_5_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_6_Pin , GPIO_PIN_RESET);
    break;
  case 5:
    HAL_GPIO_WritePin(GPIOB , LED_0_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_1_Pin , GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB , LED_2_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_3_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_4_Pin , GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB , LED_5_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_6_Pin , GPIO_PIN_RESET);
    break;
  case 6:
    HAL_GPIO_WritePin(GPIOB , LED_0_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_1_Pin , GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB , LED_2_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_3_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_4_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_5_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_6_Pin , GPIO_PIN_RESET);
    break;
  case 7:
    HAL_GPIO_WritePin(GPIOB , LED_0_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_1_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_2_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_3_Pin , GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB , LED_4_Pin , GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB , LED_5_Pin , GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB , LED_6_Pin , GPIO_PIN_SET);
    break;
  case 8:
    HAL_GPIO_WritePin(GPIOB , LED_0_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_1_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_2_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_3_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_4_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_5_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_6_Pin , GPIO_PIN_RESET);
    break;
  case 9:
    HAL_GPIO_WritePin(GPIOB , LED_0_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_1_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_2_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_3_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_4_Pin , GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB , LED_5_Pin , GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOB , LED_6_Pin , GPIO_PIN_RESET);
    break;
  }
  }

