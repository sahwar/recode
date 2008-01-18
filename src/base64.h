/* Conversion of files between different charsets and surfaces.
   Copyright � 1996, 97, 99 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Contributed by Fran�ois Pinard <pinard@iro.umontreal.ca>, 1996.

   The `recode' Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License
   as published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The `recode' Library is distributed in the hope that it will be
   useful, but WITHOUT ANY WARRANTY; without even the implied warranty
   of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the `recode' Library; see the file `COPYING.LIB'.
   If not, write to the Free Software Foundation, Inc., 59 Temple Place -
   Suite 330, Boston, MA 02111-1307, USA.  */

/* Maximum number of characters per MIME line.  */
#define MIME_LINE_LENGTH 76

/* Tables declared in base64.c and also used in utf7.c.  */
extern char base64_value_to_char[64];
extern short base64_char_to_value[128];

/* Macros.  */

#define IS_BASE64(Character) \
  (IS_ASCII (Character) && base64_char_to_value[Character] >= 0)
