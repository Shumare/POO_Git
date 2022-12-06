#include "CLcommande.h"
#include "pch.h"

NS_Comp_Svc::CLcommande::CLcommande(void)
{
	this->oCad = gcnew NS_Comp_Data::Connect();
	this->oMappTB = gcnew NS_Comp_Mappage::StockProc();
}

System::Data::DataSet^ NS_Comp_Svc::CLcommande::SelectAllCommission(System::String^ dataTableName)
{

	System::String^ sql;
	
	sql = this->oMappTB->SelectAllCommision();
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;
	return this->oCad->getProc(sql, dataTableName,cmd);
}

System::Data::DataSet^ NS_Comp_Svc::CLcommande::NewCommissionEmpty(System::String^ dataTableName)
{

	System::String^ sql;

	sql = this->oMappTB->NewCommissionEmpty();
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;
	return this->oCad->getProc(sql, dataTableName, cmd);
}

System::Data::DataSet^ NS_Comp_Svc::CLcommande::DeleteCommission(System::String^ dataTableName, System::String^ idcommission)
{

	System::String^ sql;

	sql = this->oMappTB->DeleteCommission();
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;
	int idcommissionC = System::Convert::ToInt32(idcommission);
	setIdCommission(idcommissionC);
	cmd->Parameters->Add("@id_commission", System::Data::SqlDbType::Int)->Value = this->id_commission;
	return this->oCad->getProc(sql, dataTableName, cmd);
}

System::Data::DataSet^ NS_Comp_Svc::CLcommande::SelectComInfo(System::String^ dataTableName,System::String^ idpeople)
{

	System::String^ sql;

	sql = this->oMappTB->SelectComInfo();
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;
	int idpeopleC = System::Convert::ToInt32(idpeople);
	setIdPeople(idpeopleC);
	cmd->Parameters->Add("@id_people", System::Data::SqlDbType::Int)->Value = this->id_people;
	return this->oCad->getProc(sql, dataTableName, cmd);
}

System::Data::DataSet^ NS_Comp_Svc::CLcommande::SelectComInc(System::String^ dataTableName, System::String^ idpeople)
{

	System::String^ sql;

	sql = this->oMappTB->SelectComInc();
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;
	int idpeopleC = System::Convert::ToInt32(idpeople);
	setIdPeople(idpeopleC);
	cmd->Parameters->Add("@id_people", System::Data::SqlDbType::Int)->Value = this->id_people;
	return this->oCad->getProc(sql, dataTableName, cmd);
}

System::Data::DataSet^ NS_Comp_Svc::CLcommande::ComptItems(System::String^ dataTableName, System::String^ idcommission)
{

	System::String^ sql;

	sql = this->oMappTB->ComptItems();
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;
	int idcommissionC = System::Convert::ToInt32(idcommission);
	setIdCommission(idcommissionC);
	cmd->Parameters->Add("@id_commission", System::Data::SqlDbType::Int)->Value = this->id_commission;
	return this->oCad->getProc(sql, dataTableName, cmd);
}

System::Data::DataSet^ NS_Comp_Svc::CLcommande::PriceCommission(System::String^ dataTableName, System::String^ idcommission)
{

	System::String^ sql;

	sql = this->oMappTB->PriceCommission();
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;
	int idcommissionC = System::Convert::ToInt32(idcommission);
	setIdCommission(idcommissionC);
	cmd->Parameters->Add("@id_commission", System::Data::SqlDbType::Int)->Value = this->id_commission;
	return this->oCad->getProc(sql, dataTableName, cmd);
}

System::Data::DataSet^ NS_Comp_Svc::CLcommande::GetDate(System::String^ dataTableName, System::String^ idpeople)
{

	System::String^ sql;

	sql = this->oMappTB->GetDate();
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;
	int idpeopleC = System::Convert::ToInt32(idpeople);
	setIdPeople(idpeopleC);
	cmd->Parameters->Add("@id_people", System::Data::SqlDbType::Int)->Value = this->id_people;
	return this->oCad->getProc(sql, dataTableName, cmd);
}



