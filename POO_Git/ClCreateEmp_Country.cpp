#include "ClCreateEmp_Country.h"

NS_Comp_Svc::ClCreateEmp_Country::ClCreateEmp_Country(void)
{
	this->oCad = gcnew NS_Comp_Data::Connect();
	this->oMappTB = gcnew NS_Comp_Mappage::StockProc();
}

System::Data::DataSet^ NS_Comp_Svc::ClCreateEmp_Country::CreateEmp_Cou(System::String^ dataTableName)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;
	sql = this->oMappTB->CreateEmpCou();
	return this->oCad->getProc(sql, dataTableName, cmd);
}
