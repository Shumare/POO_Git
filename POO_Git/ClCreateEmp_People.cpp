#include "ClCreateEmp_People.h"

NS_Comp_Svc::ClCreateEmp_People::ClCreateEmp_People(void)
{
	this->oCad = gcnew NS_Comp_Data::Connect();
	this->oMappTB = gcnew NS_Comp_Mappage::StockProc();
}

System::Data::DataSet^ NS_Comp_Svc::ClCreateEmp_People::CreateEmp_Peo(System::String^ dataTableName, System::String^ firstname, System::String^ lastname)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;

	setfirstnamepeo(System::Convert::ToString(firstname));
	setlastnamepeo(System::Convert::ToString(lastname));

	sql = this->oMappTB->CreateEmpPeo();
	cmd->Parameters->Add("@firstname_peo", System::Data::SqlDbType::NVarChar)->Value = this->firstname_peo;
	cmd->Parameters->Add("@lastname_peo", System::Data::SqlDbType::NVarChar)->Value = this->lastname_peo;

	return this->oCad->getProc(sql, dataTableName, cmd);
}

void NS_Comp_Svc::ClCreateEmp_People::setidpeople(int id_people)
{
	this->id_people = id_people;
}
int NS_Comp_Svc::ClCreateEmp_People::getidpeople(void) { return this->id_people; }

void NS_Comp_Svc::ClCreateEmp_People::setfirstnamepeo(System::String^ firstname_peo)
{
	this->firstname_peo = firstname_peo;
}
System::String^ NS_Comp_Svc::ClCreateEmp_People::getfirstnamepeo(void) { return this->firstname_peo; }

void NS_Comp_Svc::ClCreateEmp_People::setlastnamepeo(System::String^ lastname_peo)
{
	this->lastname_peo = lastname_peo;
}
System::String^ NS_Comp_Svc::ClCreateEmp_People::getlastnamepeo(void) { return this->lastname_peo; }


