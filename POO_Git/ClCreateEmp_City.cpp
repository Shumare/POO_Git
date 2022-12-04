#include "ClCreateEmp_City.h"

NS_Comp_Svc::ClCreateEmp_City::ClCreateEmp_City(void)
{
	this->oCad = gcnew NS_Comp_Data::Connect();
	this->oMappTB = gcnew NS_Comp_Mappage::StockProc();
}

System::Data::DataSet^ NS_Comp_Svc::ClCreateEmp_City::CreateEmp_Cit(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappTB->CreateEmpCit();
	return this->oCad->getProc(sql, dataTableName);
}
