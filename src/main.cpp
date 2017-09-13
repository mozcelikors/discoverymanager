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
#include <pthread.h>
#include <getopt.h>

#include "discovermanager.hpp"


using namespace std;

int main (int argc, char* argv[])
{
  int c, option_index = 0;

  /* Name of the program */
  const char* program_name = argv[0];
  
  /* Valid long options */
  /* second element is whether option requires an argument or not */
  static struct option long_options[]={
    {"help", 0, NULL, 'h'},
    {"input", 1, NULL, 'i'},
    {"use", 1, NULL, 'u'},
    {"output", 0, NULL, 'o'},
    {NULL, 0, NULL, 0}
  };

  while(1)
    {
      /* getopt_long stores the option index*/
      /* An option that requires argument is followed by colon in short options */
      c = getopt_long (argc, argv, "hi:u:o:", long_options, &option_index);

      /* Detect options */
      if (c == -1)
	break;

      switch (c)
	{
	case 0:
	  /* If this option set a flag, do nothing else now */
	  if (long_options[option_index].flag != 0)
	    break;
	  printf ("option %s", long_options[option_index].name);

	  if (optarg)
	    printf(" with arg %s", optarg);
	  printf("\n");
	  break;

	/* Help option */
	case 'h':
	  /* Print help/usage instructions to the stream */
	  print_help (stdout, 0);
	  break;

	/* Output option */
	case 'o':
	  printf("Option -o with value %s\n", optarg);
	  break;

	/* Input option */
	case 'i':
	  printf("Option -i with value %s\n", optarg);
	  break;

	/* Use option */
	case 'u':
	  printf("Option -u with value %s\n", optarg);
	  break;

	case '?':
	  printf("Getopt_long already printed error message\n");
	  break;

	default:
	  fprintf(stderr, "False option.");
	  abort();
	}
    }
  
  run_discoverymanager ();
  
  return 0;
}
