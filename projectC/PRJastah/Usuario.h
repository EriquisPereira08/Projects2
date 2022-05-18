#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "GrupodeAmigos.h"

class Usuario
{
private:
	int idUsuario;

	char nome;

	string cpf;

	char email;

	int idAmigo;

	char listaAmigos;

	GrupodeAmigos grupodeAmigos[];
};
#endif
