#include "ClCreateEmp_Employee.h"

NS_Comp_Svc::ClCreateEmp_Employee::ClCreateEmp_Employee(void)
{
	this->oCad = gcnew NS_Comp_Data::Connect();
	this->oMappTB = gcnew NS_Comp_Mappage::StockProc();
}

System::Data::DataSet^ NS_Comp_Svc::ClCreateEmp_Employee::CreateEmp_Emp(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappTB->CreateEmpEmp();
	return this->oCad->getProc(sql, dataTableName);
}
