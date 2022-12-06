#include "ClCreateEmp_Customers.h"

NS_Comp_Svc::ClCreateEmp_Customers::ClCreateEmp_Customers(void)
{
	this->oCad = gcnew NS_Comp_Data::Connect();
	this->oMappTB = gcnew NS_Comp_Mappage::StockProc();
}

System::Data::DataSet^ NS_Comp_Svc::ClCreateEmp_Customers::CreateEmp_Cus(System::String^ dataTableName, System::String^ numbercus, System::String^ birthdatecus, System::String^ datefirstbuycus, System::String^ idpeople)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;

	int numbercusC = System::Convert::ToInt32(numbercus);
	int idpeopleC = System::Convert::ToInt32(idpeople);

	setNumberCus(numbercusC);
	setBirthDateCus(System::Convert::ToString(birthdatecus));
	setDateFirstBuyCus(System::Convert::ToString(datefirstbuycus));
	setIdPeople(idpeopleC);

	sql = this->oMappTB->CreateEmpCus();
	cmd->Parameters->Add("@number_cus", System::Data::SqlDbType::NVarChar)->Value = this->number_cus;
	cmd->Parameters->Add("@birthdate_cus", System::Data::SqlDbType::NVarChar)->Value = this->birthdate_cus;
	cmd->Parameters->Add("@datefirstbuy_cus", System::Data::SqlDbType::NVarChar)->Value = this->datefirstbuy_cus;
	cmd->Parameters->Add("@id_people", System::Data::SqlDbType::NVarChar)->Value = this->id_people;

	return this->oCad->getProc(sql, dataTableName, cmd);
}

void NS_Comp_Svc::ClCreateEmp_Customers::setNumberCus(int number_cus)
{
	this->number_cus = number_cus;
}
int NS_Comp_Svc::ClCreateEmp_Customers::getNumberCus(void) { return this->number_cus; }


void NS_Comp_Svc::ClCreateEmp_Customers::setBirthDateCus(System::String^ birthdate_cus)
{
	this->birthdate_cus = birthdate_cus;
}
System::String^ NS_Comp_Svc::ClCreateEmp_Customers::getBirthDateCus(void) { return this->birthdate_cus; }


void NS_Comp_Svc::ClCreateEmp_Customers::setDateFirstBuyCus(System::String^ datefirstbuy_cus)
{
	this->datefirstbuy_cus = datefirstbuy_cus;
}
System::String^ NS_Comp_Svc::ClCreateEmp_Customers::getDateFirstBuyCus(void) { return this->datefirstbuy_cus; }


void NS_Comp_Svc::ClCreateEmp_Customers::setIdPeople(int id_people)
{
	this->id_people = id_people;
}
int NS_Comp_Svc::ClCreateEmp_Customers::getIdPeople(void) { return this->id_people; }

