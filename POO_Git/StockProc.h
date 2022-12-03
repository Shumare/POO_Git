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
		System::String^ SelectAllCommision(void);
		void setId(System::String^);
		void setNom(System::String^);
		void setPrenom(System::String^);
		System::String^ getId(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
	};

}
