﻿#include "AsioEngine.h"
////////////////////////////////////////////////////////////////////////////////
#include "Server.h"
#include "Thread.h"
////////////////////////////////////////////////////////////////////////////////



namespace serverframe{;
////////////////////////////////////////////////////////////////////////////////
CAsioEngine* CAsioEngine::m_pInstance = nullptr;

CAsioEngine::CAsioEngine()
{
	mTcpServer = nullptr;
	mTcpClient = nullptr;
}


////////////////////////////////////////////////////////////////////////////////
CAsioEngine::~CAsioEngine()
{
	Stop();
}


////////////////////////////////////////////////////////////////////////////////
void CAsioEngine::Init(const char *ip, int port, itstation::ITcpMessageNotify& ptrNotify)
{
	// 客户端
	//mTcpClient = CreateTcpClient(ip, port, &ptrNotify);
	//mTcpClient->StartUp();

	// 服务端
	mTcpServer = itstation::CreateTcpServer(port, &ptrNotify);
	mTcpServer->StartUp();

}


////////////////////////////////////////////////////////////////////////////////
void CAsioEngine::Stop()
{
	// 先删除客户端再删除服务端
	if (mTcpClient != NULL)
	{
		itstation::DeleteTcpClient(mTcpClient);
		mTcpClient = NULL;
	}
	if (mTcpServer != NULL)
	{
		itstation::DeleteTcpServer(mTcpServer);
		mTcpServer = NULL;
	}
}

////////////////////////////////////////////////////////////////////////////////
}// serverframe
