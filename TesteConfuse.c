/*
 * main.c
 *
 *  Created on: Aug 7, 2013
 *      Author: alex
 */

#include <stdio.h>
#include <stdlib.h>
#include <confuse.h>

int main(void)
{
   int porta;
   char *servidor = NULL;
   float real;
   cfg_t *cfg;
   cfg_opt_t opts[] = {
             CFG_SIMPLE_STR ("server", &servidor),
             CFG_SIMPLE_INT ("port", &porta),
             CFG_SIMPLE_FLOAT ("real", &real),
             CFG_END()
             };
   cfg = cfg_init (opts, 0);
   cfg_parse (cfg, "exemplo.conf");

   printf ("\nServidor: %s \n", servidor);
   printf ("Porta: %d \n", porta);
   printf ("Real: %f \n", real);
   cfg_free(cfg);       /* Libera a memória alocada por cfg_init */
   return 0;
}
