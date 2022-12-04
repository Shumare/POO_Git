#pragma once

namespace NS_Comp_Mappage
{

	ref class StockProc
	{
	public:
		//System::String^ sSql;
		System::String^ Id;
		System::String^ nom;
		System::String^ prenom;
	public:
		System::String^ SelectClient(void);
		void setId(System::String^);
		void setNom(System::String^);
		void setPrenom(System::String^);
		System::String^ getId(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);

		System::String^ SelectEmployees(void);

		System::String^ CreateEmpAdd(void);

		System::String^ CreateEmpCit(void);

		System::String^ CreateEmpCou(void);

		System::String^ CreateEmpEmp(void);

		System::String^ CreateEmpOwn(void);

		System::String^ CreateEmpPeo(void);

		System::String^ CreateEmpUse(void);





	};

}
