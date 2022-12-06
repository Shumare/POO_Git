#pragma once
#include "Connect.h"
#include "StockProc.h"
namespace NS_Comp_Svc {

	ref class CLstats
	{
	private:

		
		int mois;
		int id_people;
		int tva;
		int marge;
		int remise;
		int demarche;

		
		NS_Comp_Data::Connect^ oCad;
		NS_Comp_Mappage::StockProc^ oMappTB;
	public:
		CLstats(void);
		System::Data::DataSet^ PanierMoyenApresRemise(System::String^);
		System::Data::DataSet^ ChiffreAffaireMois(System::String^, System::String^);
		System::Data::DataSet^ ArticlesSousStock(System::String^);
		System::Data::DataSet^ MontantTotalClient(System::String^, System::String^);
		System::Data::DataSet^ DixArticlesMoinsVendus(System::String^);
		System::Data::DataSet^ DixArticlesPlusVendus(System::String^);
		System::Data::DataSet^ ValeurCommercialeStock(System::String^);
		System::Data::DataSet^ ValeurAchatStock(System::String^);
		System::Data::DataSet^ SimulValCommerciale(System::String^, System::String^, System::String^, System::String^, System::String^);
		//Accesseur
		
		void setMois(int);
		int getMois(void);
		void setNumClient(int);
		int getNumClient(void);
		void setTva(int);
		int getTva(void);
		void setMarge(int);
		int getMarge(void);
		void setRemise(int);
		int getRemise(void);
		void setDemarque(int);
		int getDemarque(void);
		


	};
}

