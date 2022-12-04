#pragma once
#include "Connect.h"
#include "StockProc.h"
namespace NS_Comp_Svc {

	ref class CLstock
	{
	private:

		System::String^ name_art;
		int number_art;
		System::String^ type_art;
		System::String^ reference_art;
		int htprice_art;
		int tva_art;
		int stock_art;
		int replishment_art;
		int id_color;
		int id_articles;
		NS_Comp_Data::Connect^ oCad;
		NS_Comp_Mappage::StockProc^ oMappTB;
	public:
		CLstock(void);
		System::Data::DataSet^ NewArticles(System::String^, System::String^, System::String^, System::String^,System::String^,System::String^,System::String^,System::String^,System::String^,System::String^);
		System::Data::DataSet^ DeleteArticles(System::String^,System::String^);
		System::Data::DataSet^ SelectAllArticles(System::String^);
		System::Data::DataSet^ UpdateArticles(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		//Accesseur
		void setNameArt(System::String^);
		System::String^ getNameArt(void);
		void setNumberArt(int);
		int getNumberArt(void);
		void setTypeArt(System::String^);
		System::String^ getTypeArt(void);
		void setReferenceArt(System::String^);
		System::String^ getReferenceArt(void);
		void setHtPriceArt(int);
		int getHtPriceArt(void);
		void setTvaArt(int);
		int getTvaArt(void);
		void setStockArt(int);
		int getStockArt(void);
		void setReplishmentArt(int);
		int getReplishmentArt(void);
		void setIdColor(int);
		int getIdColor(void);
		void setIdArticles(int);
		int getIdArticles(void);

		
	};
}

