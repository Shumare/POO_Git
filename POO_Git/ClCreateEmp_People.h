#pragma once
#include "Connect.h"
#include "StockProc.h"

namespace NS_Comp_Svc {
	ref class ClCreateEmp_People
	{
	private:
		int id_people;
		System::String^ firstname_peo;
		System::String^ lastname_peo;
		NS_Comp_Data::Connect^ oCad;
		NS_Comp_Mappage::StockProc^ oMappTB;
	public:
		ClCreateEmp_People(void);
		System::Data::DataSet^ CreateEmp_Peo(System::String^, System::String^, System::String^);
		System::Data::DataSet^ UpdateEmp_Peo(System::String^, System::String^, System::String^, System::String^);

		void setidpeople(int);
		int getidpeople(void);
		void setfirstnamepeo(System::String^);
		System::String^ getfirstnamepeo(void);
		void setlastnamepeo(System::String^);
		System::String^ getlastnamepeo(void);
	};
}