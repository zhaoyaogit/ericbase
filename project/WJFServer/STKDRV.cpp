// STKDRV.cpp: implementation of the CSTKDRV class.
//
//////////////////////////////////////////////////////////////////////

#include "STKDRV.h"
#include <assert.h>
#include <string>

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CSTKDRV::CSTKDRV()
{
	m_pfnStock_Init = NULL;
	m_pfnStock_Quit = NULL;
	m_pfnGetTotalNumber = NULL;
	m_pfnSetupReceiver = NULL;
	m_pfnGetStockDrvInfo = NULL;
	m_hSTKDrv = NULL;

	GetAdress();
}

CSTKDRV::~CSTKDRV()
{
	if( m_hSTKDrv )  
	{
		FreeLibrary(m_hSTKDrv);
		m_hSTKDrv = NULL;
	}
}

void CSTKDRV::GetAdress()
{
	char* fnd_home = getenv("FND_HOME");
	assert(fnd_home != NULL);
	std::string dll_path = std::string(fnd_home) + "/bin/WJF/STOCK.dll";
	WCHAR wszClassName[256];  
	memset(wszClassName,0,sizeof(wszClassName));  
	MultiByteToWideChar(CP_ACP, 0, dll_path.c_str(), dll_path.size() + 1, wszClassName,  
		sizeof(wszClassName)/sizeof(wszClassName[0]));

	m_hSTKDrv = LoadLibrary(wszClassName);
	assert(m_hSTKDrv != NULL);
	m_pfnStock_Init = \
		    (int (WINAPI *)(HWND,UINT,int)) GetProcAddress(m_hSTKDrv,"Stock_Init");
	m_pfnStock_Quit = \
			(int (WINAPI *)(HWND)) GetProcAddress(m_hSTKDrv,"Stock_Quit");
	m_pfnGetTotalNumber = \
			(int (WINAPI *)())GetProcAddress(m_hSTKDrv,"GetTotalNumber");
	m_pfnSetupReceiver = \
			(int	(WINAPI *)(BOOL))GetProcAddress(m_hSTKDrv,"SetupReceiver");
	m_pfnGetStockDrvInfo = \
			(DWORD (WINAPI *)(int,void * ))GetProcAddress(m_hSTKDrv,"GetStockDrvInfo");
}

int CSTKDRV::Stock_Init(HWND hWnd, UINT uMsg, int nWorkMode)
{
	if( !m_pfnStock_Init )
		return -1;
	 return( (*m_pfnStock_Init)(hWnd,uMsg,nWorkMode));
}

int CSTKDRV::Stock_Quit(HWND hWnd)
{
	if( !m_pfnStock_Quit )
		return -1;
	return( (*m_pfnStock_Quit)(hWnd));
}

int CSTKDRV::GetTotalNumber()
{
	if( !m_pfnGetTotalNumber )
		return 0;
	return( (*m_pfnGetTotalNumber)());
}

int CSTKDRV::SetupReceiver(BOOL bSetup)
{
	if( !m_pfnSetupReceiver )
		return -1;
	return( (*m_pfnSetupReceiver)(bSetup));
}

DWORD CSTKDRV::GetStockDrvInfo(int nInfo, void *pBuf)
{
	if( !m_pfnGetStockDrvInfo ) 
		return 0;
	return( (*m_pfnGetStockDrvInfo)(nInfo,pBuf));
}
