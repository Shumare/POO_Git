#pragma once
#include "Connect.h"
#include "StockProc.h"
namespace NS_Comp_Svc {

	ref class CLconnection
	{
	public:
		NS_Comp_Data::Connect^ oCad;
		NS_Comp_Mappage::StockProc^ oMappTB;
	public:
		CLconnection(void);
		System::Data::DataSet^ SelectIdentifiant(System::String^);
		System::Data::DataSet^ SelectIdentifiantManager(System::String^,int);
	};
}

