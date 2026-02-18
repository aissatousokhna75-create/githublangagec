#include <stdio.h>
int main()
{
    int prixunitaire,quantite;
    float MTH,MTTC,TVA;
    char code[10],libelle[20];
    printf("entrer le code du produit \n");
    scanf("%s", &code);
    printf("entrer le libelle du produit \n");
    scanf("%s", &libelle);
    printf("entrer le prixunitaire du produit \n");
    scanf("%d", &prixunitaire);
    printf("entrer la quantite du produit \n");
    scanf("%d", &quantite);
    TVA=0.18;
    MTH=prixunitaire*quantite;
    MTTC=MTH+(MTH*TVA);
    printf("\ninformations du produit \n");
    printf("code : %s\n",code);
    printf("libelle : %s\n",libelle);
    printf("prixunitaire : %d\n",prixunitaire);
    printf("quantite : %d\n",quantite);
    printf("MTH : %f\n",MTH);
    printf("MTTC : %f\n",MTTC);
    return 0;

}

