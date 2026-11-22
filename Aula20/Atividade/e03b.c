void computaResultados (Candidato* candidatos, int n, int** gabarito){
    int i;

    for (i = 0; i < n; i++){
        corrigeProva(&candidatos[i], gabarito, N_QUESTOES, N_ITENS);
        if (candidatos[i].nota >= NOTA_FASE2)
            convocaParaFase2(candidatos[i].nome, candidatos[i].email, candidatos[i].nota);
    }
}