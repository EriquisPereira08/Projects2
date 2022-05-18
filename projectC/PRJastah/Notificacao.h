#ifndef NOTIFICACAO_H
#define NOTIFICACAO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Date.h"
#include "ServidorCentral.h"

class Notificacao
{
private:
	int idNotificacao;

	int hora;

	Date data;

	int idEvento;

	char enviadaSomenteaAmigos;

	ServidorCentral servidorCentral[];
};
#endif
