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
#include "error.hpp"

/* Proper System Call Error Handling */
/* Save the errno to a variable and then pass it to this function */
/* Normally each system call returns 0 in success, when return val is non zero */
/* one can invoke this function. */
void processSystemCallError(int error_code)
{
  switch (error_code)
    {
    case EPERM: /* Permission denied */
      break;

    case ENOENT: /* No such file or directory */
      break;

    case ESRCH: /* No such process */
      break;

    case EINTR: /* Interrupted system call */
      break;

    case EIO: /* I/O Error */
      break;

    case ENXIO: /* No such device or address */
      break;

    case E2BIG: /* Argument list too long */
      break;

    case ENOEXEC: /* Exec format error */
      break;
      
    case EROFS: /* Read-only file system*/
      break;
    
    case ENAMETOOLONG: /* Name is too long */
      break;

    default: /* Some other error, probably a bug. */
      abort();
      break;
    }
}
