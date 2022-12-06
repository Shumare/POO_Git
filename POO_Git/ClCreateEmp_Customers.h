#pragma once
#include "Connect.h"
#include "StockProc.h"

namespace NS_Comp_Svc {
	ref class ClCreateEmp_Customers
	{
	private:
		int number_cus;
		System::String^ birthdate_cus;
		System::String^ datefirstbuy_cus;
		int id_people;
		NS_Comp_Data::Connect^ oCad;
		NS_Comp_Mappage::StockProc^ oMappTB;
	public:
		ClCreateEmp_Customers(void);
		System::Data::DataSet^ CreateEmp_Cus(System::String^, System::String^, System::String^, System::String^, System::String^);
		System::Data::DataSet^ UpdateEmp_Cus(System::String^, System::String^, System::String^, System::String^, System::String^);

		void setNumberCus(int);
		int getNumberCus(void);
		void setBirthDateCus(System::String^);
		System::String^ getBirthDateCus(void);
		void setDateFirstBuyCus(System::String^);
		System::String^ getDateFirstBuyCus(void);
		void setIdPeople(int);
		int getIdPeople(void);
	};
}

