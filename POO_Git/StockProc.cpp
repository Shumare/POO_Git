#include "StockProc.h"

System::String^ NS_Comp_Mappage::StockProc::SelectClient(void) {

	return "dbo.SelectAl";
}

void NS_Comp_Mappage::StockProc::setId(System::String^ Id)
{
	this->Id = Id;
}
void NS_Comp_Mappage::StockProc::setNom(System::String^ nom)
{
	this->nom = nom;
}
void NS_Comp_Mappage::StockProc::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}
System::String^ NS_Comp_Mappage::StockProc::getId(void) { return this->Id; }
System::String^ NS_Comp_Mappage::StockProc::getNom(void) { return this->nom; }
System::String^ NS_Comp_Mappage::StockProc::getPrenom(void) { return this->prenom; }

System::String^ NS_Comp_Mappage::StockProc::SelectEmployees(void)
{
	return "dbo.SelectAll";
}

System::String^ NS_Comp_Mappage::StockProc::CreateEmpAdd(void)
{
	return "dbo.CreateEmp_Address";
}

System::String^ NS_Comp_Mappage::StockProc::CreateEmpCit(void)
{
	return "dbo.CreateEmp_City";
}

System::String^ NS_Comp_Mappage::StockProc::CreateEmpCou(void)
{
	return "dbo.CreateEmp_Country";
}

System::String^ NS_Comp_Mappage::StockProc::CreateEmpEmp(void)
{
	return "dbo.CreateEmp_Employee";
}

System::String^ NS_Comp_Mappage::StockProc::CreateEmpOwn(void)
{
	return "dbo.CreateEmp_Own";
}

System::String^ NS_Comp_Mappage::StockProc::CreateEmpPeo(void)
{
	return "dbo.CreateEmp_People";
}

System::String^ NS_Comp_Mappage::StockProc::CreateEmpUse(void)
{
	return "dbo.CreateEmp_Users";

}
