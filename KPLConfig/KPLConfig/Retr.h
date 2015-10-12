#pragma once
#include "KPLVersion.h"


struct ManyRetr: public CKPLVersion
{
	int PATH_DIRECT;
	int PLACE_OF_PUT;
	int START_ADRES_OBJECT;
	int START_ADRES_RETR;
	int NUM_MANY_RETR_OBJECT;
	int FLAG_RETR;
	CString strCOMMENT;
	
	ManyRetr()
	{
		PATH_DIRECT=0;
		PLACE_OF_PUT=0;
		START_ADRES_OBJECT=0;
		START_ADRES_RETR=0;
		NUM_MANY_RETR_OBJECT=0;
		FLAG_RETR=5;
		strCOMMENT=" ";
	}
	ManyRetr(const ManyRetr& aManyRetr)
	{
		PATH_DIRECT=aManyRetr.PATH_DIRECT;
		PLACE_OF_PUT=aManyRetr.PLACE_OF_PUT;
		START_ADRES_OBJECT=aManyRetr.START_ADRES_OBJECT;
		START_ADRES_RETR=aManyRetr.START_ADRES_RETR;
		NUM_MANY_RETR_OBJECT=aManyRetr.NUM_MANY_RETR_OBJECT;
		FLAG_RETR=aManyRetr.FLAG_RETR;
		strCOMMENT=aManyRetr.strCOMMENT;
	}
	void operator = (const ManyRetr& aManyRetr)
	{
		PATH_DIRECT=aManyRetr.PATH_DIRECT;
		PLACE_OF_PUT=aManyRetr.PLACE_OF_PUT;
		START_ADRES_OBJECT=aManyRetr.START_ADRES_OBJECT;
		START_ADRES_RETR=aManyRetr.START_ADRES_RETR;
		NUM_MANY_RETR_OBJECT=aManyRetr.NUM_MANY_RETR_OBJECT;
		FLAG_RETR=aManyRetr.FLAG_RETR;
		strCOMMENT=aManyRetr.strCOMMENT;
	}
};

typedef CArray<ManyRetr,ManyRetr> CManyRetrArray;
//ver 14
struct CalcTI: public CKPLVersion
{
	int TYPE;
	int ADDRESS_FROM;
	int POSITION_BYTE;
	int NUMBER_BYTE;
	int NUMBER_DIRECT;//reserve
	int ADDRESS_TOO;
	int DOPKODE_YES_NO;
	int POSITION_BYTE_TOO;
	double CENA_SHKALI;
	double SMESHENIE;
	double MIN_FIZ;
	double MAX_FIZ;
	int MAX_SHKALA_FIZ;
	CString strCOMMENT;

	CalcTI()
	{
		TYPE = 2;
		ADDRESS_FROM = 0;
		POSITION_BYTE = 0;
		NUMBER_BYTE = 1;
		NUMBER_DIRECT = 0;//reserve
		ADDRESS_TOO = 0;
		POSITION_BYTE_TOO = 0;
		DOPKODE_YES_NO = 1;
		CENA_SHKALI = 1.0;
		SMESHENIE = 0.0;
		MIN_FIZ = 0.0;
		MAX_FIZ = 0.0;
		MAX_SHKALA_FIZ = 255;
		strCOMMENT=" ";
	}
	CalcTI(const CalcTI& aCalcTI)
	{
		TYPE=aCalcTI.TYPE;
		ADDRESS_FROM=aCalcTI.ADDRESS_FROM;
		POSITION_BYTE=aCalcTI.POSITION_BYTE;
		NUMBER_BYTE=aCalcTI.NUMBER_BYTE;
		NUMBER_DIRECT=aCalcTI.NUMBER_DIRECT;
		ADDRESS_TOO=aCalcTI.ADDRESS_TOO;
		POSITION_BYTE_TOO=aCalcTI.POSITION_BYTE_TOO;
		DOPKODE_YES_NO=aCalcTI.DOPKODE_YES_NO;
		CENA_SHKALI=aCalcTI.CENA_SHKALI;
		SMESHENIE=aCalcTI.SMESHENIE;
		MIN_FIZ=aCalcTI.MIN_FIZ;
		MAX_FIZ=aCalcTI.MAX_FIZ;
		MAX_SHKALA_FIZ=aCalcTI.MAX_SHKALA_FIZ;
		strCOMMENT=aCalcTI.strCOMMENT;
	}
	void operator = (const CalcTI& aCalcTI)
	{
		TYPE=aCalcTI.TYPE;
		ADDRESS_FROM=aCalcTI.ADDRESS_FROM;
		POSITION_BYTE=aCalcTI.POSITION_BYTE;
		NUMBER_BYTE=aCalcTI.NUMBER_BYTE;
		NUMBER_DIRECT=aCalcTI.NUMBER_DIRECT;
		ADDRESS_TOO=aCalcTI.ADDRESS_TOO;
		POSITION_BYTE_TOO=aCalcTI.POSITION_BYTE_TOO;
		DOPKODE_YES_NO=aCalcTI.DOPKODE_YES_NO;
		CENA_SHKALI=aCalcTI.CENA_SHKALI;
		SMESHENIE=aCalcTI.SMESHENIE;
		MIN_FIZ=aCalcTI.MIN_FIZ;
		MAX_FIZ=aCalcTI.MAX_FIZ;
		MAX_SHKALA_FIZ=aCalcTI.MAX_SHKALA_FIZ;
		strCOMMENT=aCalcTI.strCOMMENT;
	}
};

