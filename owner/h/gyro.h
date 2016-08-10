#ifndef _GYRO_H
#define _GYRO_H
	#include "stm32f10x.h"
	

	#define fp64 double
	#define fp32  float
		
	struct Gyro_Struct
	{
		int32_t  value;
		int32_t  count;
	};
	
	extern struct Gyro_Struct Gyro_Now;
    extern fp64 Gyro_Angle_Total;
	extern int64_t Gyro_Total;
	extern fp64  Gyro_Convert1;    //正转系数
    extern fp64  Gyro_Convert2;	//反转系数
    extern fp64  Gyro_Convert;
	extern int32_t Gyro_Float;
	extern uint8_t Gyro_Float_Flag1;
	extern uint8_t Gyro_Float_Flag2;
	extern uint8_t Gyro_Float_Flag;
	extern uint8_t Float_State;
    extern uint8_t Gyro_Error_Flag;
	
	void Gyro_Update(void);
	void Gyro_CheckFloat(void);
	void Gyro_Clear(void);
    void Gyro_Init_P(void);
	void Gyro_Init_N(void);
#endif
