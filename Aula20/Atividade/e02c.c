#include <stdio.h>
#include <stdlib.h>

#define LARG 4
#define ALT 4

typedef struct {
    int largura;
    int altura;
    unsigned char** dados;
} GSImage;

void destroiGSImage (GSImage* img){
    int i;

    for (i = 0; i < img->altura; i++)
        free (img->dados [i]);

    free (img->dados);
    free (img);
}

GSImage* criaGSImage (int largura, int altura){
    int i;
    GSImage *img;

    img = (GSImage*) malloc(sizeof(GSImage));

    img->largura = largura;
    img->altura = altura;

    img->dados = (unsigned char**) malloc (altura * sizeof(unsigned char*));

    for (i = 0; i < altura; i++)
        img->dados[i] = (unsigned char*) malloc (largura * sizeof(unsigned char));

    return img;
}

GSImage* reduzPelaMetade (GSImage* img){
    int i, j;
    GSImage *img_nova;

    if (img->largura % 2 || img->altura % 2)
        return NULL;

    img_nova = criaGSImage(img->largura / 2, img->altura / 2);

    for (i = 0; i < img->altura / 2; i++)
        for (j = 0; j < img->largura / 2; j++)
            img_nova->dados[i][j] = (img->dados[i * 2][j * 2] + img->dados[i * 2][1 + j * 2] + img->dados[1 + i * 2][j * 2] + img->dados[1 + i * 2][1 + j * 2]) / 4;

    return img_nova;
}

void calculaMediaGSImage(){
    int i, j;
    float media1 = 0, media2 = 0;
    GSImage *img, *img_nova;

    img = criaGSImage(LARG, ALT);

    for (i = 0; i < ALT; i++)
        for (j = 0; j < LARG; j++)
            img->dados[i][j] = i * j;

    img_nova = reduzPelaMetade(img);

    for (i = 0; i < img->altura; i++)
        for (j = 0; j < img->largura; j++)
            media1 += img->dados[i][j];
    media1 /= (img->altura * img->largura);

    if (img_nova){
        for (i = 0; i < img_nova->altura; i++)
            for (j = 0; j < img_nova->largura; j++)
                media2 += img_nova->dados[i][j];
        media2 /= (img_nova->altura * img_nova->largura);

        printf("m1: %.2f, m2: %.2f\n", media1, media2);
        destroiGSImage(img_nova);
    }

    destroiGSImage(img);
}

int main(){
    calculaMediaGSImage();

    return 0;
}