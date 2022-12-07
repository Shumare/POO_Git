#include "CLstats.h"

NS_Comp_Svc::CLstats::CLstats(void)
{
	this->oCad = gcnew NS_Comp_Data::Connect();
	this->oMappTB = gcnew NS_Comp_Mappage::StockProc();
}




System::Data::DataSet^ NS_Comp_Svc::CLstats::PanierMoyenApresRemise(System::String^ dataTableName)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;


	sql = this->oMappTB->PanierMoyenApresRemise();
	return this->oCad->getProc(sql, dataTableName, cmd);

}

System::Data::DataSet^ NS_Comp_Svc::CLstats::ChiffreAffaireMois(System::String^ dataTableName, System::String^ mois)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;
	int moisC = System::Convert::ToInt32(mois);

	setMois(moisC);

	cmd->Parameters->Add("@mois", System::Data::SqlDbType::Int)->Value = this->getMois();
	sql = this->oMappTB->ChiffreAffaireMois();
	return this->oCad->getProc(sql, dataTableName, cmd);

}

System::Data::DataSet^ NS_Comp_Svc::CLstats::ArticlesSousStock(System::String^ dataTableName)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;


	sql = this->oMappTB->ArticlesSousStock();
	return this->oCad->getProc(sql, dataTableName, cmd);

}

System::Data::DataSet^ NS_Comp_Svc::CLstats::MontantTotalClient(System::String^ dataTableName, System::String^ num_client)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;

	int numC = System::Convert::ToInt32(num_client);

	setMois(numC);

	cmd->Parameters->Add("@num_client", System::Data::SqlDbType::Int)->Value = this->getNumClient();

	sql = this->oMappTB->MontantTotalClient();
	return this->oCad->getProc(sql, dataTableName, cmd);

}

System::Data::DataSet^ NS_Comp_Svc::CLstats::DixArticlesMoinsVendus(System::String^ dataTableName)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;


	sql = this->oMappTB->DixArticlesMoinsVendus();
	return this->oCad->getProc(sql, dataTableName, cmd);

}

System::Data::DataSet^ NS_Comp_Svc::CLstats::DixArticlesPlusVendus(System::String^ dataTableName)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;


	sql = this->oMappTB->DixArticlesPlusVendus();
	return this->oCad->getProc(sql, dataTableName, cmd);

}

System::Data::DataSet^ NS_Comp_Svc::CLstats::ValeurCommercialeStock(System::String^ dataTableName)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;


	sql = this->oMappTB->ValeurCommercialeStock();
	return this->oCad->getProc(sql, dataTableName, cmd);

}

System::Data::DataSet^ NS_Comp_Svc::CLstats::ValeurAchatStock(System::String^ dataTableName)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;


	sql = this->oMappTB->ValeurAchatStock();
	return this->oCad->getProc(sql, dataTableName, cmd);

}

System::Data::DataSet^ NS_Comp_Svc::CLstats::SimulValCommerciale(System::String^ dataTableName, System::String^ tva, System::String^ marge, System::String^ remise, System::String^ demarque)
{
	System::String^ sql;
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand;
	int tvaC = System::Convert::ToInt32(tva);
	int margeC = System::Convert::ToInt32(marge);
	int remiseC = System::Convert::ToInt32(remise);
	int demarqueC = System::Convert::ToInt32(demarque);

	setTva(tvaC);
	setMarge(margeC);
	setRemise(remiseC);
	setDemarque(demarqueC);

	cmd->Parameters->Add("@tva", System::Data::SqlDbType::Int)->Value = this->getTva();
	cmd->Parameters->Add("@remiseCom", System::Data::SqlDbType::Int)->Value = this->getRemise();
	cmd->Parameters->Add("@margeCom", System::Data::SqlDbType::Int)->Value = this->getMarge();
	cmd->Parameters->Add("@demarqueInconnue", System::Data::SqlDbType::Int)->Value = this->getDemarque();


	sql = this->oMappTB->SimulValCommerciale();
	return this->oCad->getProc(sql, dataTableName, cmd);

}












void NS_Comp_Svc::CLstats::setMois(int mois)
{
	this->mois = mois;
}
int NS_Comp_Svc::CLstats::getMois(void) { return this->mois; }

void NS_Comp_Svc::CLstats::setNumClient(int id_people)
{
	this->id_people = id_people;
}
int NS_Comp_Svc::CLstats::getNumClient(void) { return this->id_people; }

void NS_Comp_Svc::CLstats::setTva(int tva)
{
	this->tva = tva;
}
int NS_Comp_Svc::CLstats::getTva(void) { return this->tva; }

void NS_Comp_Svc::CLstats::setMarge(int marge)
{
	this->marge = marge;
}
int NS_Comp_Svc::CLstats::getMarge(void) { return this->marge; }

void NS_Comp_Svc::CLstats::setRemise(int remise)
{
	this->remise = remise;
}
int NS_Comp_Svc::CLstats::getRemise(void) { return this->remise; }

void NS_Comp_Svc::CLstats::setDemarque(int demarche)
{
	this->demarche = demarche;
}
int NS_Comp_Svc::CLstats::getDemarque(void) { return this->demarche; }




