#include "CLconnection.h"
#include "pch.h"

NS_Comp_Svc::CLconnection::CLconnection(void)
{
	this->oCad = gcnew NS_Comp_Data::Connect();
	this->oMappTB = gcnew NS_Comp_Mappage::StockProc();
}

System::Data::DataSet^ NS_Comp_Svc::CLconnection::SelectIdentifiant(System::String^ dataTableName)
{

	System::String^ sql;

	sql = this->oMappTB->SelectIdentifiant();
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;
	return this->oCad->getProc(sql, dataTableName, cmd);
}

System::Data::DataSet^ NS_Comp_Svc::CLconnection::SelectIdentifiantManager(System::String^ dataTableName,int idpeople)
{

	System::String^ sql;

	sql = this->oMappTB->SelectIdentifiantManager();
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;
	cmd->Parameters->Add("@id_people", System::Data::SqlDbType::NVarChar)->Value = idpeople;
	return this->oCad->getProc(sql, dataTableName, cmd);
}


