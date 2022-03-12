/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is Mozilla Communicator client code.
 *
 * The Initial Developer of the Original Code is
 * Netscape Communications Corporation.
 * Portions created by the Initial Developer are Copyright (C) 1998
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */

#include "nsSBCharSetProber.h"

/********* Language model for: Thai *********/

/**
 * Generated by BuildLangModel.py
 * On: 2021-05-25 01:28:11.042121
 **/

/* Character Mapping Table:
 * ILL: illegal character.
 * CTR: control character specific to the charset.
 * RET: carriage/return.
 * SYM: symbol (punctuation) that does not belong to word.
 * NUM: 0 - 9.
 *
 * Other characters are ordered by probabilities
 * (0 is the most common character in the language).
 *
 * Orders are generic to a language. So the codepoint with order X in
 * CHARSET1 maps to the same character as the codepoint with the same
 * order X in CHARSET2 for the same language.
 * As such, it is possible to get missing order. For instance the
 * ligature of 'o' and 'e' exists in ISO-8859-15 but not in ISO-8859-1
 * even though they are both used for French. Same for the euro sign.
 */
static unsigned char Latin11CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 63, 71, 57, 73, 83, 85, 86, 82, 70, 94, 97, 87, 77, 75, 80, /* 4X */
   74,104, 76, 60, 67, 92, 81, 89,103, 99,101,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 36, 78, 49, 53, 38, 61, 64, 51, 39, 96, 79, 48, 55, 41, 40, /* 6X */
   62,102, 44, 47, 45, 50, 69, 84, 98, 58, 95,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,  3, 26,106, 16,107, 91,  5, 22, 52, 23, 30,100, 42, 72, 66, /* AX */
   46, 88, 65, 34, 12, 13, 31, 11, 35,  1, 18, 17, 32, 68, 20, 43, /* BX */
   37,  7,  9,  2, 54, 10,108,  8, 25, 33, 15, 19, 90,  4, 56, 93, /* CX */
   14,SYM,  0, 29,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,ILL,ILL,ILL,SYM, /* DX */
    6, 21, 27, 24, 28,105, 59,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,109, /* EX */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,110,111,ILL,ILL,ILL,ILL, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static unsigned char TIS620CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 63, 71, 57, 73, 83, 85, 86, 82, 70, 94, 97, 87, 77, 75, 80, /* 4X */
   74,104, 76, 60, 67, 92, 81, 89,103, 99,101,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 36, 78, 49, 53, 38, 61, 64, 51, 39, 96, 79, 48, 55, 41, 40, /* 6X */
   62,102, 44, 47, 45, 50, 69, 84, 98, 58, 95,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  ILL,  3, 26,112, 16,113, 91,  5, 22, 52, 23, 30,100, 42, 72, 66, /* AX */
   46, 88, 65, 34, 12, 13, 31, 11, 35,  1, 18, 17, 32, 68, 20, 43, /* BX */
   37,  7,  9,  2, 54, 10,114,  8, 25, 33, 15, 19, 90,  4, 56, 93, /* CX */
   14,SYM,  0, 29,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,ILL,ILL,ILL,SYM, /* DX */
    6, 21, 27, 24, 28,105, 59,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,115, /* EX */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,116,117,ILL,ILL,ILL,ILL, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */


/* Model Table:
 * Total sequences: 2607
 * First 512 sequences: 0.8716354049615351
 * Next 512 sequences (512-1024): 0.0986364422162676
 * Rest: 0.029728152822197262
 * Negative sequences: TODO
 */
