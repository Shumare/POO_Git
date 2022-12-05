#pragma once
#include "Connect.h"
#include "StockProc.h"

namespace NS_Comp_Svc {
	ref class ClCreateEmp_City
	{
	private:
		int id_city;
		System::String^ cityname_cit;
		NS_Comp_Data::Connect^ oCad;
		NS_Comp_Mappage::StockProc^ oMappTB;
	public:
		ClCreateEmp_City(void);
		System::Data::DataSet^ CreateEmp_Cit(System::String^, System::String^);
		System::Data::DataSet^ ReadEmp_Cit(System::String^);
		void setidcity(int);
		int getidcity(void);
		void setNameCit(System::String^);
		System::String^ getNameCit(void);
	};
}

