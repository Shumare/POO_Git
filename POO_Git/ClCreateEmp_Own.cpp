#include "ClCreateEmp_Own.h"

NS_Comp_Svc::ClCreateEmp_Own::ClCreateEmp_Own(void)
{
	this->oCad = gcnew NS_Comp_Data::Connect();
	this->oMappTB = gcnew NS_Comp_Mappage::StockProc();
}

System::Data::DataSet^ NS_Comp_Svc::ClCreateEmp_Own::CreateEmp_Own(System::String^ dataTableName, System::String^ id_people, System::String^ id_address)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;

	int idpeopleC = System::Convert::ToInt32(id_people);
	int idaddressC = System::Convert::ToInt32(id_address);

	setIdPeople(idpeopleC);
	setIdAddress(idaddressC);

	sql = this->oMappTB->CreateEmpOwn();
	cmd->Parameters->Add("@id_people", System::Data::SqlDbType::NVarChar)->Value = this->id_people;
	cmd->Parameters->Add("@id_adresse", System::Data::SqlDbType::NVarChar)->Value = this->id_address;

	return this->oCad->getProc(sql, dataTableName, cmd);
}

void NS_Comp_Svc::ClCreateEmp_Own::setIdPeople(int id_people)
{
	this->id_people = id_people;
}
int NS_Comp_Svc::ClCreateEmp_Own::getIdPeople(void) { return this->id_people; }

void NS_Comp_Svc::ClCreateEmp_Own::setIdAddress(int id_address)
{
	this->id_address = id_address;
}
int NS_Comp_Svc::ClCreateEmp_Own::getIdAddress(void) { return this->id_address; }