static char ThaiLangModel[] =
{
  1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,2,2,
   2,3,3,3,0,2,0,0,0,0,2,2,0,0,1,0,0,0,0,0,1,0,1,0,2,0,0,1,0,0,0,0,
  3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,
   3,0,1,3,0,3,0,0,0,0,1,2,0,0,2,0,0,0,0,0,1,0,1,0,1,0,0,1,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,2,3,3,3,2,3,3,3,2,2,2,2,3,
   2,3,3,1,0,2,0,0,0,0,1,1,0,0,2,0,0,0,0,0,2,0,1,0,1,0,0,0,0,0,0,0,
  3,3,3,3,3,2,3,3,3,2,3,3,3,3,2,3,3,3,2,3,2,3,3,2,3,2,3,2,3,3,3,2,
   2,3,1,1,0,2,0,0,0,0,1,3,0,0,2,0,0,0,0,0,1,0,3,0,1,0,0,1,1,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,2,2,2,3,2,2,2,3,3,2,2,
   2,0,0,2,0,2,0,0,0,0,1,2,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,1,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,2,3,
   3,1,0,2,0,2,0,0,0,0,1,1,0,0,1,0,0,0,0,0,1,0,1,0,1,0,0,1,0,0,0,0,
  0,3,3,3,3,2,0,3,3,3,3,3,3,3,0,3,3,3,3,3,3,1,3,3,0,3,3,0,0,0,3,1,
   2,1,3,2,0,2,0,0,0,0,1,2,0,0,0,0,0,0,0,0,3,0,0,0,2,0,0,0,0,0,0,0,
  3,3,3,3,3,2,3,3,3,2,2,3,3,3,2,3,3,3,2,3,3,3,2,3,3,2,3,3,2,0,1,2,
   2,3,2,1,0,3,0,0,0,0,1,1,0,0,1,0,0,0,0,0,2,0,1,0,1,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,2,3,3,2,3,2,2,2,2,2,3,2,1,2,3,2,2,2,3,3,3,0,2,2,
   1,0,2,0,0,1,0,0,0,0,2,1,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,2,3,3,2,3,3,3,3,2,3,3,3,3,2,3,3,2,3,3,3,1,2,2,
   2,0,1,2,0,2,0,0,0,0,1,1,0,0,1,0,0,0,0,0,1,0,1,0,1,0,0,1,0,0,0,0,
  3,3,2,3,3,3,3,2,3,2,3,3,3,2,3,2,2,2,2,2,2,2,2,3,2,1,2,2,2,2,1,1,
   1,0,0,1,0,1,0,0,0,0,1,3,0,0,1,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,
  3,3,3,1,3,1,2,2,3,3,1,1,3,1,2,2,3,1,2,3,2,1,1,1,1,3,1,1,1,3,1,0,
   1,2,0,3,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,2,3,3,3,3,2,3,1,3,3,2,2,2,2,3,2,2,3,1,3,2,2,3,1,1,
   1,1,0,1,0,2,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1,0,1,0,1,0,0,1,0,0,0,0,
  3,3,3,3,3,2,3,2,3,3,2,2,1,2,3,2,1,2,3,1,1,2,2,2,2,1,2,2,2,3,1,2,
   1,1,1,0,0,2,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,
  1,3,3,3,3,2,3,3,3,3,2,3,3,3,0,3,3,3,3,3,3,3,3,3,2,2,2,3,3,0,2,2,
   2,1,1,2,0,2,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,
  3,3,3,2,3,3,3,3,3,2,2,2,3,3,2,2,1,2,2,3,1,2,1,2,2,1,1,3,2,3,1,3,
   1,0,0,1,0,2,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,
  3,3,3,2,3,2,3,3,3,2,3,2,2,2,1,2,2,2,1,2,1,2,2,1,1,1,1,3,1,3,3,1,
   1,0,3,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,
  3,2,3,3,3,1,2,1,2,2,3,2,2,2,2,2,1,2,1,1,1,2,2,1,2,1,1,2,2,0,2,2,
   0,1,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,
  3,3,3,3,3,1,3,2,3,2,2,3,3,3,1,3,3,3,3,2,2,3,2,2,2,1,2,3,3,1,1,2,
   3,0,0,1,0,2,0,0,0,0,1,1,0,0,1,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,
  3,3,3,2,2,1,0,3,3,2,3,1,1,3,2,1,0,1,1,0,1,0,0,0,0,1,0,0,0,0,0,0,
   0,0,0,0,0,2,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,2,3,1,3,2,2,2,2,3,3,2,1,1,1,2,1,1,3,1,1,2,1,2,2,2,2,1,1,1,1,1,
   1,0,1,1,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,3,0,1,0,0,0,0,0,0,0,
  0,3,3,3,3,1,0,3,2,2,3,3,2,3,0,3,3,3,3,3,3,0,2,2,0,0,2,0,0,0,2,2,
   2,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
  3,3,3,3,3,1,2,2,1,1,2,2,1,2,3,2,1,1,1,1,2,2,3,1,2,0,2,1,2,3,1,1,
   1,1,0,1,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,
  3,3,2,2,3,0,2,2,2,2,1,1,1,1,1,2,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,0,
   0,1,1,1,0,1,0,0,0,0,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,0,2,0,0,0,0,0,0,0,0,2,3,0,1,1,0,2,3,0,0,3,3,0,0,1,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,2,3,2,2,0,2,2,2,2,1,2,1,3,1,2,1,2,2,1,2,2,3,1,2,1,2,1,2,0,1,1,
   1,2,0,1,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,
  3,3,1,1,3,1,1,1,2,2,1,1,1,3,1,1,1,1,2,1,0,1,1,1,1,0,1,1,1,1,1,1,
   1,0,2,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,1,0,3,1,2,3,3,3,3,0,1,3,3,2,1,2,0,2,1,0,1,1,1,0,0,2,1,
   1,0,1,1,0,2,0,0,0,0,1,2,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,
  0,1,3,2,2,1,0,3,3,0,2,3,3,2,0,1,2,3,2,2,1,0,0,1,0,1,3,0,0,0,2,1,
   1,0,0,1,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
  1,3,3,3,2,2,3,2,2,1,3,2,2,1,0,2,3,2,2,3,1,3,2,1,3,1,2,1,2,0,1,1,
   1,0,1,1,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
  3,2,1,1,2,1,2,1,1,1,2,1,1,2,1,1,1,1,1,0,1,1,0,1,0,0,0,2,1,1,1,0,
   1,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,2,1,2,2,1,2,1,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,2,0,1,1,1,0,1,1,
   1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
  1,2,0,1,1,1,0,1,1,2,3,0,1,0,0,1,0,0,1,0,0,0,1,1,0,1,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,1,1,2,1,0,1,1,1,2,1,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,
   1,0,3,0,0,3,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,1,2,1,1,0,1,1,1,1,1,1,1,1,3,2,1,2,1,2,1,1,1,1,1,3,1,1,1,0,0,0,
   1,0,1,1,0,2,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,2,3,1,2,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,
   0,0,1,1,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,1,0,1,2,1,3,0,0,3,3,0,2,3,2,2,1,0,2,0,2,0,1,2,0,0,1,2,0,
  3,1,1,0,1,0,0,1,1,0,0,1,0,1,1,1,2,0,0,0,1,1,0,1,0,0,0,0,0,0,0,0,
   0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,
   0,0,0,0,2,0,2,1,1,3,0,0,3,2,0,3,2,2,1,0,0,2,0,2,0,0,1,0,0,1,2,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,2,0,2,1,3,3,0,0,2,2,0,3,2,3,1,1,0,2,0,2,0,0,1,0,0,2,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,1,0,1,1,2,3,0,0,3,2,0,2,2,2,2,1,0,2,0,2,0,0,1,0,0,3,2,0,
  0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,3,0,2,2,2,1,0,0,0,3,0,2,1,2,1,1,0,3,0,1,0,1,1,0,0,1,1,0,
  3,1,1,1,1,1,2,1,1,1,2,2,1,1,1,1,1,1,1,2,2,2,1,2,2,1,2,1,1,0,1,1,
   1,0,0,1,0,1,0,0,0,0,3,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,
  3,1,2,1,2,1,2,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,1,1,
   1,0,0,0,0,1,0,0,0,0,0,2,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,3,0,3,2,3,2,0,0,1,2,0,2,2,2,2,1,0,2,0,2,0,0,2,0,0,1,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,2,0,3,3,2,1,0,0,2,1,0,2,1,1,2,3,0,0,0,1,0,1,2,0,0,1,1,0,
  3,1,1,2,2,0,1,3,1,1,1,1,1,1,0,2,1,2,3,1,1,1,1,1,1,1,1,1,1,0,1,0,
   1,0,1,2,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,1,1,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,
   0,0,0,0,1,0,2,2,2,0,0,0,1,3,0,2,1,1,1,2,0,1,0,1,0,0,1,0,0,1,1,0,
  0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,2,0,2,2,2,0,0,0,0,2,0,1,2,1,2,0,0,2,0,1,0,0,2,0,0,1,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,2,0,2,2,2,1,0,0,1,2,0,1,1,1,1,2,0,0,0,0,0,1,2,0,0,0,0,0,
  0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,2,0,1,1,1,2,0,0,2,2,0,2,2,1,0,1,0,1,0,2,0,0,1,0,0,1,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,2,0,3,2,2,1,0,0,1,1,0,1,1,1,1,1,0,1,0,1,0,1,1,0,0,0,1,1,
  2,1,1,1,0,0,0,1,1,1,2,0,0,0,1,0,0,0,2,0,2,0,0,0,0,1,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,2,0,2,2,1,1,0,0,1,1,0,1,1,1,1,1,0,1,0,1,0,0,1,0,0,0,1,0,
  0,1,0,1,0,1,0,1,0,0,0,1,2,2,0,0,1,0,1,1,1,0,0,1,0,2,0,0,0,0,0,0,
   0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,2,0,3,2,2,0,0,0,1,0,0,1,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,1,
  2,1,1,1,2,0,1,1,1,1,1,1,1,1,1,1,0,1,1,0,0,1,1,1,1,0,1,1,1,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,1,0,1,1,3,0,0,0,1,0,0,0,1,0,1,2,0,0,0,0,0,1,1,0,1,0,0,1,
  0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,2,0,1,1,1,1,0,0,1,1,0,1,1,1,1,0,0,1,0,1,0,0,0,0,0,0,1,0,
  0,1,0,0,1,0,0,0,1,1,0,0,0,0,0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,1,0,1,1,1,1,0,0,1,2,0,0,1,1,1,1,0,0,0,1,0,1,1,0,1,0,1,2,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,2,0,2,2,2,0,0,0,1,1,0,1,1,0,1,0,0,1,0,0,0,0,1,0,0,1,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,2,0,2,2,2,1,0,0,2,1,0,1,1,0,1,1,0,0,0,1,0,0,0,0,0,0,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,1,1,0,1,0,0,2,1,0,1,1,1,1,1,0,1,0,1,0,1,0,0,1,0,1,1,
};


SequenceModel Latin11_ThaiModel =
{
  Latin11CharToOrderMap,
  ThaiLangModel,
  64,
  (float)0.8716354049615351,
  PR_FALSE,
  "ISO-8859-11"
};

SequenceModel TIS620_ThaiModel =
{
  TIS620CharToOrderMap,
  ThaiLangModel,
  64,
  (float)0.8716354049615351,
  PR_FALSE,
  "TIS-620"
};