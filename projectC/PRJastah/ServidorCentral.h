#ifndef SERVIDOR_CENTRAL_H
#define SERVIDOR_CENTRAL_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Notificacao.h"
#include "Eventos.h"
#include "ArmazenamentoDados.h"
#include "GrupodeAmigos.h"
#include "Usuario.h"

class ServidorCentral
{
private:
	int idNotificacao;

	int idUsuario;

	int idEvento;

	char notificacoesEnviadas;

	int idAmigos;

	char listaAmigos;

	Notificacao notificacao[];
	Eventos eventos[];
	ArmazenamentoDados armazenamentoDados[];
	GrupodeAmigos grupodeAmigos;
	Usuario usuario[];
};
#endif
