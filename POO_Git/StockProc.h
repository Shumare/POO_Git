#pragma once

namespace NS_Comp_Mappage
{

	ref class StockProc
	{
	private:
		//System::String^ sSql;
		System::String^ Id;
		System::String^ nom;
		System::String^ prenom;
	public:
		System::String^ SelectAllCommision(void);
		System::String^ NewArticles(void);
		void setId(System::String^);
		void setNom(System::String^);
		void setPrenom(System::String^);
		System::String^ getId(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
	};

}
