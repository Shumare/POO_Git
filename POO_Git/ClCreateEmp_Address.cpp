#include "ClCreateEmp_Address.h"

NS_Comp_Svc::ClCreateEmp_Address::ClCreateEmp_Address(void)
{
	this->oCad = gcnew NS_Comp_Data::Connect();
	this->oMappTB = gcnew NS_Comp_Mappage::StockProc();
}

System::Data::DataSet^ NS_Comp_Svc::ClCreateEmp_Address::CreateEmp_Add(System::String^ dataTableName, System::String^ number, System::String^ TypeWay, System::String^ Way, System::String^ Numres, System::String^ Type, System::String^ Postcode, System::String^ id_country, System::String^ id_city)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;

	int idcountryC = System::Convert::ToInt32(id_country);
	int idcityC = System::Convert::ToInt32(id_city);

	setNumberAdd(System::Convert::ToString(number));
	setTypeWay(System::Convert::ToString(TypeWay));
	setWayAdd(System::Convert::ToString(Way));
	setNumresAdd(System::Convert::ToString(Numres));
	setTypeAdd(System::Convert::ToString(Type));
	setPostcodeAdd(System::Convert::ToString(Postcode));
	setidcountry(idcountryC);
	setidcity(idcityC);

	sql = this->oMappTB->CreateEmpAdd();
	cmd->Parameters->Add("@number_add", System::Data::SqlDbType::NVarChar)->Value = this->number_add;
	cmd->Parameters->Add("@typeway", System::Data::SqlDbType::NVarChar)->Value = this->typeway;
	cmd->Parameters->Add("@way_add", System::Data::SqlDbType::NVarChar)->Value = this->way_add;
	cmd->Parameters->Add("@numres_add", System::Data::SqlDbType::NVarChar)->Value = this->numres_add;
	cmd->Parameters->Add("@type_add", System::Data::SqlDbType::NVarChar)->Value = this->type_add;
	cmd->Parameters->Add("@postcode_add", System::Data::SqlDbType::NVarChar)->Value = this->postcode_add;
	cmd->Parameters->Add("@id_country", System::Data::SqlDbType::NVarChar)->Value = this->id_country;
	cmd->Parameters->Add("@id_city", System::Data::SqlDbType::NVarChar)->Value = this->id_city;

	return this->oCad->getProc(sql, dataTableName, cmd);
}

System::Data::DataSet^ NS_Comp_Svc::ClCreateEmp_Address::UpdateEmp_Add(System::String^ dataTableName, System::String^ id_address, System::String^ number, System::String^ TypeWay, System::String^ Way, System::String^ Numres, System::String^ Type, System::String^ Postcode, System::String^ id_country, System::String^ id_city)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;

	int idaddressC = System::Convert::ToInt32(id_address);
	int idcountryC = System::Convert::ToInt32(id_country);
	int idcityC = System::Convert::ToInt32(id_city);

	setNumberAdd(System::Convert::ToString(number));
	setTypeWay(System::Convert::ToString(TypeWay));
	setWayAdd(System::Convert::ToString(Way));
	setNumresAdd(System::Convert::ToString(Numres));
	setTypeAdd(System::Convert::ToString(Type));
	setPostcodeAdd(System::Convert::ToString(Postcode));
	setidaddress(idaddressC);
	setidcountry(idcountryC);
	setidcity(idcityC);

	sql = this->oMappTB->UpdateEmpAdd();
	cmd->Parameters->Add("@id_address", System::Data::SqlDbType::NVarChar)->Value = this->id_address;
	cmd->Parameters->Add("@number_add", System::Data::SqlDbType::NVarChar)->Value = this->number_add;
	cmd->Parameters->Add("@typeway", System::Data::SqlDbType::NVarChar)->Value = this->typeway;
	cmd->Parameters->Add("@way_add", System::Data::SqlDbType::NVarChar)->Value = this->way_add;
	cmd->Parameters->Add("@numres_add", System::Data::SqlDbType::NVarChar)->Value = this->numres_add;
	cmd->Parameters->Add("@type_add", System::Data::SqlDbType::NVarChar)->Value = this->type_add;
	cmd->Parameters->Add("@postcode_add", System::Data::SqlDbType::NVarChar)->Value = this->postcode_add;
	cmd->Parameters->Add("@id_country", System::Data::SqlDbType::NVarChar)->Value = this->id_country;
	cmd->Parameters->Add("@id_city", System::Data::SqlDbType::NVarChar)->Value = this->id_city;

	return this->oCad->getProc(sql, dataTableName, cmd);
}

