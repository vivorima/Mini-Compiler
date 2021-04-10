
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mc_integer = 258,
     mc_numeric = 259,
     mc_car = 260,
     mc_logical = 261,
     id_integer = 262,
     id_numeric = 263,
     id = 264,
     car = 265,
     logical = 266,
     mc_for = 267,
     mc_while = 268,
     mc_if = 269,
     mc_elseif = 270,
     mc_else = 271,
     mc_ifelse = 272,
     in = 273,
     mc_comp = 274,
     aff = 275,
     mc_plus = 276,
     mc_moins = 277,
     mc_mul = 278,
     mc_div = 279,
     mc_rest = 280,
     and = 281,
     or = 282,
     parO = 283,
     parF = 284,
     croO = 285,
     croF = 286,
     accO = 287,
     accF = 288,
     space = 289,
     vrg = 290,
     gui = 291,
     pt = 292
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 33 "syn.y"


	int integer;
	float numeric;
	char* string;

   


/* Line 1676 of yacc.c  */
#line 99 "syn.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


