
#include "player.h"
#include "prova_16.h"
#include "tre.h"


#include "sad_trombone.h"

void delay()
{
	volatile int i;
	for(i=0;i<1000000;i++) ;
}

int main()
{
    
/*
	unsigned char res[prova_16_bin_len + tre_bin_len+1];

	int i;
	for(i = 0; i< tre_bin_len; i++){
        	res[i] = tre_bin[i];
       		// printf("\nCIAO %c", res[i]);
  	  }
    
  	  for(i = tre_bin_len; i< tre_bin_len+prova_16_bin_len; i++){
      		  res[i] = prova_16_bin[i-tre_bin_len];
        	// printf("\nCIAO2 %c", res[i]);
 	   }

	*/
        //ADPCMSound sound2(num_441_bin,num_441_bin_len);
      
	  ADPCMSound sound2(prova_16_bin,prova_16_bin_len);
	Player::instance().play(sound2, -20);
	Player::instance().play(sound2, -20);
	Player::instance().play(sound2, -20);

}
