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
#include <string>
#include "extension_finder.hpp"

std::string findExtensionFromFilename (std::string file_name)
{
  if (file_name != "Makefile" || file_name != "CMakeLists.txt" || file_name != "interfaces")
    return file_name.substr(file_name.find_last_of(".") + 1);
  else
    return file_name;
}

FILE_EXTENSION_TYPE getExtension (std::string extension_str)
{
  /* Declaration of variable to hold extension type*/
  FILE_EXTENSION_TYPE extension_type;

  /* Check the string and return the extension described in header file*/
  if (extension_str.length() >= 1)
    {
      if (extension_str == "py")
	{
	  extension_type = Python;
	}
      else if (extension_str == "cpp" || extension_str == "hpp")
	{
	  extension_type = Cpp;
	}
      else if (extension_str == "c" || extension_str == "h")
	{
	  extension_type = C;
	}
      else if (extension_str == "bash" || extension_str == "sh")
	{
	  extension_type = Bash;
	}
      else if (extension_str == "vhdl" || extension_str == "vhd")
	{
	  extension_type = Vhdl;
	}
      else if (extension_str == "v")
	{
	  extension_type = Verilog;
	}
      else if (extension_str == "Makefile" || extension_str == "conf" || extension_str == "CMakeLists.txt" || extension_str == "interfaces")
	{
	  extension_type = UnixStandard;
	}
      else
	{
	  extension_type = UnixStandard;
	}
    }
  
  /* Return extension type */
  return extension_type;
}
