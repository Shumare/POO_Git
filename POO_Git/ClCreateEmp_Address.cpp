#include "ClCreateEmp_Address.h"

NS_Comp_Svc::ClCreateEmp_Address::ClCreateEmp_Address(void)
{
	this->oCad = gcnew NS_Comp_Data::Connect();
	this->oMappTB = gcnew NS_Comp_Mappage::StockProc();
}

System::Data::DataSet^ NS_Comp_Svc::ClCreateEmp_Address::CreateEmp_Add(System::String^ dataTableName)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;

	sql = this->oMappTB->CreateEmpAdd();
	return this->oCad->getProc(sql, dataTableName, cmd);
}