System::Data::DataSet^ NS_Comp_Svc::ClCreateEmp_Address::ReadEmp_Add(System::String^ dataTableName)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;

	sql = this->oMappTB->ReadEmpAdd();

	return this->oCad->getProc(sql, dataTableName, cmd);
}

System::Data::DataSet^ NS_Comp_Svc::ClCreateEmp_Address::SelectIdCity(System::String^ dataTableName, System::String^ cityname_cit)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;

	SetCityNameCit(System::Convert::ToString(cityname_cit));

	sql = this->oMappTB->SelectIdCity();
	cmd->Parameters->Add("@cityname_cit", System::Data::SqlDbType::NVarChar)->Value = this->cityname_cit;

	return this->oCad->getProc(sql, dataTableName, cmd);
}

System::Data::DataSet^ NS_Comp_Svc::ClCreateEmp_Address::SelectIdCountry(System::String^ dataTableName, System::String^ countryname_cou)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;

	SetCountryNameCou(System::Convert::ToString(countryname_cou));

	sql = this->oMappTB->SelectIdCountry();
	cmd->Parameters->Add("@countryname_cou", System::Data::SqlDbType::NVarChar)->Value = this->countryname_cou;

	return this->oCad->getProc(sql, dataTableName, cmd);
}


void NS_Comp_Svc::ClCreateEmp_Address::setNumberAdd(System::String^ number_add)
{
	this->number_add = number_add;
}
System::String^ NS_Comp_Svc::ClCreateEmp_Address::getNumberAdd(void) { return this->number_add; }

void NS_Comp_Svc::ClCreateEmp_Address::setTypeWay(System::String^ typeway)
{
	this->typeway = typeway;
}
System::String^ NS_Comp_Svc::ClCreateEmp_Address::getTypeWay(void) { return this->typeway; }

void NS_Comp_Svc::ClCreateEmp_Address::setWayAdd(System::String^ way_add)
{
	this->way_add = way_add;
}
System::String^ NS_Comp_Svc::ClCreateEmp_Address::getWayAdd(void) { return this->way_add; }

void NS_Comp_Svc::ClCreateEmp_Address::setNumresAdd(System::String^ numres_add)
{
	this->numres_add = numres_add;
}
System::String^ NS_Comp_Svc::ClCreateEmp_Address::getNumresAdd(void) { return this->numres_add; }

void NS_Comp_Svc::ClCreateEmp_Address::setTypeAdd(System::String^ type_add)
{
	this->type_add = type_add;
}
System::String^ NS_Comp_Svc::ClCreateEmp_Address::getTypeAdd(void) { return this->type_add; }

void NS_Comp_Svc::ClCreateEmp_Address::setPostcodeAdd(System::String^ postcode_add)
{
	this->postcode_add = postcode_add;
}
System::String^ NS_Comp_Svc::ClCreateEmp_Address::getPostcodeAdd(void) { return this->postcode_add; }

void NS_Comp_Svc::ClCreateEmp_Address::SetCityNameCit(System::String^ cityname_cit)
{
	this->cityname_cit = cityname_cit;
}
System::String^ NS_Comp_Svc::ClCreateEmp_Address::getcitynamecit(void) { return this->cityname_cit; }

void NS_Comp_Svc::ClCreateEmp_Address::SetCountryNameCou(System::String^ countryname_cou)
{
	this->countryname_cou = countryname_cou;
}
System::String^ NS_Comp_Svc::ClCreateEmp_Address::getCountryNameCou(void) { return this->countryname_cou; }

void NS_Comp_Svc::ClCreateEmp_Address::setidcountry(int id_country)
{
	this->id_country = id_country;
}
int NS_Comp_Svc::ClCreateEmp_Address::getidcountry(void) { return this->id_country; }

void NS_Comp_Svc::ClCreateEmp_Address::setidcity(int id_city)
{
	this->id_city = id_city;
}
int NS_Comp_Svc::ClCreateEmp_Address::getidcity(void) { return this->id_city; }

void NS_Comp_Svc::ClCreateEmp_Address::setidaddress(int id_address)
{
	this->id_address = id_address;
}
int NS_Comp_Svc::ClCreateEmp_Address::getidaddress(void) { return this->id_address; }
