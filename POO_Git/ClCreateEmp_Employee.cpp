#include "ClCreateEmp_Employee.h"

NS_Comp_Svc::ClCreateEmp_Employee::ClCreateEmp_Employee(void)
{
	this->oCad = gcnew NS_Comp_Data::Connect();
	this->oMappTB = gcnew NS_Comp_Mappage::StockProc();
}

System::Data::DataSet^ NS_Comp_Svc::ClCreateEmp_Employee::CreateEmp_Emp(System::String^ dataTableName, System::String^ idpeople, System::String^ hiredate, System::String^ idmanager)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;

	int idmanagerC = System::Convert::ToInt32(idmanager);
	int idpeopleC = System::Convert::ToInt32(idpeople);

	setHireDateEmp(System::Convert::ToString(hiredate));
	setIdManager(idmanagerC);
	setIdPeople(idpeopleC);
	
	sql = this->oMappTB->CreateEmpEmp();
	cmd->Parameters->Add("@hiredate_emp", System::Data::SqlDbType::NVarChar)->Value = this->hiredate_emp;
	cmd->Parameters->Add("@id_manager", System::Data::SqlDbType::NVarChar)->Value = this->id_manager;
	cmd->Parameters->Add("@id_people", System::Data::SqlDbType::NVarChar)->Value = this->id_people;

	return this->oCad->getProc(sql, dataTableName, cmd);
}

void NS_Comp_Svc::ClCreateEmp_Employee::setIdPeople(int id_people)
{
	this->id_people = id_people;
}
int NS_Comp_Svc::ClCreateEmp_Employee::getIdPeople(void) { return this->id_people; }

void NS_Comp_Svc::ClCreateEmp_Employee::setHireDateEmp(System::String^ hiredate_emp)
{
	this->hiredate_emp = hiredate_emp;
}
System::String^ NS_Comp_Svc::ClCreateEmp_Employee::getHireDateEmp(void) { return this->hiredate_emp; }

void NS_Comp_Svc::ClCreateEmp_Employee::setIdManager(int id_manager)
{
	this->id_manager = id_manager;
}
int NS_Comp_Svc::ClCreateEmp_Employee::getIdManager(void) { return this->id_manager; }
