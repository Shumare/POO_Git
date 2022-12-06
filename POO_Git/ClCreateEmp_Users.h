#pragma once
#include "Connect.h"
#include "StockProc.h"

namespace NS_Comp_Svc {
	ref class ClCreateEmp_Users
	{
	private:
		int id_user;
		System::String^ username_use;
		System::String^ password_use;
		int id_people;
		NS_Comp_Data::Connect^ oCad;
		NS_Comp_Mappage::StockProc^ oMappTB;
	public:
		ClCreateEmp_Users(void);
		System::Data::DataSet^ CreateEmp_Use(System::String^, System::String^, System::String^, System::String^);
		void setIdUser(int);
		int getIdUser(void);
		void setUserNameUse(System::String^);
		System::String^ getUserNameUse(void);
		void setPasswordUse(System::String^);
		System::String^ getPasswordUse(void);
		void setIdPeople(int);
		int getIdPeople(void);
	};
}