#include "StdAfx.h"
#include "Tu.h"

CTu::CTu(void)
{
	TYPE_PRIBOR=0;
	ADRESS=0;
	FUNCTION=0;
	REGTU_ON=0;
	REGTU_OFF=0;
	DATATU_ON=1;
	DATATU_OFF=0;
	TU_CLOSER=0;
	//TYPE_INFORMATION=;
	WAIT_RESP_TU=10;	
	IEC_ASDU=0;
	TU_ACT_TRM_ENABLE=0;
	TIMER_SEL_EXEC=10;
	TIMER_ACT_TRM=10;
	ADDRESS_TS=65535;
	TS_ON=1;
	TS_OFF=0;
	ADDRESS_DAMAGE_TU=65535;
	MASKA_DAMAGE_TU=0;
}

CTu::~CTu(void)
{
	TYPE_PRIBOR=0;
	ADRESS=0;
	FUNCTION=0;
	REGTU_ON=0;
	REGTU_OFF=0;
	DATATU_ON=0;
	DATATU_OFF=0;
	TU_CLOSER=0;
	//TYPE_INFORMATION=;
	WAIT_RESP_TU=0;
	IEC_ASDU=0;
	TU_ACT_TRM_ENABLE=0;
	TIMER_SEL_EXEC=0;
	TIMER_ACT_TRM=0;
	ADDRESS_TS=65535;
	TS_ON=1;
	TS_OFF=0;
	ADDRESS_DAMAGE_TU=65535;
	MASKA_DAMAGE_TU=0;
	strCOMMENT=" ";
}