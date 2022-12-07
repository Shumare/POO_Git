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
System::String^ NS_Comp_Mappage::StockProc::ReadEmpAdd(void)
{
	return "dbo.ReadEmp_Address";
}
System::String^ NS_Comp_Mappage::StockProc::UpdateEmpAdd(void)
{
	return "dbo.UpdateAddress";
}

System::String^ NS_Comp_Mappage::StockProc::CreateEmpCit(void)
{
	return "dbo.CreateEmp_City";
}
System::String^ NS_Comp_Mappage::StockProc::ReadEmpCit(void)
{
	return "dbo.ReadEmp_City";
}

System::String^ NS_Comp_Mappage::StockProc::CreateEmpCou(void)
{
	return "dbo.CreateEmp_Country";
}
System::String^ NS_Comp_Mappage::StockProc::ReadEmpCou(void)
{
	return "dbo.ReadEmp_Country";
}

System::String^ NS_Comp_Mappage::StockProc::CreateEmpEmp(void)
{
	return "dbo.CreateEmp_Employee";
}
System::String^ NS_Comp_Mappage::StockProc::UpdateEmpEmp(void)
{
	return "dbo.UpdateEmployee";
}
System::String^ NS_Comp_Mappage::StockProc::DeleteEmpEmp(void)
{
	return "dbo.Delete_Emp";
}

System::String^ NS_Comp_Mappage::StockProc::CreateEmpOwn(void)
{
	return "dbo.CreateEmp_Own";
}

System::String^ NS_Comp_Mappage::StockProc::CreateEmpPeo(void)
{
	return "dbo.CreateEmp_People";
}
System::String^ NS_Comp_Mappage::StockProc::UpdateEmpPeo(void)
{
	return "dbo.UpdateEmp_People";
}

System::String^ NS_Comp_Mappage::StockProc::CreateEmpUse(void)
{
	return "dbo.CreateEmp_Users";
}
System::String^ NS_Comp_Mappage::StockProc::UpdateEmpUse(void)
{
	return "dbo.UpdateUser";
}

System::String^ NS_Comp_Mappage::StockProc::SelectAllCommision(void) {

	return "dbo.SelectAllCommision";
}

System::String^ NS_Comp_Mappage::StockProc::NewArticles(void) {

	return "dbo.NewArticles";
}

System::String^ NS_Comp_Mappage::StockProc::DeleteArticles(void) {

	return "dbo.DeleteArticles";
}

System::String^ NS_Comp_Mappage::StockProc::SelectAllArticles(void) {

	return "dbo.SelectAllArticles";
}

System::String^ NS_Comp_Mappage::StockProc::UpdateArticles(void) {

	return "dbo.UpdateArticles";
}

System::String^ NS_Comp_Mappage::StockProc::SelectIdentifiant(void) {

	return "dbo.SelectIdentifiant";
}

System::String^ NS_Comp_Mappage::StockProc::SelectIdentifiantManager(void) {

	return "dbo.SelectIdentifiantManager";
}

System::String^ NS_Comp_Mappage::StockProc::NewContain(void) {

	return "dbo.NewContain";
}

System::String^ NS_Comp_Mappage::StockProc::NewCommissionEmpty(void) {

	return "dbo.NewCommissionEmpty";

}

System::String^ NS_Comp_Mappage::StockProc::DeleteCommission(void) {

	return "dbo.DeleteCommission";

}

System::String^ NS_Comp_Mappage::StockProc::SelectComInfo(void) {

	return "dbo.SelectComInfo";

}

System::String^ NS_Comp_Mappage::StockProc::SelectComInc(void) {

	return "dbo.SelectComInc";

}

System::String^ NS_Comp_Mappage::StockProc::ComptItems(void) {

	return "dbo.ComptItems";

}

System::String^ NS_Comp_Mappage::StockProc::PriceCommission(void) {

	return "dbo.PriceCommission";

}

System::String^ NS_Comp_Mappage::StockProc::GetDate(void) {

	return "dbo.GetDate";

}

System::String^ NS_Comp_Mappage::StockProc::NewCommission(void) {

	return "dbo.NewCommission";

}
System::String^ NS_Comp_Mappage::StockProc::SelectIdCity(void) {

	return "dbo.SelectIdCity";
}

System::String^ NS_Comp_Mappage::StockProc::SelectIdCountry(void) {

	return "dbo.SelectIdCountry";
}

System::String^ NS_Comp_Mappage::StockProc::CreateEmpCus(void) {

	return "dbo.CreateEmp_Customers";
}

System::String^ NS_Comp_Mappage::StockProc::PanierMoyenApresRemise(void) {

	return "dbo.PanierMoyenApresRemise";
}

System::String^ NS_Comp_Mappage::StockProc::ChiffreAffaireMois(void) {

	return "dbo.ChiffreAffaireMois";
}

System::String^ NS_Comp_Mappage::StockProc::ArticlesSousStock(void) {

	return "dbo.ArticlesSousStock";
}

System::String^ NS_Comp_Mappage::StockProc::MontantTotalClient(void) {

	return "dbo.MontantTotalClient";
}

System::String^ NS_Comp_Mappage::StockProc::DixArticlesMoinsVendus(void) {

	return "dbo.DixArticlesMoinsVendus";
}

System::String^ NS_Comp_Mappage::StockProc::DixArticlesPlusVendus(void) {

	return "dbo.DixArticlesPlusVendus";
}

System::String^ NS_Comp_Mappage::StockProc::ValeurCommercialeStock(void) {

	return "dbo.ValeurCommercialeStock";
}

System::String^ NS_Comp_Mappage::StockProc::ValeurAchatStock(void) {

	return "dbo.ValeurAchatStock";
}

System::String^ NS_Comp_Mappage::StockProc::SimulValCommerciale(void) {

	return "dbo.SimulValCommerciale";
}

System::String^ NS_Comp_Mappage::StockProc::UpdatePayment(void) {

	return "dbo.UpdatePayment";
}

System::String^ NS_Comp_Mappage::StockProc::NewPayment(void) {

	return "dbo.NewPayment";
}

System::String^ NS_Comp_Mappage::StockProc::SelectAllPayment(void) {

	return "dbo.SelectAllPayment";
}

System::String^ NS_Comp_Mappage::StockProc::DeletePayment(void) {

	return "dbo.DeletePayment";
}
System::String^ NS_Comp_Mappage::StockProc::UpdateEmpCus(void) {

	return "dbo.UpdateCustomers";
}
System::String^ NS_Comp_Mappage::StockProc::DeleteEmpCus(void) {

	return "dbo.Delete_Cus";
}
