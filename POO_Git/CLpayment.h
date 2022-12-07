#pragma once
#include "Connect.h"
#include "StockProc.h"
namespace NS_Comp_Svc {

	ref class CLpayment
	{
	public:
		int id_payment;
		System::String^ datepayment;
		int sum;
		System::String^ type;
	private:
		NS_Comp_Data::Connect^ oCad;
		NS_Comp_Mappage::StockProc^ oMappTB;
	public:
		CLpayment(void);
		System::Data::DataSet^ NewPayment(System::String^, System::String^, System::String^, System::String^);
		System::Data::DataSet^ UpdatePayment(System::String^, System::String^, System::String^, System::String^, System::String^);
		System::Data::DataSet^ SelectAllPayment(System::String^, System::String^);
		System::Data::DataSet^ DeletePayment(System::String^, System::String^);

		void setIdPayment(int);
		int getIdPayment(void);
		void setDatePayment(System::String^);
		System::String^ getDatePayment(void);
		void setSum(int);
		int getSum(void);
		void setTypePayment(System::String^);
		System::String^ getTypePayment(void);


	};
}

