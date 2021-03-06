/*
 *			GPAC - Multimedia Framework C SDK
 *
 *			Copyright (c) Jean Le Feuvre 2000-2005 
 *			Copyright (c) ENST 2008 - 
 *					All rights reserved
 *
 *  This file is part of GPAC 
 *
 *  GPAC is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *   
 *  GPAC is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *   
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA. 
 *
 */

/*this file is only used with Win32&MSVC to export the module interface symbols from each module DLL*/
#include <gpac/setup.h>

#ifdef _WIN32_WCE
#define EXPORT_SYMBOL(a) "/export:"#a
#else
#define EXPORT_SYMBOL(a) "/export:_"#a
#endif

#pragma comment (linker, EXPORT_SYMBOL(QueryInterfaces) )
#pragma comment (linker, EXPORT_SYMBOL(LoadInterface) )
#pragma comment (linker, EXPORT_SYMBOL(ShutdownInterface) )

