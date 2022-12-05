#include "ClCreateEmp_People.h"

NS_Comp_Svc::ClCreateEmp_People::ClCreateEmp_People(void)
{
	this->oCad = gcnew NS_Comp_Data::Connect();
	this->oMappTB = gcnew NS_Comp_Mappage::StockProc();
}

System::Data::DataSet^ NS_Comp_Svc::ClCreateEmp_People::CreateEmp_Peo(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappTB->CreateEmpPeo();
	return this->oCad->getProc(sql, dataTableName);
}
