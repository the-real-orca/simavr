/*
	sim_mega1284.h

	Copyright 2008, 2009 Michel Pollet <buserror@gmail.com>
			  2012 Stephan Veigl <veigl@gmx.net>

 	This file is part of simavr.

	simavr is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	simavr is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with simavr.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __SIM_MEGA1284_H__
#define __SIM_MEGA1284_H__

// ATmega1284 introduces new port names
// need to map PORTxx to Pxx
#define PA0 PORTA0
#define PA1 PORTA1
#define PA2 PORTA2
#define PA3 PORTA3
#define PA4 PORTA4
#define PA5 PORTA5
#define PA6 PORTA6
#define PA7 PORTA7

#define PB0 PORTB0
#define PB1 PORTB1
#define PB2 PORTB2
#define PB3 PORTB3
#define PB4 PORTB4
#define PB5 PORTB5
#define PB6 PORTB6
#define PB7 PORTB7

#define PC0 PORTC0
#define PC1 PORTC1
#define PC2 PORTC2
#define PC3 PORTC3
#define PC4 PORTC4
#define PC5 PORTC5
#define PC6 PORTC6
#define PC7 PORTC7

#define PD0 PORTD0
#define PD1 PORTD1
#define PD2 PORTD2
#define PD3 PORTD3
#define PD4 PORTD4
#define PD5 PORTD5
#define PD6 PORTD6
#define PD7 PORTD7


#include "sim_megax4.h"

#endif /* __SIM_MEGA1284_H__ */
