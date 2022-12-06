#pragma once
#include "Connect.h"
#include "StockProc.h"

namespace NS_Comp_Svc {
	ref class ClCreateEmp_Own
	{
	private:
		int id_people;
		int id_address;
		NS_Comp_Data::Connect^ oCad;
		NS_Comp_Mappage::StockProc^ oMappTB;
	public:
		ClCreateEmp_Own(void);
		System::Data::DataSet^ CreateEmp_Own(System::String^, System::String^, System::String^);

		void setIdPeople(int);
		int getIdPeople(void);
		void setIdAddress(int);
		int getIdAddress(void);
	};
}