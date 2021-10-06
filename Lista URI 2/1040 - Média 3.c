#include <stdio.h>

int main ()
{
	float n1, n2, n3, n4, nr, media, nova_media;
	
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	
	media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
	
	printf("Media: %.1f\n", media);
	
	if (media >= 7.0)
		printf("Aluno aprovado.\n");
		
		else if (media < 5.0)
			printf("Aluno reprovado.\n");
			
				else if (5.0 <= media && media <= 6.9){
					printf("Aluno em exame.\n");
						scanf("%f", &nr);
							printf("Nota do exame: %.1f\n", nr);
								nova_media = (media + nr) / 2;
								
									if (5.0 <= nova_media)
										printf("Aluno aprovado.\n");
										
											else if (nova_media <= 4.9)
												printf("Aluno reprovado.\n");
				}	
																
	if (5.0 <= media && media <= 6.9)
		printf("Media final: %.1f\n", nova_media);
	
	return 0;
}
