#pragma once
#include "Connect.h"
#include "StockProc.h"

namespace NS_Comp_Svc {
	ref class ClCreateEmp_City
	{
	public:
		NS_Comp_Data::Connect^ oCad;
		NS_Comp_Mappage::StockProc^ oMappTB;
	public:
		ClCreateEmp_City(void);
		System::Data::DataSet^ CreateEmp_Cit(System::String^);
	};
}

