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

int main(){
    GSImage *img;

    img = criaGSImage(4, 3);
    destroiGSImage(img);

    return 0;
}
