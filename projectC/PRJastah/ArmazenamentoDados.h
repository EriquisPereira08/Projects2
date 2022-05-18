#ifndef ARMAZENAMENTO_DADOS_H
#define ARMAZENAMENTO_DADOS_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "BancodeDados.h"
#include "ServidorCentral.h"

class ArmazenamentoDados
{
private:
	int idUsuario;

	int idEvento;

	char notificacoesEnviadas;

	char notificacaoEnviadaParaQuaisUsuarios;

	BancodeDados bancodeDados[];
	ServidorCentral servidorCentral[];
};
#endif
