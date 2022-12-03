// CAD.H ***
#pragma once

namespace NS_Comp_Data
{
    ref class Connect
    {
    private:
        System::String^ sSql;
        System::String^ sCnx;
        System::Data::SqlClient::SqlConnection^ oCnx;
        System::Data::SqlClient::SqlCommand^ oCmd;
        System::Data::SqlClient::SqlDataAdapter^ oDA;
        System::Data::DataSet^ oDs;
    public:
        Connect(void);
        System::Data::DataSet^ getProc(System::String^, System::String^);
        void LanceProc(System::String^);
    };
}

