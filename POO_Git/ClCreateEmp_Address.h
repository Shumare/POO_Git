#pragma once
#include "Connect.h"
#include "StockProc.h"

namespace NS_Comp_Svc {
	ref class ClCreateEmp_Address
	{
	private:
		int id_address;
		System::String^ number_add;
		System::String^ typeway;
		System::String^ way_add;
		System::String^ numres_add;
		System::String^ type_add;
		System::String^ postcode_add;
		System::String^ cityname_cit;
		System::String^ countryname_cou;
		int id_country;
		int id_city;
		NS_Comp_Data::Connect^ oCad;
		NS_Comp_Mappage::StockProc^ oMappTB;
	public:
		ClCreateEmp_Address(void);
		System::Data::DataSet^ CreateEmp_Add(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		System::Data::DataSet^ UpdateEmp_Add(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		System::Data::DataSet^ ReadEmp_Add(System::String^);
		System::Data::DataSet^ SelectIdCity(System::String^, System::String^);
		System::Data::DataSet^ SelectIdCountry(System::String^, System::String^);

		void setNumberAdd(System::String^);
		System::String^ getNumberAdd(void);
		void setTypeWay(System::String^);
		System::String^ getTypeWay(void);
		void setWayAdd(System::String^);
		System::String^ getWayAdd(void);
		void setNumresAdd(System::String^);
		System::String^ getNumresAdd(void);
		void setTypeAdd(System::String^);
		System::String^ getTypeAdd(void);
		void setPostcodeAdd(System::String^);
		System::String^ getPostcodeAdd(void);
		void SetCityNameCit(System::String^);
		System::String^ getcitynamecit(void);
		void SetCountryNameCou(System::String^);
		System::String^ getCountryNameCou(void);
		void setidcountry(int);
		int getidcountry(void);
		void setidcity(int);
		int getidcity(void);
		void setidaddress(int);
		int getidaddress(void);
	};
}


