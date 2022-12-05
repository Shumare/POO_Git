#include "CLemployees.h"

NS_Comp_Svc::CLemployees::CLemployees(void)
{
	this->oCad = gcnew NS_Comp_Data::Connect();
	this->oMappTB = gcnew NS_Comp_Mappage::StockProc();
}

System::Data::DataSet^ NS_Comp_Svc::CLemployees::SelectTout(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappTB->SelectEmployees();
	return this->oCad->getProc(sql, dataTableName);
}
