#pragma once
#include "Connect.h"
#include "StockProc.h"

namespace NS_Comp_Svc {
	ref class ClCreateEmp_Employee
	{
	private:
		int id_people;
		System::String^ hiredate_emp;
		int id_manager;
		NS_Comp_Data::Connect^ oCad;
		NS_Comp_Mappage::StockProc^ oMappTB;
	public:
		ClCreateEmp_Employee(void);
		System::Data::DataSet^ CreateEmp_Emp(System::String^, System::String^, System::String^, System::String^);
		System::Data::DataSet^ UpdateEmp_Emp(System::String^, System::String^, System::String^, System::String^);

		void setIdPeople(int);
		int getIdPeople(void);
		void setHireDateEmp(System::String^);
		System::String^ getHireDateEmp(void);
		void setIdManager(int);
		int getIdManager(void);
	};
}