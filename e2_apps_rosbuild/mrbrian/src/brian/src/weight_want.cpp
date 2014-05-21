/***************************************************************************
                          weight_want.cpp  -  description
                             -------------------
    begin                : Wed Sep 13 2000
    copyright            : (C) 2000 by Halva Giovanni & Giacomo
    email                : invehalv@airlab.elet.polimi.it
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
//	This module implements the objects used by other object
//	to interface each others.


#include "weight_want.h"




// Class weight_want

weight_want::weight_want()
  : value(0), name(NULL)
{
}

weight_want::weight_want(const weight_want& right)
{
  this->name=(char *) malloc(strlen(right.name)+1);
  strcpy(this->name,right.name);
  this->value=right.value;
}

weight_want::weight_want (const char *aname, float avalue)
{
  name=(char *) malloc(strlen(aname)+1);
  strcpy(name,aname);
  value=avalue;
}


weight_want::~weight_want()
{
  if (name!=NULL) free(name);
}
