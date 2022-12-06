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
		System::String^ ReadEmpAdd(void);

		System::String^ CreateEmpCit(void);
		System::String^ ReadEmpCit(void);

		System::String^ CreateEmpCou(void);
		System::String^ ReadEmpCou(void);

		System::String^ CreateEmpEmp(void);

		System::String^ CreateEmpOwn(void);

		System::String^ CreateEmpPeo(void);

		System::String^ CreateEmpUse(void);

	
		System::String^ SelectAllCommision(void);
		System::String^ NewArticles(void);
		System::String^ DeleteArticles(void);
		System::String^ SelectAllArticles(void);
		System::String^ UpdateArticles(void);
		System::String^ SelectIdentifiant(void);
		System::String^ SelectIdentifiantManager(void);
		System::String^ NewContain(void);
		System::String^ NewCommissionEmpty(void);
		System::String^ DeleteCommission(void);
		System::String^ SelectComInfo(void);
		System::String^ SelectComInc(void);
		System::String^ ComptItems(void);
		System::String^ PriceCommission(void);
		System::String^ GetDate(void);
		System::String^ NewCommission(void);

		System::String^ SelectIdCity(void);

		System::String^ SelectIdCountry(void);

		System::String^ CreateEmpCus(void);

		System::String^ PanierMoyenApresRemise(void);
		System::String^ ChiffreAffaireMois(void);
		System::String^ ArticlesSousStock(void);
		System::String^ MontantTotalClient(void);
		System::String^ DixArticlesMoinsVendus(void);
		System::String^ DixArticlesPlusVendus(void);
		System::String^ ValeurCommercialeStock(void);
		System::String^ ValeurAchatStock(void);
		System::String^ SimulValCommerciale(void);


		
	};

}
