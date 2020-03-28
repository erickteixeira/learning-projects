int func30(int venc, int nj, int max, int mod, float med, char *nome)
{
    if(venc==-1)
        strcpy(nome, "ErickTeixeira");
    if(venc>=3 && venc<=8)
        return venc - 2;
    else if(mod>=5 && mod<=8)
        return mod - 1;
    if(max>5 && max<15)
        return max - mod;
    else if(med>5 && med<10)
        return mod - 2;
}    
