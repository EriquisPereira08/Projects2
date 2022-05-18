#ifndef EVENTOS_H
#define EVENTOS_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Date.h"
#include "ServidorCentral.h"

class Eventos
{
private:
	int idEvento;

	Date data;

	int hora;

	char local;

	char acidentes;

	char buracos;

	char transitoLento;

	ServidorCentral servidorCentral[];
};
#endif
