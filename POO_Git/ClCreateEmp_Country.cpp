#include "ClCreateEmp_Country.h"

NS_Comp_Svc::ClCreateEmp_Country::ClCreateEmp_Country(void)
{
	this->oCad = gcnew NS_Comp_Data::Connect();
	this->oMappTB = gcnew NS_Comp_Mappage::StockProc();
}

System::Data::DataSet^ NS_Comp_Svc::ClCreateEmp_Country::CreateEmp_Cou(System::String^ dataTableName, System::String^ name)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;

	setNameCou(System::Convert::ToString(name));

	sql = this->oMappTB->CreateEmpCou();
	cmd->Parameters->Add("@countryname_cou", System::Data::SqlDbType::NVarChar)->Value = this->countryname_cou;

	return this->oCad->getProc(sql, dataTableName, cmd);
}

System::Data::DataSet^ NS_Comp_Svc::ClCreateEmp_Country::ReadEmp_Cou(System::String^ dataTableName)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;

	sql = this->oMappTB->ReadEmpCou();

	return this->oCad->getProc(sql, dataTableName, cmd);
}

void NS_Comp_Svc::ClCreateEmp_Country::setidcountry(int id_city)
{
	this->id_country = id_country;
}
int NS_Comp_Svc::ClCreateEmp_Country::getidcountry(void) { return this->id_country; }

void NS_Comp_Svc::ClCreateEmp_Country::setNameCou(System::String^ countryname_cou)
{
	this->countryname_cou = countryname_cou;
}
System::String^ NS_Comp_Svc::ClCreateEmp_Country::getNameCou(void) { return this->countryname_cou; }
