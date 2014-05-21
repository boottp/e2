/***************************************************************************
                          shape_multimap.cpp  -  description
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
//      Module: shape_multimap
//	This module implements the classes used for
//	fuzzyfication and defuzzyfication of data.



#include "shape_multimap.h"

//## begin shape_multimap
template class multimap< char*,shape*,ltstr >;
//## end shape_multimap
