#include "ClCreateEmp_Users.h"

NS_Comp_Svc::ClCreateEmp_Users::ClCreateEmp_Users(void)
{
	this->oCad = gcnew NS_Comp_Data::Connect();
	this->oMappTB = gcnew NS_Comp_Mappage::StockProc();
}

System::Data::DataSet^ NS_Comp_Svc::ClCreateEmp_Users::CreateEmp_Use(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappTB->CreateEmpUse();
	return this->oCad->getProc(sql, dataTableName);
}
