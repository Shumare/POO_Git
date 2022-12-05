#include "CLcontain.h"
#include "pch.h"

NS_Comp_Svc::CLcontain::CLcontain(void)
{
	this->oCad = gcnew NS_Comp_Data::Connect();
	this->oMappTB = gcnew NS_Comp_Mappage::StockProc();
}


System::Data::DataSet^ NS_Comp_Svc::CLcontain::NewContain(System::String^ dataTableName, System::String^ idarticles, System::String^ idcommission, System::String^ quantite)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;

	int idarticlesC = System::Convert::ToInt32(idarticles);
	int idcommissionC = System::Convert::ToInt32(idcommission);
	int quantiteC = System::Convert::ToInt32(quantite);
	setIdArticles(idarticlesC);
	setIdCommision(idcommissionC);
	setNumberPack(quantiteC);
	cmd->Parameters->Add("@id_articles", System::Data::SqlDbType::Int)->Value = this->id_articles;
	cmd->Parameters->Add("@id_commission", System::Data::SqlDbType::Int)->Value = this->id_commision;
	cmd->Parameters->Add("@numberpack_con", System::Data::SqlDbType::Int)->Value = this->numberpack;

	sql = this->oMappTB->NewContain();

	return this->oCad->getProc(sql, dataTableName, cmd);

}
/*
System::Data::DataSet^ NS_Comp_Svc::CLcontain::UpdateArticles(System::String^ dataTableName, System::String^ idarticles, System::String^ name, System::String^ number, System::String^ type, System::String^ reference, System::String^ htprice, System::String^ tva, System::String^ stock, System::String^ replishment, System::String^ idcolor)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;

	//Conversion String^ en leurs valeur de la variable sql
	int idarticlesC = System::Convert::ToInt32(idarticles);
	int numberC = System::Convert::ToInt32(number);
	int htC = System::Convert::ToInt32(htprice);
	int tvaC = System::Convert::ToInt32(tva);
	int stockC = System::Convert::ToInt32(stock);
	int replishmentC = System::Convert::ToInt32(replishment);
	int idcolorC = System::Convert::ToInt32(idcolor);

	setIdArticles(idarticlesC);
	setNameArt(System::Convert::ToString(name));
	setNumberArt(numberC);
	setTypeArt(System::Convert::ToString(type));
	setReferenceArt(System::Convert::ToString(reference));
	setHtPriceArt(htC);
	setTvaArt(tvaC);
	setStockArt(stockC);
	setReplishmentArt(replishmentC);
	setIdColor(idcolorC);

	sql = this->oMappTB->UpdateArticles();
	cmd->Parameters->Add("@id_articles", System::Data::SqlDbType::NVarChar)->Value = this->id_articles;
	cmd->Parameters->Add("@name_art", System::Data::SqlDbType::NVarChar)->Value = this->name_art;
	cmd->Parameters->Add("@number_art", System::Data::SqlDbType::Int)->Value = this->number_art;
	cmd->Parameters->Add("@type_art", System::Data::SqlDbType::NVarChar)->Value = this->type_art;
	cmd->Parameters->Add("@reference_art", System::Data::SqlDbType::NVarChar)->Value = this->reference_art;
	cmd->Parameters->Add("@htprice_art", System::Data::SqlDbType::Int)->Value = this->htprice_art;
	cmd->Parameters->Add("@tva_art", System::Data::SqlDbType::Int)->Value = this->tva_art;
	cmd->Parameters->Add("@stock_art", System::Data::SqlDbType::Int)->Value = this->stock_art;
	cmd->Parameters->Add("@replishment_art", System::Data::SqlDbType::Int)->Value = this->replishment_art;
	cmd->Parameters->Add("@id_color", System::Data::SqlDbType::Int)->Value = this->id_color;


	return this->oCad->getProc(sql, dataTableName, cmd);
}
*/





void NS_Comp_Svc::CLcontain::setIdArticles(int id_articles)
{
	this->id_articles = id_articles;
}
int NS_Comp_Svc::CLcontain::getIdArticles(void) { return this->id_articles; }

void NS_Comp_Svc::CLcontain::setIdCommision(int id_Commision)
{
	this->id_commision = id_Commision;
}
int NS_Comp_Svc::CLcontain::getIdCommision(void) { return this->id_commision; }

void NS_Comp_Svc::CLcontain::setNumberPack(int numberpack)
{
	this->numberpack = numberpack;
}
int NS_Comp_Svc::CLcontain::getNumberPack(void) { return this->numberpack; }