#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>

enum suit {
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3,
    HG=5,
    HHG=25,
    ghr=3,
    gbf=21,
    dse=32
} card;

int main() 
{
    card = club;
	printf("Size of enum variable = %d bytes", sizeof(card));	
	return 0;
}
