/*
  discoverymanager Project 
  Easy source code and snippet documentation tool
  Copyright (C) 2017 Mustafa Ozcelikors, github.com/mozcelikors, 
  mozcelikors@gmail.com

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "global_defs.h"

/* Treasy includes */

enum FILE_EXTENSION_TYPE { Python, Cpp, C, Bash, Vhdl, Verilog, JavaScript, Makefile, CMake, Matlab, Yaml, Rest, UnixStandard, Html, Css, Php, Json, Java, Lisp, Ini, ObjectiveC, Perl, R, Ruby, Xml};

enum COMMENTARY_STYLE_TYPE { Semicolon, DoubleSemicolon, Percent, Hashtag, ThreeApostrophe, DoubleSlash, HtmlStyle, RubyMultiline  };

std::string findExtensionFromFilename (std::string file_name);

FILE_EXTENSION_TYPE getExtension (std::string extension_str);
