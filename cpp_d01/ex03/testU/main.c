#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "drawing.h"
#include "bitmap.h"

int             main(void)
{
  t_bmp_header          header;
    t_bmp_info_header     info;
      unsigned int          *buffer;
        unsigned int          **img;
	  t_point               p = {0,0};
	    size_t                size = 64;
	      int                   d;

  buffer = malloc(size * size * sizeof(*buffer));
    img = malloc(size * sizeof(*img));
      memset(buffer, 0, sizeof(*buffer));
        for (size_t i = 0; i < size; ++i)
	    img[i] = buffer + i * size;

  make_bmp_header(&header, size);
    make_bmp_info_header(&info, size);

  draw_square(img, &p, size, 0x0000FFFF);
    p.x = 10;
      p.y = 10;
        draw_square(img, &p, 22, 0x00FF0000);
	  d = open("square.bmp", O_CREAT | O_TRUNC | O_WRONLY, 0644);
	    write(d, &header, sizeof(header));
	      write(d, &info, sizeof(info));
	        write(d, buffer, size * size * sizeof(*buffer));
		  close(d);
		    return EXIT_SUCCESS;
		    }
		    
