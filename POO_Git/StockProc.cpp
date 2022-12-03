#include "StockProc.h"

System::String^ NS_Comp_Mappage::StockProc::SelectAllCommision(void) {

	return "dbo.SelectAllCommision";
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