struct CalcTS: public CKPLVersion
{
	int TYPE;
	int ADDRESS_FROM;
	int POSITION_BYTE;
	int POSITION_BIT;
	int NUMBER_BIT;
	int NUMBER_DIRECT;//reserve
	int ADDRESS_TOO;	
	int POSITION_BYTE_TOO;
	int POSITION_BIT_TOO;
	CString strCOMMENT;

	CalcTS()
	{
		TYPE = 1;
		ADDRESS_FROM = 0;
		POSITION_BYTE = 0;
		POSITION_BIT = 0;
		NUMBER_BIT = 1;
		NUMBER_DIRECT = 0;//reserve
		ADDRESS_TOO = 0;
		POSITION_BYTE_TOO = 0;
		POSITION_BIT_TOO = 1;	
		strCOMMENT=" ";
	}
	CalcTS(const CalcTS& aCalcTS)
	{
		TYPE=aCalcTS.TYPE;
		ADDRESS_FROM=aCalcTS.ADDRESS_FROM;
		POSITION_BYTE=aCalcTS.POSITION_BYTE;
		POSITION_BIT=aCalcTS.POSITION_BIT;
		NUMBER_BIT=aCalcTS.NUMBER_BIT;
		NUMBER_DIRECT=aCalcTS.NUMBER_DIRECT;
		ADDRESS_TOO=aCalcTS.ADDRESS_TOO;
		POSITION_BYTE_TOO=aCalcTS.POSITION_BYTE_TOO;
		POSITION_BIT_TOO=aCalcTS.POSITION_BIT_TOO;		
		strCOMMENT=aCalcTS.strCOMMENT;
	}
	void operator = (const CalcTS& aCalcTS)
	{
		TYPE=aCalcTS.TYPE;
		ADDRESS_FROM=aCalcTS.ADDRESS_FROM;
		POSITION_BYTE=aCalcTS.POSITION_BYTE;
		POSITION_BIT=aCalcTS.POSITION_BIT;
		NUMBER_BIT=aCalcTS.NUMBER_BIT;
		NUMBER_DIRECT=aCalcTS.NUMBER_DIRECT;
		ADDRESS_TOO=aCalcTS.ADDRESS_TOO;
		POSITION_BYTE_TOO=aCalcTS.POSITION_BYTE_TOO;
		POSITION_BIT_TOO=aCalcTS.POSITION_BIT_TOO;		
		strCOMMENT=aCalcTS.strCOMMENT;
	}
};

typedef CArray<CalcTI,CalcTI> CCalcTIArray;
typedef CArray<CalcTS,CalcTS> CCalcTSArray;

class CRetr : public CKPLVersion
{
public:
	CArray<int,int> m_RECIVE_DIRECT;//0-no 5 -yes size = NUM_DIRECT from main_set.ini = NUM_RECIVE_DIRECT	
	int NUM_TRANSMIT_DIRECT;		
	int	NUM_RETR_OBJECT;	

	CManyRetrArray		m_ManyRetrArray;
	//ver 14
	CCalcTIArray		m_CalcTIArray;
	CCalcTSArray		m_CalcTSArray;	

	CRetr(void)
	{
		NUM_RETR_OBJECT=0;
		NUM_TRANSMIT_DIRECT=0;			
		m_RECIVE_DIRECT.SetSize(3);
		m_RECIVE_DIRECT[0]=0;
		m_RECIVE_DIRECT[1]=0;
		m_RECIVE_DIRECT[2]=0;
	}
	~CRetr(void)
	{
		m_ManyRetrArray.RemoveAll();
//		m_SingleRetrArray.RemoveAll();		
		NUM_TRANSMIT_DIRECT=0;		
		NUM_RETR_OBJECT=0;		
		m_RECIVE_DIRECT.SetSize(3);
		m_RECIVE_DIRECT[0]=0;
		m_RECIVE_DIRECT[1]=0;
		m_RECIVE_DIRECT[2]=0;
	}
	CRetr(const CRetr& aRetr)
	{
		NUM_TRANSMIT_DIRECT=aRetr.NUM_TRANSMIT_DIRECT;
		NUM_RETR_OBJECT=aRetr.NUM_RETR_OBJECT;
		m_RECIVE_DIRECT.Copy(aRetr.m_RECIVE_DIRECT);
		m_ManyRetrArray.Copy(aRetr.m_ManyRetrArray);
		m_CalcTIArray.Copy(aRetr.m_CalcTIArray);
	}
	void operator = (const CRetr& aRetr)
	{
		NUM_TRANSMIT_DIRECT=aRetr.NUM_TRANSMIT_DIRECT;
		NUM_RETR_OBJECT=aRetr.NUM_RETR_OBJECT;
		m_RECIVE_DIRECT.Copy(aRetr.m_RECIVE_DIRECT);
		m_ManyRetrArray.Copy(aRetr.m_ManyRetrArray);
		m_CalcTIArray.Copy(aRetr.m_CalcTIArray);
	}

	BOOL SaveToFile(CString strFile);	
	BOOL LoadFromFile(CString strFile);
	BOOL SaveToCalcFile(CString strFile);
	BOOL LoadFromCalcFile(CString strFile);
};
