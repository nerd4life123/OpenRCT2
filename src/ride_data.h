/*****************************************************************************
 * Copyright (c) 2014 Kevin Burke
 * OpenRCT2, an open source clone of Roller Coaster Tycoon 2.
 *
 * This file is part of OpenRCT2.
 *
 * OpenRCT2 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *****************************************************************************/

#ifndef _RIDE_DATA_H_
#define _RIDE_DATA_H_

#include <stdbool.h>
#include "rct2.h"

extern const bool hasRunningTrack[0x60];
extern const uint8 initialUpkeepCosts[0x60];
extern const uint8 costPerTrackPiece[0x60];

extern const uint8 rideUnknownData1[0x60];
extern const bool rideUnknownData2[0x60];
extern const uint8 rideUnknownData3[0x60];

#endif