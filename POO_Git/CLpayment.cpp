#include "CLpayment.h"
#include "pch.h"

NS_Comp_Svc::CLpayment::CLpayment(void)
{
	this->oCad = gcnew NS_Comp_Data::Connect();
	this->oMappTB = gcnew NS_Comp_Mappage::StockProc();
}

System::Data::DataSet^ NS_Comp_Svc::CLpayment::NewPayment(System::String^ dataTableName, System::String^ datepayment, System::String^ sum, System::String^ typepayment)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;

	//Conversion String^ en leurs valeur de la variable sql
	int sumC = System::Convert::ToInt32(sum);
	
	setDatePayment(System::Convert::ToString(datepayment));
	setSum(sumC);
	setTypePayment(System::Convert::ToString(typepayment));


	sql = this->oMappTB->NewPayment();
	cmd->Parameters->Add("@datepayment_pay", System::Data::SqlDbType::NVarChar)->Value = this->datepayment;
	cmd->Parameters->Add("@sum_pay", System::Data::SqlDbType::Int)->Value = this->sum;
	cmd->Parameters->Add("@typepayment_pay", System::Data::SqlDbType::NVarChar)->Value = this->type;
	


	return this->oCad->getProc(sql, dataTableName, cmd);
}

System::Data::DataSet^ NS_Comp_Svc::CLpayment::DeletePayment(System::String^ dataTableName, System::String^ idpayment)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;

	int idpaymentC = System::Convert::ToInt32(idpayment);
	setIdPayment(idpaymentC);

	sql = this->oMappTB->DeletePayment();
	cmd->Parameters->Add("@id_payment", System::Data::SqlDbType::Int)->Value = this->id_payment;
	return this->oCad->getProc(sql, dataTableName, cmd);

}

System::Data::DataSet^ NS_Comp_Svc::CLpayment::SelectAllPayment(System::String^ dataTableName, System::String^ idarticles)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;


	sql = this->oMappTB->SelectAllPayment();

	return this->oCad->getProc(sql, dataTableName, cmd);

}

System::Data::DataSet^ NS_Comp_Svc::CLpayment::UpdatePayment(System::String^ dataTableName, System::String^ idpayment, System::String^ datepayment, System::String^ sum, System::String^ typepayment)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;

	//Conversion String^ en leurs valeur de la variable sql
	

	
	

	int sumC = System::Convert::ToInt32(sum);
	int idpaymentC = System::Convert::ToInt32(idpayment);
	
	setIdPayment(idpaymentC);
	setDatePayment(System::Convert::ToString(datepayment));
	setSum(sumC);
	setTypePayment(System::Convert::ToString(typepayment));


	sql = this->oMappTB->UpdatePayment();
	cmd->Parameters->Add("@id_payment", System::Data::SqlDbType::Int)->Value = this->id_payment;
	cmd->Parameters->Add("@datepayment_pay", System::Data::SqlDbType::NVarChar)->Value = this->datepayment;
	cmd->Parameters->Add("@sum_pay", System::Data::SqlDbType::Int)->Value = this->sum;
	cmd->Parameters->Add("@typepayment_pay", System::Data::SqlDbType::NVarChar)->Value = this->type;


	return this->oCad->getProc(sql, dataTableName, cmd);
}












void NS_Comp_Svc::CLpayment::setIdPayment(int id_payment)
{
	this->id_payment = id_payment;
}
int NS_Comp_Svc::CLpayment::getIdPayment(void) { return this->id_payment; }

void NS_Comp_Svc::CLpayment::setDatePayment(System::String^ datepayment)
{
	this->datepayment = datepayment;
}
System::String^ NS_Comp_Svc::CLpayment::getDatePayment(void) { return this->datepayment; }

void NS_Comp_Svc::CLpayment::setSum(int sum)
{
	this->sum = sum;
}
int NS_Comp_Svc::CLpayment::getSum(void) { return this->sum; }

void NS_Comp_Svc::CLpayment::setTypePayment(System::String^ type)
{
	this->type = type;
}
System::String^ NS_Comp_Svc::CLpayment::getTypePayment(void) { return this->type; }