System::Data::DataSet^ NS_Comp_Svc::CLcommande::NewCommission(System::String^ dataTableName, System::String^ id_commission, System::String^ reference, System::String^ deliverydate, System::String^ emmissiondate, System::String^ totalitems, System::String^ discounts, System::String^ price)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;

	//Conversion String^ en leurs valeur de la variable sql
	int idcommissionC = System::Convert::ToInt32(id_commission);
	int totalitemsC = System::Convert::ToInt32(totalitems);
	int discountsC = System::Convert::ToInt32(discounts);
	int priceC = System::Convert::ToInt32(price);
	

	setIdCommission(idcommissionC);
	setReference(System::Convert::ToString(reference));
	setDeliveryDate(System::Convert::ToString(deliverydate));
	setEmmissionDate(System::Convert::ToString(emmissiondate));
	setTotalItems(totalitemsC);
	setDiscounts(discountsC);
	setPrice(priceC);

	
	cmd->Parameters->Add("@id_commission", System::Data::SqlDbType::Int)->Value = this->id_commission;
	cmd->Parameters->Add("@reference_com", System::Data::SqlDbType::NVarChar)->Value = this->reference_com;
	cmd->Parameters->Add("@deliverydate_com", System::Data::SqlDbType::NVarChar)->Value = this->delivery_date;
	cmd->Parameters->Add("@emmissiondate_com", System::Data::SqlDbType::NVarChar)->Value = this->emmissiondate_com;
	cmd->Parameters->Add("@totalitems_com", System::Data::SqlDbType::Int)->Value = this->totalitems_com;
	cmd->Parameters->Add("@discounts_com", System::Data::SqlDbType::Int)->Value = this->discounts_com;
	cmd->Parameters->Add("@price_com", System::Data::SqlDbType::Int)->Value = this->price_com;


	sql = this->oMappTB->NewCommission();
	return this->oCad->getProc(sql, dataTableName, cmd);
	
}






void NS_Comp_Svc::CLcommande::setIdCommission(int id_commission)
{
	this->id_commission = id_commission;
}
int NS_Comp_Svc::CLcommande::getIdCommission(void) { return this->id_commission; }

void NS_Comp_Svc::CLcommande::setIdPeople(int id_people)
{
	this->id_people = id_people;
}
int NS_Comp_Svc::CLcommande::getIdPeople(void) { return this->id_people; }

void NS_Comp_Svc::CLcommande::setReference(System::String^  reference_com)
{
	this->reference_com = reference_com;
}
System::String^  NS_Comp_Svc::CLcommande::getReference(void) { return this->reference_com; }

void NS_Comp_Svc::CLcommande::setDeliveryDate(System::String^ delivery_date)
{
	this->delivery_date = delivery_date;
}
System::String^ NS_Comp_Svc::CLcommande::getDeliveryDate(void) { return this->delivery_date; }

void NS_Comp_Svc::CLcommande::setEmmissionDate(System::String^ emmissiondate_com)
{
	this->emmissiondate_com = emmissiondate_com;
}
System::String^ NS_Comp_Svc::CLcommande::getEmmissionDate(void) { return this->emmissiondate_com; }

void NS_Comp_Svc::CLcommande::setTotalItems(int totalitems_com)
{
	this->totalitems_com = totalitems_com;
}
int NS_Comp_Svc::CLcommande::getTotalItems(void) { return this->totalitems_com; }

void NS_Comp_Svc::CLcommande::setDiscounts(int discounts_com)
{
	this->discounts_com = discounts_com;
}
int NS_Comp_Svc::CLcommande::getDiscounts(void) { return this->discounts_com; }

void NS_Comp_Svc::CLcommande::setPrice(int price_com)
{
	this->price_com = price_com;
}
int NS_Comp_Svc::CLcommande::getPrice(void) { return this->price_com; }