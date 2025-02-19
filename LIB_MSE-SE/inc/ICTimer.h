/*
 * Nombre: ICTimer.h
 * Autor: Eduardo L. Blotta
 * Comentarios: Manejo de Entrada de captura de Timer
 */
#include "CommonIO.h"
// ----------------------------------------------------------------------------
// --- Constantes Input Capture ---
#define TIM2_PSC 8	 	// APB1 Prescaler
#define FTIM2	2000000	//FTIM2 = PCLK1/TIM2_PSC=16Mhz/8 = 2Mhz
// ----------------------------------------------------------------------------
void Init_ICTimer(void);
void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *htim);
void TIM2_IRQHandler(void);
void ICTimerHook(uint32_t CapturedValue);
void Error_Handler(void);
// ----------------------------------------------------------------------------
// --- Variables Input Capture ---
TIM_HandleTypeDef TimHandle;
TIM_IC_InitTypeDef sICConfig;
