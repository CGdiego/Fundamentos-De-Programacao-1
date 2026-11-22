#include <stdlib.h>

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
    if (img->largura % 2 || img->altura % 2)
        return NULL;

    GSImage *img_nova = criaGSImage(img->largura / 2, img->altura / 2);

    int i, j;

    for (i = 0; i < img->altura / 2; i++)
        for (j = 0; j < img->largura / 2; j++)
            img_nova->dados[i][j] = (img->dados[i * 2][j * 2] + img->dados[i * 2][1 + j * 2] + img->dados[1 + i * 2][j * 2] + img->dados[1 + i * 2][1 + j * 2]) / 4;

    return img_nova;
}

int main(){
    GSImage *img, *img_nova;

    img = criaGSImage(4, 4);
    img_nova = reduzPelaMetade(img);

    if (img_nova)
        destroiGSImage(img_nova);

    if (img)
        destroiGSImage(img);

    return 0;
}
