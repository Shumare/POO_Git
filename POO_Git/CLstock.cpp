#include "CLstock.h"
#include "pch.h"

NS_Comp_Svc::CLstock::CLstock(void)
{
	this->oCad = gcnew NS_Comp_Data::Connect();
	this->oMappTB = gcnew NS_Comp_Mappage::StockProc();
}

System::Data::DataSet^ NS_Comp_Svc::CLstock::NewArticles(System::String^ dataTableName, System::String^ name, System::String^ number, System::String^ type, System::String^ reference, System::String^ htprice, System::String^ tva, System::String^ stock, System::String^ replishment, System::String^ idcolor)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;
	
	//Conversion String^ en leurs valeur de la variable sql
	int numberC = System::Convert::ToInt32(number);
	int htC = System::Convert::ToInt32(htprice);
	int tvaC = System::Convert::ToInt32(tva);
	int stockC = System::Convert::ToInt32(stock);
	int replishmentC =System::Convert::ToInt32(replishment);
	int idcolorC = System::Convert::ToInt32(idcolor);

	
	setNameArt(System::Convert::ToString(name));
	setNumberArt(numberC);
	setTypeArt(System::Convert::ToString(type));
	setReferenceArt(System::Convert::ToString(reference));
	setHtPriceArt(htC);
	setTvaArt(tvaC); 
	setStockArt(stockC);
	setReplishmentArt(replishmentC);
	setIdColor(idcolorC);
	
	sql = this->oMappTB->NewArticles();
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

System::Data::DataSet^ NS_Comp_Svc::CLstock::DeleteArticles(System::String^ dataTableName,System::String^ idarticles)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;
	
	int idarticlesC = System::Convert::ToInt32(idarticles);
	setIdArticles(idarticlesC);

	sql = this->oMappTB->DeleteArticles();
	cmd->Parameters->Add("@id_articles", System::Data::SqlDbType::Int)->Value = this->id_articles;
	return this->oCad->getProc(sql, dataTableName, cmd);

}

System::Data::DataSet^ NS_Comp_Svc::CLstock::SelectAllArticles(System::String^ dataTableName)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;


	sql = this->oMappTB->SelectAllArticles();

	return this->oCad->getProc(sql, dataTableName, cmd);

}















void NS_Comp_Svc::CLstock::setNameArt(System::String^ name_art)
{
	this->name_art = name_art;
}
System::String^ NS_Comp_Svc::CLstock::getNameArt(void) { return this->name_art; }

void NS_Comp_Svc::CLstock::setNumberArt(int number_art)
{
	this->number_art = number_art;
}
int NS_Comp_Svc::CLstock::getNumberArt(void) { return this->number_art; }

void NS_Comp_Svc::CLstock::setTypeArt(System::String^ type_art)
{
	this->type_art = type_art;
}
System::String^ NS_Comp_Svc::CLstock::getTypeArt(void) { return this->type_art; }

void NS_Comp_Svc::CLstock::setReferenceArt(System::String^ reference_art)
{
	this->reference_art = reference_art;
}
System::String^ NS_Comp_Svc::CLstock::getReferenceArt(void) { return this->reference_art; }

void NS_Comp_Svc::CLstock::setHtPriceArt(int htprice_art)
{
	this->htprice_art = htprice_art;
}
int NS_Comp_Svc::CLstock::getHtPriceArt(void) { return this->htprice_art; }

void NS_Comp_Svc::CLstock::setTvaArt(int tva_art)
{
	this->tva_art = tva_art;
}
int NS_Comp_Svc::CLstock::getTvaArt(void) { return this->tva_art; }

void NS_Comp_Svc::CLstock::setStockArt(int stock_art)
{
	this->stock_art = stock_art;
}
int NS_Comp_Svc::CLstock::getStockArt(void) { return this->stock_art; }

void NS_Comp_Svc::CLstock::setReplishmentArt(int replishment_art)
{
	this->replishment_art = replishment_art;
}
int NS_Comp_Svc::CLstock::getReplishmentArt(void) { return this->replishment_art; }

void NS_Comp_Svc::CLstock::setIdColor(int id_color)
{
	this->id_color = id_color;
}
int NS_Comp_Svc::CLstock::getIdColor(void) { return this->id_color; }

void NS_Comp_Svc::CLstock::setIdArticles(int id_articles)
{
	this->id_articles = id_articles;
}
int NS_Comp_Svc::CLstock::getIdArticles(void) { return this->id_articles; }