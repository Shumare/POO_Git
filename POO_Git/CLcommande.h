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
		System::String^ reference_com;
		System::String^ delivery_date;
		System::String^ emmissiondate_com;
		int totalitems_com;
		int discounts_com;
		int price_com;
		int id_people;
	public:
		CLcommande(void);
		System::Data::DataSet^ SelectAllCommission(System::String^);
		System::Data::DataSet^ SelectComInfo(System::String^,System::String^);
		System::Data::DataSet^ SelectComInc(System::String^, System::String^);
		System::Data::DataSet^ NewCommissionEmpty(System::String^);
		System::Data::DataSet^ DeleteCommission(System::String^, System::String^);
		System::Data::DataSet^ ComptItems(System::String^, System::String^);
		System::Data::DataSet^ PriceCommission(System::String^, System::String^);
		System::Data::DataSet^ GetDate(System::String^, System::String^);
		System::Data::DataSet^ NewCommission(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);

		void setIdCommission(int);
		int getIdCommission(void);
		void setIdPeople(int);
		int getIdPeople(void);
		void setReference(System::String^);
		System::String^ getReference(void);
		void setDeliveryDate(System::String^);
		System::String^ getDeliveryDate(void);
		void setEmmissionDate(System::String^);
		System::String^ getEmmissionDate(void);
		void setTotalItems(int);
		int getTotalItems(void);
		void setDiscounts(int);
		int getDiscounts(void);
		void setPrice(int);
		int getPrice(void);
	};
}

