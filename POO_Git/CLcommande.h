#pragma once
#include "Connect.h"
#include "StockProc.h"
namespace NS_Comp_Svc {

	ref class CLcommande
	{
	public:
		NS_Comp_Data::Connect^ oCad;
		NS_Comp_Mappage::StockProc^ oMappTB;
		int id_commission;
		int id_people;
	public:
		CLcommande(void);
		System::Data::DataSet^ SelectAllCommission(System::String^);
		System::Data::DataSet^ SelectComInfo(System::String^,System::String^);
		System::Data::DataSet^ SelectComInc(System::String^, System::String^);
		System::Data::DataSet^ NewCommissionEmpty(System::String^);
		System::Data::DataSet^ DeleteCommission(System::String^, System::String^);

		void setIdCommission(int);
		int getIdCommission(void);
		void setIdPeople(int);
		int getIdPeople(void);
	};
}

