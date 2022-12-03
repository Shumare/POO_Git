#include "CLcommande.h"
#include "pch.h"

NS_Comp_Svc::CLcommande::CLcommande(void)
{
	this->oCad = gcnew NS_Comp_Data::Connect();
	this->oMappTB = gcnew NS_Comp_Mappage::StockProc();
}

System::Data::DataSet^ NS_Comp_Svc::CLcommande::SelectTout(System::String^ dataTableName)
{

	System::String^ sql;
	sql = this->oMappTB->SelectAllCommision();
	return this->oCad->getProc(sql, dataTableName);
}


