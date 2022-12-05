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
