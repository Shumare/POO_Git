#include "ClCreateEmp_Own.h"

NS_Comp_Svc::ClCreateEmp_Own::ClCreateEmp_Own(void)
{
	this->oCad = gcnew NS_Comp_Data::Connect();
	this->oMappTB = gcnew NS_Comp_Mappage::StockProc();
}

System::Data::DataSet^ NS_Comp_Svc::ClCreateEmp_Own::CreateEmp_Own(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappTB->CreateEmpOwn();
	return this->oCad->getProc(sql, dataTableName);
}
