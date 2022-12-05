#include "ClCreateEmp_City.h"

NS_Comp_Svc::ClCreateEmp_City::ClCreateEmp_City(void)
{
	this->oCad = gcnew NS_Comp_Data::Connect();
	this->oMappTB = gcnew NS_Comp_Mappage::StockProc();
}

System::Data::DataSet^ NS_Comp_Svc::ClCreateEmp_City::CreateEmp_Cit(System::String^ dataTableName, System::String^ name)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;

	setNameCit(System::Convert::ToString(name));

	sql = this->oMappTB->CreateEmpCit();
	cmd->Parameters->Add("@countryname_cou", System::Data::SqlDbType::NVarChar)->Value = this->cityname_cit;

	return this->oCad->getProc(sql, dataTableName, cmd);
}

System::Data::DataSet^ NS_Comp_Svc::ClCreateEmp_City::ReadEmp_Cit(System::String^ dataTableName)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;

	sql = this->oMappTB->ReadEmpCit();

	return this->oCad->getProc(sql, dataTableName, cmd);
}



void NS_Comp_Svc::ClCreateEmp_City::setidcity(int id_country)
{
	this->id_city = id_country;
}
int NS_Comp_Svc::ClCreateEmp_City::getidcity(void) { return this->id_city; }

void NS_Comp_Svc::ClCreateEmp_City::setNameCit(System::String^ countryname_cou)
{
	this->cityname_cit = countryname_cou;
}
System::String^ NS_Comp_Svc::ClCreateEmp_City::getNameCit(void) { return this->cityname_cit; }
