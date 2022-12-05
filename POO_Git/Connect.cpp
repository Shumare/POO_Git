#include "Connect.h"
#include "pch.h"

//CAD.CPP**

NS_Comp_Data::Connect::Connect(void)
{
    this->sCnx = "Data Source =PC-PORTABLE-TIM\\MSSQL_TIMEO;Initial Catalog = DB_POO;Persist Security Info = True;User ID = Manager;Password = password";

    this->sSql = "Rien";

    this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
    this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);
    this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();
    this->oDs = gcnew System::Data::DataSet();

}
System::Data::DataSet^ NS_Comp_Data::Connect::getProc(System::String^ sSql, System::String^ sDataTableName, System::Data::SqlClient::SqlCommand^ cmd)
{
    this->oCmd = cmd;
    this->oCmd->Connection = this->oCnx;
    this->oDs->Clear();
    this->sSql = sSql;
    oCmd->CommandType = System::Data::CommandType::StoredProcedure;
    this->oCmd->CommandText = this->sSql;  
    this->oDA->SelectCommand = this->oCmd;
    this->oDA->Fill(this->oDs, sDataTableName);
    return this->oDs;
}
void NS_Comp_Data::Connect::LanceProc(System::String^ sSql)
{

    this->sSql = sSql;
    this->oCmd->CommandText = this->sSql;
    this->oDA->SelectCommand = this->oCmd;
    this->oCnx->Open();
    this->oCmd->ExecuteNonQuery();
    this->oCnx->Close();
}