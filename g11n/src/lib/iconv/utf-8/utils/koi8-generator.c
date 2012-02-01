/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License (the "License").  
 * You may not use this file except in compliance with the License.
 *
 * You can obtain a copy of the license at src/OPENSOLARIS.LICENSE
 * or http://www.opensolaris.org/os/licensing.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file at src/OPENSOLARIS.LICENSE.
 * If applicable, add the following below this CDDL HEADER, with the
 * fields enclosed by brackets "[]" replaced with your own identifying
 * information: Portions Copyright [yyyy] [name of copyright owner]
 *
 * CDDL HEADER END
 */
#include <stdio.h>

main(int ac, char **av)
{
	/* Following table came from RFC 1489. */
   unsigned short koi8_r_2unicode[128] = {
     0x2500,0x2502,0x250c,0x2510,0x2514,0x2518,0x251c,0x2524,
     0x252c,0x2534,0x253c,0x2580,0x2584,0x2588,0x258c,0x2590,
     0x2591,0x2592,0x2593,0x2320,0x25a0,0x2219,0x221a,0x2248,
     0x2264,0x2265,0x00a0,0x2321,0x00b0,0x00b2,0x00b7,0x00f7,
     0x2550,0x2551,0x2552,0x0451,0x2553,0x2554,0x2555,0x2556,
     0x2557,0x2558,0x2559,0x255a,0x255b,0x255c,0x255d,0x255e,
     0x255f,0x2560,0x2561,0x0401,0x2562,0x2563,0x2564,0x2565,
     0x2566,0x2567,0x2568,0x2569,0x256a,0x256b,0x256c,0x00a9,
     0x044e,0x0430,0x0431,0x0446,0x0434,0x0435,0x0444,0x0433,
     0x0445,0x0438,0x0439,0x043a,0x043b,0x043c,0x043d,0x043e,
     0x043f,0x044f,0x0440,0x0441,0x0442,0x0443,0x0436,0x0432,
     0x044c,0x044b,0x0437,0x0448,0x044d,0x0449,0x0447,0x044a,
     0x042e,0x0410,0x0411,0x0426,0x0414,0x0415,0x0424,0x0413,
     0x0425,0x0418,0x0419,0x041a,0x041b,0x041c,0x041d,0x041e,
     0x041f,0x042f,0x0420,0x0421,0x0422,0x0423,0x0416,0x0412,
     0x042c,0x042b,0x0417,0x0428,0x042d,0x0429,0x0427,0x042a
   };
	int i;

	printf("# KOI8-R to Unicode mapping table.\n\
#\n\
# Generated from the original table of RFC 1489 at around 12/4/1998.\n\
#\n");

	for (i = 0x20; i < 0x7f; i++){
		printf("0x%02X\t0x%04X\n", i, i);
	}
	for (i = 0; i < 0x80; i++) {
		printf("0x%02X\t0x%04X\n", i + 0x80, koi8_r_2unicode[i]);
	}
}
