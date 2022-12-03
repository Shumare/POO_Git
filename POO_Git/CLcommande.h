#pragma once
#include "Connect.h"
#include "StockProc.h"
namespace NS_Comp_Svc {

	ref class CLcommande
	{
	public:
		NS_Comp_Data::Connect^ oCad;
		NS_Comp_Mappage::StockProc^ oMappTB;
	public:
		CLcommande(void);
		System::Data::DataSet^ SelectTout(System::String^);
	};
}

