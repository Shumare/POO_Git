#include "ClCreateEmp_Users.h"

NS_Comp_Svc::ClCreateEmp_Users::ClCreateEmp_Users(void)
{
	this->oCad = gcnew NS_Comp_Data::Connect();
	this->oMappTB = gcnew NS_Comp_Mappage::StockProc();
}

System::Data::DataSet^ NS_Comp_Svc::ClCreateEmp_Users::CreateEmp_Use(System::String^ dataTableName, System::String^ id_people, System::String^ username_use, System::String^ password_use)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;

	int idpeopleC = System::Convert::ToInt32(id_people);

	setUserNameUse(System::Convert::ToString(username_use));
	setPasswordUse(System::Convert::ToString(password_use));
	setIdPeople(idpeopleC);

	sql = this->oMappTB->CreateEmpUse();
	cmd->Parameters->Add("@username_use", System::Data::SqlDbType::NVarChar)->Value = this->username_use;
	cmd->Parameters->Add("@password_use", System::Data::SqlDbType::NVarChar)->Value = this->password_use->GetHashCode();
	cmd->Parameters->Add("@id_people", System::Data::SqlDbType::NVarChar)->Value = this->id_people;

	return this->oCad->getProc(sql, dataTableName, cmd);
}

System::Data::DataSet^ NS_Comp_Svc::ClCreateEmp_Users::UpdateEmp_Use(System::String^ dataTableName, System::String^ id_user, System::String^ id_people, System::String^ username_use, System::String^ password_use)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;

	int idpeopleC = System::Convert::ToInt32(id_people);
	int iduserC = System::Convert::ToInt32(id_user);

	setUserNameUse(System::Convert::ToString(username_use));
	setPasswordUse(System::Convert::ToString(password_use));
	setIdPeople(idpeopleC);
	setIdUser(iduserC);

	sql = this->oMappTB->UpdateEmpUse();
	cmd->Parameters->Add("@username_use", System::Data::SqlDbType::NVarChar)->Value = this->username_use;
	cmd->Parameters->Add("@password_use", System::Data::SqlDbType::NVarChar)->Value = this->password_use;
	cmd->Parameters->Add("@id_people", System::Data::SqlDbType::NVarChar)->Value = this->id_people;
	cmd->Parameters->Add("@id_user", System::Data::SqlDbType::NVarChar)->Value = this->id_user;

	return this->oCad->getProc(sql, dataTableName, cmd);
}

void NS_Comp_Svc::ClCreateEmp_Users::setIdUser(int id_user)
{
	this->id_user = id_user;
}
int NS_Comp_Svc::ClCreateEmp_Users::getIdUser(void) { return this->id_user; }

void NS_Comp_Svc::ClCreateEmp_Users::setUserNameUse(System::String^ username_use)
{
	this->username_use = username_use;
}
System::String^ NS_Comp_Svc::ClCreateEmp_Users::getUserNameUse(void) { return this->username_use; }

void NS_Comp_Svc::ClCreateEmp_Users::setPasswordUse(System::String^ password_use)
{
	this->password_use = password_use;
}
System::String^ NS_Comp_Svc::ClCreateEmp_Users::getPasswordUse(void) { return this->password_use; }

void NS_Comp_Svc::ClCreateEmp_Users::setIdPeople(int id_people)
{
	this->id_people = id_people;
}
int NS_Comp_Svc::ClCreateEmp_Users::getIdPeople(void) { return this->id_people; }
