/* -*- buffer-read-only: t -*-
   !!!!!!!   DO NOT EDIT THIS FILE   !!!!!!!
   This file is built by regen_perly.pl from perly.y.
   Any changes made here will be lost!
 */

#define PERL_BISON_VERSION  30005

#ifdef PERL_CORE
/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    GRAMPROG = 258,
    GRAMEXPR = 259,
    GRAMBLOCK = 260,
    GRAMBARESTMT = 261,
    GRAMFULLSTMT = 262,
    GRAMSTMTSEQ = 263,
    GRAMSUBSIGNATURE = 264,
    PERLY_AMPERSAND = 265,
    PERLY_BRACE_OPEN = 266,
    PERLY_BRACE_CLOSE = 267,
    PERLY_BRACKET_OPEN = 268,
    PERLY_BRACKET_CLOSE = 269,
    PERLY_COMMA = 270,
    PERLY_DOT = 271,
    PERLY_EQUAL_SIGN = 272,
    PERLY_MINUS = 273,
    PERLY_PLUS = 274,
    PERLY_SEMICOLON = 275,
    PERLY_SNAIL = 276,
    BAREWORD = 277,
    METHOD = 278,
    FUNCMETH = 279,
    THING = 280,
    PMFUNC = 281,
    PRIVATEREF = 282,
    QWLIST = 283,
    FUNC0OP = 284,
    FUNC0SUB = 285,
    UNIOPSUB = 286,
    LSTOPSUB = 287,
    PLUGEXPR = 288,
    PLUGSTMT = 289,
    LABEL = 290,
    FORMAT = 291,
    SUB = 292,
    SIGSUB = 293,
    ANONSUB = 294,
    ANON_SIGSUB = 295,
    PACKAGE = 296,
    USE = 297,
    WHILE = 298,
    UNTIL = 299,
    IF = 300,
    UNLESS = 301,
    ELSE = 302,
    ELSIF = 303,
    CONTINUE = 304,
    FOR = 305,
    GIVEN = 306,
    WHEN = 307,
    DEFAULT = 308,
    LOOPEX = 309,
    DOTDOT = 310,
    YADAYADA = 311,
    FUNC0 = 312,
    FUNC1 = 313,
    FUNC = 314,
    UNIOP = 315,
    LSTOP = 316,
    MULOP = 317,
    ADDOP = 318,
    DOLSHARP = 319,
    DO = 320,
    HASHBRACK = 321,
    NOAMP = 322,
    LOCAL = 323,
    MY = 324,
    REQUIRE = 325,
    COLONATTR = 326,
    FORMLBRACK = 327,
    FORMRBRACK = 328,
    SUBLEXSTART = 329,
    SUBLEXEND = 330,
    PREC_LOW = 331,
    OROP = 332,
    DOROP = 333,
    ANDOP = 334,
    NOTOP = 335,
    ASSIGNOP = 336,
    PERLY_QUESTION_MARK = 337,
    PERLY_COLON = 338,
    OROR = 339,
    DORDOR = 340,
    ANDAND = 341,
    BITOROP = 342,
    BITANDOP = 343,
    CHEQOP = 344,
    NCEQOP = 345,
    CHRELOP = 346,
    NCRELOP = 347,
    SHIFTOP = 348,
    MATCHOP = 349,
    PERLY_EXCLAMATION_MARK = 350,
    PERLY_TILDE = 351,
    UMINUS = 352,
    REFGEN = 353,
    POWOP = 354,
    PREINC = 355,
    PREDEC = 356,
    POSTINC = 357,
    POSTDEC = 358,
    POSTJOIN = 359,
    ARROW = 360
  };
#endif

/* Value type.  */
#ifdef PERL_IN_TOKE_C
static bool
S_is_opval_token(int type) {
    switch (type) {
    case BAREWORD:
    case FUNC0OP:
    case FUNC0SUB:
    case FUNCMETH:
    case LABEL:
    case LSTOPSUB:
    case METHOD:
    case PLUGEXPR:
    case PLUGSTMT:
    case PMFUNC:
    case PRIVATEREF:
    case QWLIST:
    case THING:
    case UNIOPSUB:
	return 1;
    }
    return 0;
}
#endif /* PERL_IN_TOKE_C */
#endif /* PERL_CORE */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{

    I32	ival; /* __DEFAULT__ (marker for regen_perly.pl;
				must always be 1st union member) */
    char *pval;
    OP *opval;
    GV *gvval;


};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (void);


/* Generated from:
 * 6987c13ecfd48ba93b1c8e7ab230ecce7e10a59e60fe854504796b6792e1c2cc perly.y
 * acf1cbfd2545faeaaa58b1cf0cf9d7f98b5be0752eb7a54528ef904a9e2e1ca7 regen_perly.pl
 * ex: set ro: */
