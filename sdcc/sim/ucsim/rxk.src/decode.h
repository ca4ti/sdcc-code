/*
 * Simulator of microcontrollers (decode.h)
 *
 * Copyright (C) 2020,20 Drotos Daniel, Talker Bt.
 * 
 * To contact author send email to drdani@mazsola.iit.uni-miskolc.hu
 *
 */

/* This file is part of microcontroller simulator: ucsim.

UCSIM is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

UCSIM is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with UCSIM; see the file COPYING.  If not, write to the Free
Software Foundation, 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA. */
/*@1@*/

#ifndef DECODE_HEADER
#define DECODE_HEADER

#define ALTD		instruction_76
#define IOI		instruction_d3
#define IOE		instruction_db

#define NOP		instruction_00
#define LD_BC_mn	instruction_01
#define LD_DE_mn	instruction_11
#define LD_HL_mn	instruction_21
#define LD_SP_mn	instruction_31
#define INC_BC		instruction_03
#define INC_DE		instruction_13
#define INC_HL		instruction_23
#define INC_SP		instruction_33
#define INC_A		instruction_3c
#define INC_B		instruction_04
#define INC_C		instruction_0c
#define INC_D		instruction_14
#define INC_E		instruction_1c
#define INC_H		instruction_24
#define INC_L		instruction_2c
#define DEC_BC		instruction_0b
#define DEC_DE		instruction_1b
#define DEC_HL		instruction_2b
#define DEC_SP		instruction_3b
#define DEC_A		instruction_3d
#define DEC_B		instruction_05
#define DEC_C		instruction_0d
#define DEC_D		instruction_15
#define DEC_E		instruction_1d
#define DEC_H		instruction_25
#define DEC_L		instruction_2d
#define LD_A_n		instruction_3e
#define LD_B_n		instruction_06
#define LD_C_n		instruction_0e
#define LD_D_n		instruction_16
#define LD_E_n		instruction_1e
#define LD_H_n		instruction_26
#define LD_L_n		instruction_2e
#define RLCA		instruction_07

#endif

/* End of rxk.src/decode.h */
