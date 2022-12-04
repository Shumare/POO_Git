#pragma once
#include "Connect.h"
#include "StockProc.h"

namespace NS_Comp_Svc {
	ref class ClCreateEmp_Address
	{
	public:
		NS_Comp_Data::Connect^ oCad;
		NS_Comp_Mappage::StockProc^ oMappTB;
	public:
		ClCreateEmp_Address(void);
		System::Data::DataSet^ CreateEmp_Add(System::String^);
	};
}

