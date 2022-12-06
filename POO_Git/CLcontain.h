#pragma once
#include "Connect.h"
#include "StockProc.h"
namespace NS_Comp_Svc {

	ref class CLcontain
	{
	private:

		
		int id_articles;
		int id_commision;
		int numberpack;
		NS_Comp_Data::Connect^ oCad;
		NS_Comp_Mappage::StockProc^ oMappTB;
	public:
		CLcontain(void);
		System::Data::DataSet^ NewContain(System::String^, System::String^, System::String^, System::String^);
		//Accesseur
		void setIdArticles(int);
		int getIdArticles(void);
		void setIdCommision(int);
		int getIdCommision(void);
		void setNumberPack(int);
		int getNumberPack(void);


	};
}

