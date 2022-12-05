#include "CLclient.h"
#include "pch.h"

NS_Comp_Svc::CLclient::CLclient(void)
{
	this->oCad = gcnew NS_Comp_Data::Connect();
	this->oMappTB = gcnew NS_Comp_Mappage::StockProc();
}

System::Data::DataSet^ NS_Comp_Svc::CLclient::SelectTout(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappTB->SelectClient();
	return this->oCad->getProc(sql, dataTableName);
}