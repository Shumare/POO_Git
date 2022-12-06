#pragma once
#include "Connect.h"
#include "StockProc.h"

namespace NS_Comp_Svc {
	ref class ClCreateEmp_Country
	{
	private:
		int id_country;
		System::String^ countryname_cou;
		NS_Comp_Data::Connect^ oCad;
		NS_Comp_Mappage::StockProc^ oMappTB;
	public:
		ClCreateEmp_Country(void);
		System::Data::DataSet^ CreateEmp_Cou(System::String^, System::String^);
		System::Data::DataSet^ ReadEmp_Cou(System::String^);
		void setidcountry(int);
		int getidcountry(void);
		void setNameCou(System::String^);
		System::String^ getNameCou(void);
	};
}