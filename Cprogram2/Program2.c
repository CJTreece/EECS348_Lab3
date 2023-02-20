/*
 * Program2.c
 *
 *  Created on: Feb 11, 2023
 *      Author: c787t481
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {

	int touchdown2, touchdown1, touchdown, FG, saftey, score;

	do {
		printf("Enter the NFL score: ");
		fflush(stdout);
		scanf("%d", &score);

		for (touchdown2 = 0; touchdown2 <= score / 8; touchdown2++) {
			for (touchdown1 = 0; touchdown1 <= score / 6; touchdown1++) {
				for (touchdown = 0; touchdown <= score / 7; touchdown++) {
					for (FG = 0; FG <= score / 3; FG++) {
						for (saftey = 0; saftey <= score / 2; saftey++) {
							if ((touchdown2 * 8) + (touchdown1 * 7) + (touchdown * 6) + (FG * 3) + (saftey * 2) == score) {
								printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Saftey\n",
										touchdown2, touchdown1, touchdown, FG, saftey);
							}
						}
					}
				}
			}
		}
	} while (score > 1);

	return 0;
}
